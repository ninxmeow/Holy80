
#ifdef DEBUG_UART
#include "debug_config.h"
#include "at32f402_405_usart.h"
#include "at32f402_405_crm.h"
#include "at32f402_405_gpio.h"

// #define PRINT_UART                       USART1_LIB
// #define PRINT_UART_CRM_CLK               CRM_USART1_PERIPH_CLOCK
// #define PRINT_UART_TX_PIN                GPIO_PINS_9
// #define PRINT_UART_TX_GPIO               GPIOA_LIB
// #define PRINT_UART_TX_GPIO_CRM_CLK       CRM_GPIOA_PERIPH_CLOCK
// #define PRINT_UART_TX_PIN_SOURCE         GPIO_PINS_SOURCE9
// #define PRINT_UART_TX_PIN_MUX_NUM        GPIO_MUX_7

// #define PRINT_UART                       USART2_LIB
// #define PRINT_UART_CRM_CLK               CRM_USART2_PERIPH_CLOCK
// #define PRINT_UART_TX_PIN                GPIO_PINS_8
// #define PRINT_UART_TX_GPIO               GPIOA_LIB
// #define PRINT_UART_TX_GPIO_CRM_CLK       CRM_GPIOA_PERIPH_CLOCK
// #define PRINT_UART_TX_PIN_SOURCE         GPIO_PINS_SOURCE8
// #define PRINT_UART_TX_PIN_MUX_NUM        GPIO_MUX_8

// -- EC61H --
#define PRINT_UART                       USART1_LIB
#define PRINT_UART_CRM_CLK               CRM_USART1_PERIPH_CLOCK
#define PRINT_UART_TX_PIN                GPIO_PINS_6
#define PRINT_UART_TX_GPIO               GPIOB_LIB
#define PRINT_UART_TX_GPIO_CRM_CLK       CRM_GPIOB_PERIPH_CLOCK
#define PRINT_UART_TX_PIN_SOURCE         GPIO_PINS_SOURCE6
#define PRINT_UART_TX_PIN_MUX_NUM        GPIO_MUX_7

/**
  * @brief  initialize uart
  * @param  baudrate: uart baudrate
  * @retval none
  */
void uart_print_init(uint32_t baudrate)
{
  gpio_init_type gpio_init_struct;

  /* enable the uart and gpio clock */
  crm_periph_clock_enable(PRINT_UART_CRM_CLK, TRUE);
  crm_periph_clock_enable(PRINT_UART_TX_GPIO_CRM_CLK, TRUE);

  gpio_default_para_init(&gpio_init_struct);

  /* configure the uart tx pin */
  gpio_init_struct.gpio_drive_strength = GPIO_DRIVE_STRENGTH_STRONGER;
  gpio_init_struct.gpio_out_type  = GPIO_OUTPUT_PUSH_PULL;
  gpio_init_struct.gpio_mode = GPIO_MODE_MUX;
  gpio_init_struct.gpio_pins = PRINT_UART_TX_PIN;
  gpio_init_struct.gpio_pull = GPIO_PULL_NONE;
  gpio_init(PRINT_UART_TX_GPIO, &gpio_init_struct);

  gpio_pin_mux_config(PRINT_UART_TX_GPIO, PRINT_UART_TX_PIN_SOURCE, PRINT_UART_TX_PIN_MUX_NUM);

  /* configure uart param */
  usart_init(PRINT_UART, baudrate, USART_DATA_8BITS, USART_STOP_1_BIT);
  usart_transmitter_enable(PRINT_UART, TRUE);
  usart_enable(PRINT_UART, TRUE);
}


void print_uart(uint8_t *p,uint8_t l)
{
    for(uint8_t i = 0;i<l ; i++)
    {
        while(usart_flag_get(PRINT_UART, USART_TDBE_FLAG) == RESET);
        usart_data_transmit(PRINT_UART,*(p+i));
    }

}

int8_t sendchar(uint8_t c) {
    while(usart_flag_get(PRINT_UART, USART_TDBE_FLAG) == RESET);
    usart_data_transmit(PRINT_UART,c);
    return 0;
}


#endif
