/*
Copyright 2021 mtei

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
// clang-format off
#include <stdint.h>
#include <stdbool.h>
#include <gpio.h>
#include "util.h"
#include "matrix.h"
#include "debounce.h"
#include "quantum.h"
#include "printf.h"
#include "debug.h"
#include "command.h"

#include "at32f402_5xx.h"
#include "at32f402_405_adc.h"
#include "at32f402_405_crm.h"
#include "at32f402_405_dma.h"
#include "at32f402_405_gpio.h"
#include "at32f402_405_misc.h"
#include "at32f402_405_usart.h"

#ifdef DEBUG_UART
#include "debug_config.h"
#endif
#include "hal.h"
volatile uint16_t adc_read_buffer[8] = {0};

/**
  * @brief  adc_gpio configuration.
  * @param  none
  * @retval none
  */
static void adc_gpio_config(void)
{
  gpio_init_type gpio_initstructure;
  crm_periph_clock_enable(CRM_GPIOA_PERIPH_CLOCK, TRUE);

  gpio_default_para_init(&gpio_initstructure);

  /* config adc pin as analog input mode */
  gpio_initstructure.gpio_mode = GPIO_MODE_ANALOG;
  gpio_initstructure.gpio_pins = GPIO_PINS_4 | GPIO_PINS_5 | GPIO_PINS_6;
  gpio_init(GPIOA_LIB, &gpio_initstructure);
}

/**
  * @brief  adc_dma configuration.
  * @param  none
  * @retval none
  */
static void adc_dma_config(void)
{
  dma_init_type dma_init_struct;
  crm_periph_clock_enable(CRM_DMA2_PERIPH_CLOCK, TRUE);
  nvicEnableVector(DMA2_Channel1_IRQn, 11);
  dma_reset(DMA2_CHANNEL1_LIB);
  dma_default_para_init(&dma_init_struct);
  dma_init_struct.buffer_size = 3;
  dma_init_struct.direction = DMA_DIR_PERIPHERAL_TO_MEMORY;
  dma_init_struct.memory_base_addr = (uint32_t)adc_read_buffer;
  dma_init_struct.memory_data_width = DMA_MEMORY_DATA_WIDTH_HALFWORD;
  dma_init_struct.memory_inc_enable = TRUE;
  dma_init_struct.peripheral_base_addr = (uint32_t)&(ADC1_LIB->odt);
  dma_init_struct.peripheral_data_width = DMA_PERIPHERAL_DATA_WIDTH_HALFWORD;
  dma_init_struct.peripheral_inc_enable = FALSE;
  dma_init_struct.priority = DMA_PRIORITY_HIGH;
  dma_init_struct.loop_mode_enable = TRUE;
  dma_init(DMA2_CHANNEL1_LIB, &dma_init_struct);

  dmamux_enable(DMA2_LIB, TRUE);
  dmamux_init(DMA2MUX_CHANNEL1_LIB, DMAMUX_DMAREQ_ID_ADC1);

  /* enable dma transfer complete interrupt */
  dma_interrupt_enable(DMA2_CHANNEL1_LIB, DMA_FDT_INT, TRUE);
  dma_channel_enable(DMA2_CHANNEL1_LIB, TRUE);
}

/**
  * @brief  adc configuration.
  * @param  none
  * @retval none
  */
static void adc_config(void)
{
  adc_base_config_type adc_base_struct;
  crm_periph_clock_enable(CRM_ADC1_PERIPH_CLOCK, TRUE);
  adc_clock_div_set(ADC_DIV_16);
  nvicEnableVector(ADC1_IRQn, 10);

  adc_base_default_para_init(&adc_base_struct);

  adc_base_struct.sequence_mode = TRUE;
  adc_base_struct.repeat_mode = TRUE;
  adc_base_struct.data_align = ADC_RIGHT_ALIGNMENT;
  adc_base_struct.ordinary_channel_length = 3;
  adc_base_config(ADC1_LIB, &adc_base_struct);

  /* config ordinary channel */
  adc_ordinary_channel_set(ADC1_LIB, ADC_CHANNEL_4, 1, ADC_SAMPLETIME_41_5);
  adc_ordinary_channel_set(ADC1_LIB, ADC_CHANNEL_5, 2, ADC_SAMPLETIME_41_5);
  adc_ordinary_channel_set(ADC1_LIB, ADC_CHANNEL_6, 3, ADC_SAMPLETIME_41_5);

  /* config ordinary trigger source and trigger edge */
  adc_ordinary_conversion_trigger_set(ADC1_LIB, ADC12_ORDINARY_TRIG_SOFTWARE, TRUE);

  /* config dma mode,it's not useful when common dma mode is use */
  adc_dma_mode_enable(ADC1_LIB, TRUE);

  /* adc enable */
  adc_enable(ADC1_LIB, TRUE);

  /* adc calibration */
  adc_calibration_init(ADC1_LIB);
  while(adc_calibration_init_status_get(ADC1_LIB));
  adc_calibration_start(ADC1_LIB);
  while(adc_calibration_status_get(ADC1_LIB));
}
/* matrix state(1:on, 0:off) */
extern matrix_row_t raw_matrix[MATRIX_ROWS];  // raw values
extern matrix_row_t matrix[MATRIX_ROWS];      // debounced values

void bubbleSort(uint16_t arr2[], uint16_t n,uint16_t arr[]) {
    for (uint16_t i = 0; i < n ; i++) {
        arr[i] =  arr2[i];
    }
    for (uint16_t i = 0; i < n - 1; ++i) {
        // 每次外层循环都会确定当前未排序部分中的最大/最小值所在位置
        for (uint16_t j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // 如果发现后面的元素更大/更小，则进行交换
                uint16_t temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

#define ADC_MAX 30
uint16_t adc_filter_counter;
uint16_t adc_counter;
uint16_t adc_buffer[255];
uint16_t adc_buffer_arr[255];
uint32_t adc_sum;
uint32_t adc_sum_top;

// A15 C10 v

void matrix_init(void) {
    // // initialize key pinss
    // init_all_ports();
    // uprintf("matrix_init\n");
    // // initialize matrix state: all keys off
    // debounce_init(MATRIX_ROWS);

#ifdef DEBUG_UART
    uart_print_init(115200);
#endif

    adc_gpio_config();
    adc_dma_config();
    adc_config();

    setPinOutputPushPull(A15);
    setPinOutputPushPull(C10);
    setPinOutputPushPull(C11);

    writePinLow(A15);
    writePinLow(C10);
    writePinHigh(C11);
    // matrix_init_kb();
}

uint8_t matrix_scan(void) {

    bool changed = false;
    // debounce raw_matrix[] to matrix[]
    // debounce(raw_matrix, matrix, MATRIX_ROWS, changed);
    // MATRIX_DEBUG_SCAN_END(); MATRIX_DEBUG_GAP();

        adc_ordinary_software_trigger_enable(ADC1_LIB, TRUE);
        while(dma_flag_get(DMA2_FDT1_FLAG) == 0);
        //adc_buffer[i] = adc_read_buffer[1];
// ---- 滑动窗口滤波 ----
        adc_buffer[adc_counter] = adc_read_buffer[1];
        adc_counter++;

        if (adc_counter >= ADC_MAX )
        {
            adc_counter = 0;
        }
// --------------------
// ---- 中位数滤波取值 ----
        bubbleSort(adc_buffer,ADC_MAX,adc_buffer_arr);//冒泡排序
        adc_sum = adc_buffer_arr[ ADC_MAX *2/5 ];

        if(adc_sum_top < adc_sum)
        {
            adc_sum_top = adc_sum;
        }
// --------------------



        //adc_sum /= ADC_MAX;

    // adc_ordinary_software_trigger_enable(ADC1_LIB, TRUE);
    // while(dma_flag_get(DMA2_FDT1_FLAG) == 0);
#ifdef DEBUG_UART
    // printf("adc4 =  %d ",adc_read_buffer[0]);
    // printf("adc5 =  %d ",adc_read_buffer[1]);
    // printf("adc6 =  %d \n",adc_read_buffer[2]);

    printf("%ld  ",adc_sum);
    printf("   %ld  ",adc_sum_top);
    if(adc_sum_top - adc_sum >= 2)
    {
        printf("    presesed\n");
    }
    else
    {
    printf("  \n");
    }
#endif

    // MATRIX_DEBUG_SCAN_START();
    matrix_scan_kb();
    // MATRIX_DEBUG_SCAN_END();
    return (uint8_t)changed;
}
