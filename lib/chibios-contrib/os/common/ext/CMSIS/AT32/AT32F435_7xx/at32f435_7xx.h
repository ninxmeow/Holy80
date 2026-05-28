/**
  **************************************************************************
  * @file     at32f435_437.h
  * @brief    at32f435_437 header file
  **************************************************************************
  *                       Copyright notice & Disclaimer
  *
  * The software Board Support Package (BSP) that is made available to
  * download from Artery official website is the copyrighted work of Artery.
  * Artery authorizes customers to use, copy, and distribute the BSP
  * software and its related documentation for the purpose of design and
  * development in conjunction with Artery microcontrollers. Use of the
  * software is governed by this copyright notice and the following disclaimer.
  *
  * THIS SOFTWARE IS PROVIDED ON "AS IS" BASIS WITHOUT WARRANTIES,
  * GUARANTEES OR REPRESENTATIONS OF ANY KIND. ARTERY EXPRESSLY DISCLAIMS,
  * TO THE FULLEST EXTENT PERMITTED BY LAW, ALL EXPRESS, IMPLIED OR
  * STATUTORY OR OTHER WARRANTIES, GUARANTEES OR REPRESENTATIONS,
  * INCLUDING BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY,
  * FITNESS FOR A PARTICULAR PURPOSE, OR NON-INFRINGEMENT.
  *
  **************************************************************************
  */

#ifndef __AT32F435_437_H
#define __AT32F435_437_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined (__CC_ARM)
 #pragma anon_unions
#endif


/** @addtogroup CMSIS
  * @{
  */

/** @addtogroup AT32F435_437
  * @{
  */

/** @addtogroup Library_configuration_section
  * @{
  */

/**
  * tip: to avoid modifying this file each time you need to switch between these
  *      devices, you can define the device in your toolchain compiler preprocessor.
  */

#if !defined (AT32F435CCU7) && !defined (AT32F435CGU7) && !defined (AT32F435CMU7) && \
    !defined (AT32F435CCT7) && !defined (AT32F435CGT7) && !defined (AT32F435CMT7) && \
    !defined (AT32F435RCT7) && !defined (AT32F435RGT7) && !defined (AT32F435RMT7) && \
    !defined (AT32F435VCT7) && !defined (AT32F435VGT7) && !defined (AT32F435VMT7) && \
    !defined (AT32F435ZCT7) && !defined (AT32F435ZGT7) && !defined (AT32F435ZMT7) && \
    !defined (AT32F437RCT7) && !defined (AT32F437RGT7) && !defined (AT32F437RMT7) && \
    !defined (AT32F437VCT7) && !defined (AT32F437VGT7) && !defined (AT32F437VMT7) && \
    !defined (AT32F437ZCT7) && !defined (AT32F437ZGT7) && !defined (AT32F437ZMT7)

    #error "Please select first the target device used in your application (in at32f435_437.h file)"
#endif

#if defined (AT32F435CCU7) || defined (AT32F435CGU7) || defined (AT32F435CMU7) || \
    defined (AT32F435CCT7) || defined (AT32F435CGT7) || defined (AT32F435CMT7) || \
    defined (AT32F435RCT7) || defined (AT32F435RGT7) || defined (AT32F435RMT7) || \
    defined (AT32F435VCT7) || defined (AT32F435VGT7) || defined (AT32F435VMT7) || \
    defined (AT32F435ZCT7) || defined (AT32F435ZGT7) || defined (AT32F435ZMT7)

    #define AT32F435xx
#endif

#if defined (AT32F437RCT7) || defined (AT32F437RGT7) || defined (AT32F437RMT7) || \
    defined (AT32F437VCT7) || defined (AT32F437VGT7) || defined (AT32F437VMT7) || \
    defined (AT32F437ZCT7) || defined (AT32F437ZGT7) || defined (AT32F437ZMT7)

    #define AT32F437xx
#endif

#if defined (AT32F435ZCT7) || defined (AT32F435ZGT7) || defined (AT32F435ZMT7)

    #define AT32F435Zx
#endif

#if defined (AT32F435VCT7) || defined (AT32F435VGT7) || defined (AT32F435VMT7)

    #define AT32F435Vx
#endif

#if defined (AT32F435RCT7) || defined (AT32F435RGT7) || defined (AT32F435RMT7)

    #define AT32F435Rx
#endif

#if defined (AT32F435CCU7) || defined (AT32F435CGU7) || defined (AT32F435CMU7) || \
    defined (AT32F435CCT7) || defined (AT32F435CGT7) || defined (AT32F435CMT7)

    #define AT32F435Cx
#endif

#if defined (AT32F437ZCT7) || defined (AT32F437ZGT7) || defined (AT32F437ZMT7)

    #define AT32F437Zx
#endif

#if defined (AT32F437VCT7) || defined (AT32F437VGT7) || defined (AT32F437VMT7)

    #define AT32F437Vx
#endif

#if defined (AT32F437RCT7) || defined (AT32F437RGT7) || defined (AT32F437RMT7)

    #define AT32F437Rx
#endif

#ifndef USE_STDPERIPH_DRIVER
/**
  * @brief comment the line below if you will not use the peripherals drivers.
  * in this case, these drivers will not be included and the application code will
  * be based on direct access to peripherals registers
  */
  #ifdef _RTE_
    #include "RTE_Components.h"
    #ifdef RTE_DEVICE_STDPERIPH_FRAMEWORK
      #define USE_STDPERIPH_DRIVER
    #endif
  #endif
#endif

/**
  * @brief at32f435_437 standard peripheral library version number
  */
#define __AT32F435_437_LIBRARY_VERSION_MAJOR    (0x02) /*!< [31:24] major version */
#define __AT32F435_437_LIBRARY_VERSION_MIDDLE   (0x01) /*!< [23:16] middle version */
#define __AT32F435_437_LIBRARY_VERSION_MINOR    (0x02) /*!< [15:8]  minor version */
#define __AT32F435_437_LIBRARY_VERSION_RC       (0x00) /*!< [7:0]  release candidate */
#define __AT32F435_437_LIBRARY_VERSION          ((__AT32F435_437_LIBRARY_VERSION_MAJOR << 24)  | \
                                                 (__AT32F435_437_LIBRARY_VERSION_MIDDLE << 16) | \
                                                 (__AT32F435_437_LIBRARY_VERSION_MINOR << 8)   | \
                                                 (__AT32F435_437_LIBRARY_VERSION_RC))

/**
  * @}
  */

/** @addtogroup configuration_section_for_cmsis
  * @{
  */

/**
  * @brief configuration of the cortex-m4 processor and core peripherals
  */
#define __CM4_REV                 0x0001U  /*!< core revision r0p1                           */
#define __MPU_PRESENT             1        /*!< mpu present                                  */
#define __NVIC_PRIO_BITS          4        /*!< at32 uses 4 bits for the priority levels     */
#define __Vendor_SysTickConfig    0        /*!< set to 1 if different systick config is used */
#define __FPU_PRESENT             1U       /*!< fpu present                                  */

/**
  * @brief at32f435_437 interrupt number definition, according to the selected device
  *        in @ref library_configuration_section
  */
typedef enum IRQn
{
    /******  cortex-m4 processor exceptions numbers ***************************************************/
    Reset_IRQn                  = -15,    /*!< 1 reset vector, invoked on power up and warm reset   */
    NonMaskableInt_IRQn         = -14,    /*!< 2 non maskable interrupt                             */
    HardFault_IRQn              = -13,    /*!< 3 hard fault, all classes of fault                   */
    MemoryManagement_IRQn       = -12,    /*!< 4 cortex-m4 memory management interrupt              */
    BusFault_IRQn               = -11,    /*!< 5 cortex-m4 bus fault interrupt                      */
    UsageFault_IRQn             = -10,    /*!< 6 cortex-m4 usage fault interrupt                    */
    SVCall_IRQn                 = -5,     /*!< 11 cortex-m4 sv call interrupt                       */
    DebugMonitor_IRQn           = -4,     /*!< 12 cortex-m4 debug monitor interrupt                 */
    PendSV_IRQn                 = -2,     /*!< 14 cortex-m4 pend sv interrupt                       */
    SysTick_IRQn                = -1,     /*!< 15 cortex-m4 system tick interrupt                   */

    /******  at32 specific interrupt numbers *********************************************************/
    WWDT_IRQn                   = 0,      /*!< window watchdog timer interrupt                      */
    PVM_IRQn                    = 1,      /*!< pvm through exint line detection interrupt           */
    TAMP_STAMP_IRQn             = 2,      /*!< tamper and timestamp interrupts through the exint line */
    ERTC_WKUP_IRQn              = 3,      /*!< ertc wakeup through the exint line                   */
    FLASH_IRQn                  = 4,      /*!< flash global interrupt                               */
    CRM_IRQn                    = 5,      /*!< crm global interrupt                                 */
    EXINT0_IRQn                 = 6,      /*!< exint line0 interrupt                                */
    EXINT1_IRQn                 = 7,      /*!< exint line1 interrupt                                */
    EXINT2_IRQn                 = 8,      /*!< exint line2 interrupt                                */
    EXINT3_IRQn                 = 9,      /*!< exint line3 interrupt                                */
    EXINT4_IRQn                 = 10,     /*!< exint line4 interrupt                                */
    EDMA_Stream1_IRQn           = 11,     /*!< edma stream 1 global interrupt                       */
    EDMA_Stream2_IRQn           = 12,     /*!< edma stream 2 global interrupt                       */
    EDMA_Stream3_IRQn           = 13,     /*!< edma stream 3 global interrupt                       */
    EDMA_Stream4_IRQn           = 14,     /*!< edma stream 4 global interrupt                       */
    EDMA_Stream5_IRQn           = 15,     /*!< edma stream 5 global interrupt                       */
    EDMA_Stream6_IRQn           = 16,     /*!< edma stream 6 global interrupt                       */
    EDMA_Stream7_IRQn           = 17,     /*!< edma stream 7 global interrupt                       */

#if defined (AT32F435xx)
    ADC1_2_3_IRQn               = 18,     /*!< adc1 adc2 and adc3 global interrupt                  */
    CAN1_TX_IRQn                = 19,     /*!< can1 tx interrupts                                   */
    CAN1_RX0_IRQn               = 20,     /*!< can1 rx0 interrupts                                  */
    CAN1_RX1_IRQn               = 21,     /*!< can1 rx1 interrupt                                   */
    CAN1_SE_IRQn                = 22,     /*!< can1 se interrupt                                    */
    EXINT9_5_IRQn               = 23,     /*!< external line[9:5] interrupts                        */
    TMR1_BRK_TMR9_IRQn          = 24,     /*!< tmr1 brake interrupt                                 */
    TMR1_OVF_TMR10_IRQn         = 25,     /*!< tmr1 overflow interrupt                              */
    TMR1_TRG_HALL_TMR11_IRQn    = 26,     /*!< tmr1 trigger and hall interrupt                      */
    TMR1_CH_IRQn                = 27,     /*!< tmr1 channel interrupt                               */
    TMR2_GLOBAL_IRQn            = 28,     /*!< tmr2 global interrupt                                */
    TMR3_GLOBAL_IRQn            = 29,     /*!< tmr3 global interrupt                                */
    TMR4_GLOBAL_IRQn            = 30,     /*!< tmr4 global interrupt                                */
    I2C1_EVT_IRQn               = 31,     /*!< i2c1 event interrupt                                 */
    I2C1_ERR_IRQn               = 32,     /*!< i2c1 error interrupt                                 */
    I2C2_EVT_IRQn               = 33,     /*!< i2c2 event interrupt                                 */
    I2C2_ERR_IRQn               = 34,     /*!< i2c2 error interrupt                                 */
    SPI1_IRQn                   = 35,     /*!< spi1 global interrupt                                */
    SPI2_I2S2EXT_IRQn           = 36,     /*!< spi2 global interrupt                                */
    USART1_IRQn                 = 37,     /*!< usart1 global interrupt                              */
    USART2_IRQn                 = 38,     /*!< usart2 global interrupt                              */
    USART3_IRQn                 = 39,     /*!< usart3 global interrupt                              */
    EXINT15_10_IRQn             = 40,     /*!< external line[15:10] interrupts                      */
    ERTCAlarm_IRQn              = 41,     /*!< ertc alarm through exint line interrupt              */
    OTGFS1_WKUP_IRQn            = 42,     /*!< otgfs1 wakeup from suspend through exint line interrupt */
    TMR8_BRK_TMR12_IRQn         = 43,     /*!< tmr8 brake interrupt                                 */
    TMR8_OVF_TMR13_IRQn         = 44,     /*!< tmr8 overflow interrupt                              */
    TMR8_TRG_HALL_TMR14_IRQn    = 45,     /*!< tmr8 trigger and hall interrupt                      */
    TMR8_CH_IRQn                = 46,     /*!< tmr8 channel interrupt                               */
    EDMA_Stream8_IRQn           = 47,     /*!< edma stream 8 global interrupt                       */
    XMC_IRQn                    = 48,     /*!< xmc global interrupt                                 */
    SDIO1_IRQn                  = 49,     /*!< sdio global interrupt                                */
    TMR5_GLOBAL_IRQn            = 50,     /*!< tmr5 global interrupt                                */
    SPI3_I2S3EXT_IRQn           = 51,     /*!< spi3 global interrupt                                */
    UART4_IRQn                  = 52,     /*!< uart4 global interrupt                               */
    UART5_IRQn                  = 53,     /*!< uart5 global interrupt                               */
    TMR6_DAC_GLOBAL_IRQn        = 54,     /*!< tmr6 and dac global interrupt                        */
    TMR7_GLOBAL_IRQn            = 55,     /*!< tmr7 global interrupt                                */
    DMA1_Channel1_IRQn          = 56,     /*!< dma1 channel 0 global interrupt                      */
    DMA1_Channel2_IRQn          = 57,     /*!< dma1 channel 1 global interrupt                      */
    DMA1_Channel3_IRQn          = 58,     /*!< dma1 channel 2 global interrupt                      */
    DMA1_Channel4_IRQn          = 59,     /*!< dma1 channel 3 global interrupt                      */
    DMA1_Channel5_IRQn          = 60,     /*!< dma1 channel 4 global interrupt                      */
    CAN2_TX_IRQn                = 63,     /*!< can2 tx interrupt                                    */
    CAN2_RX0_IRQn               = 64,     /*!< can2 rx0 interrupt                                   */
    CAN2_RX1_IRQn               = 65,     /*!< can2 rx1 interrupt                                   */
    CAN2_SE_IRQn                = 66,     /*!< can2 se interrupt                                    */
    OTGFS1_IRQn                 = 67,     /*!< otgfs1 interrupt                                     */
    DMA1_Channel6_IRQn          = 68,     /*!< dma1 channel 5 global interrupt                      */
    DMA1_Channel7_IRQn          = 69,     /*!< dma1 channel 6 global interrupt                      */
    USART6_IRQn                 = 71,     /*!< usart6 interrupt                                     */
    I2C3_EVT_IRQn               = 72,     /*!< i2c3 event interrupt                                 */
    I2C3_ERR_IRQn               = 73,     /*!< i2c3 error interrupt                                 */
    OTGFS2_WKUP_IRQn            = 76,     /*!< otgfs2 wakeup from suspend through exint line interrupt */
    OTGFS2_IRQn                 = 77,     /*!< otgfs2 interrupt                                     */
    DVP_IRQn                    = 78,     /*!< dvp interrupt                                        */
    FPU_IRQn                    = 81,     /*!< fpu interrupt                                        */
    UART7_IRQn                  = 82,     /*!< uart7 interrupt                                      */
    UART8_IRQn                  = 83,     /*!< uart8 interrupt                                      */
    SPI4_IRQn                   = 84,     /*!< spi4 global interrupt                                */
    QSPI2_IRQn                  = 91,     /*!< qspi2 global interrupt                               */
    QSPI1_IRQn                  = 92,     /*!< qspi1 global interrupt                               */
    DMAMUX_IRQn                 = 94,     /*!< dmamux global interrupt                              */
    SDIO2_IRQn                  = 102,    /*!< sdio2 global interrupt                               */
    ACC_IRQn                    = 103,    /*!< acc interrupt                                        */
    TMR20_BRK_IRQn              = 104,    /*!< tmr20 brake interrupt                                */
    TMR20_OVF_IRQn              = 105,    /*!< tmr20 overflow interrupt                             */
    TMR20_TRG_HALL_IRQn         = 106,    /*!< tmr20 trigger and hall interrupt                     */
    TMR20_CH_IRQn               = 107,    /*!< tmr20 channel interrupt                              */
    DMA2_Channel1_IRQn          = 108,    /*!< dma2 channel 1 global interrupt                      */
    DMA2_Channel2_IRQn          = 109,    /*!< dma2 channel 2 global interrupt                      */
    DMA2_Channel3_IRQn          = 110,    /*!< dma2 channel 3 global interrupt                      */
    DMA2_Channel4_IRQn          = 111,    /*!< dma2 channel 4 global interrupt                      */
    DMA2_Channel5_IRQn          = 112,    /*!< dma2 channel 5 global interrupt                      */
    DMA2_Channel6_IRQn          = 113,    /*!< dma2 channel 6 global interrupt                      */
    DMA2_Channel7_IRQn          = 114,    /*!< dma2 channel 7 global interrupt                      */
#endif

#if defined (AT32F437xx)
    ADC1_2_3_IRQn               = 18,     /*!< adc1 adc2 and adc3 global interrupt                  */
    CAN1_TX_IRQn                = 19,     /*!< can1 tx interrupts                                   */
    CAN1_RX0_IRQn               = 20,     /*!< can1 rx0 interrupts                                  */
    CAN1_RX1_IRQn               = 21,     /*!< can1 rx1 interrupt                                   */
    CAN1_SE_IRQn                = 22,     /*!< can1 se interrupt                                    */
    EXINT9_5_IRQn               = 23,     /*!< external line[9:5] interrupts                        */
    TMR1_BRK_TMR9_IRQn          = 24,     /*!< tmr1 brake interrupt                                 */
    TMR1_OVF_TMR10_IRQn         = 25,     /*!< tmr1 overflow interrupt                              */
    TMR1_TRG_HALL_TMR11_IRQn    = 26,     /*!< tmr1 trigger and hall interrupt                      */
    TMR1_CH_IRQn                = 27,     /*!< tmr1 channel interrupt                               */
    TMR2_GLOBAL_IRQn            = 28,     /*!< tmr2 global interrupt                                */
    TMR3_GLOBAL_IRQn            = 29,     /*!< tmr3 global interrupt                                */
    TMR4_GLOBAL_IRQn            = 30,     /*!< tmr4 global interrupt                                */
    I2C1_EVT_IRQn               = 31,     /*!< i2c1 event interrupt                                 */
    I2C1_ERR_IRQn               = 32,     /*!< i2c1 error interrupt                                 */
    I2C2_EVT_IRQn               = 33,     /*!< i2c2 event interrupt                                 */
    I2C2_ERR_IRQn               = 34,     /*!< i2c2 error interrupt                                 */
    SPI1_IRQn                   = 35,     /*!< spi1 global interrupt                                */
    SPI2_I2S2EXT_IRQn           = 36,     /*!< spi2 global interrupt                                */
    USART1_IRQn                 = 37,     /*!< usart1 global interrupt                              */
    USART2_IRQn                 = 38,     /*!< usart2 global interrupt                              */
    USART3_IRQn                 = 39,     /*!< usart3 global interrupt                              */
    EXINT15_10_IRQn             = 40,     /*!< external line[15:10] interrupts                      */
    ERTCAlarm_IRQn              = 41,     /*!< ertc alarm through exint line interrupt              */
    OTGFS1_WKUP_IRQn            = 42,     /*!< otgfs1 wakeup from suspend through exint line interrupt */
    TMR8_BRK_TMR12_IRQn         = 43,     /*!< tmr8 brake interrupt                                 */
    TMR8_OVF_TMR13_IRQn         = 44,     /*!< tmr8 overflow interrupt                              */
    TMR8_TRG_HALL_TMR14_IRQn    = 45,     /*!< tmr8 trigger and hall interrupt                      */
    TMR8_CH_IRQn                = 46,     /*!< tmr8 channel interrupt                               */
    EDMA_Stream8_IRQn           = 47,     /*!< dma1 stream 8 global interrupt                       */
    XMC_IRQn                    = 48,     /*!< xmc global interrupt                                 */
    SDIO1_IRQn                  = 49,     /*!< sdio global interrupt                                */
    TMR5_GLOBAL_IRQn            = 50,     /*!< tmr5 global interrupt                                */
    SPI3_I2S3EXT_IRQn           = 51,     /*!< spi3 global interrupt                                */
    UART4_IRQn                  = 52,     /*!< uart4 global interrupt                               */
    UART5_IRQn                  = 53,     /*!< uart5 global interrupt                               */
    TMR6_DAC_GLOBAL_IRQn        = 54,     /*!< tmr6 and dac global interrupt                        */
    TMR7_GLOBAL_IRQn            = 55,     /*!< tmr7 global interrupt                                */
    DMA1_Channel1_IRQn          = 56,     /*!< dma1 channel 0 global interrupt                      */
    DMA1_Channel2_IRQn          = 57,     /*!< dma1 channel 1 global interrupt                      */
    DMA1_Channel3_IRQn          = 58,     /*!< dma1 channel 2 global interrupt                      */
    DMA1_Channel4_IRQn          = 59,     /*!< dma1 channel 3 global interrupt                      */
    DMA1_Channel5_IRQn          = 60,     /*!< dma1 channel 4 global interrupt                      */
    EMAC_IRQn                   = 61,     /*!< emac interrupt                                       */
    EMAC_WKUP_IRQn              = 62,     /*!< emac wakeup interrupt                                */
    CAN2_TX_IRQn                = 63,     /*!< can2 tx interrupt                                    */
    CAN2_RX0_IRQn               = 64,     /*!< can2 rx0 interrupt                                   */
    CAN2_RX1_IRQn               = 65,     /*!< can2 rx1 interrupt                                   */
    CAN2_SE_IRQn                = 66,     /*!< can2 se interrupt                                    */
    OTGFS1_IRQn                 = 67,     /*!< otgfs1 interrupt                                     */
    DMA1_Channel6_IRQn          = 68,     /*!< dma1 channel 5 global interrupt                      */
    DMA1_Channel7_IRQn          = 69,     /*!< dma1 channel 6 global interrupt                      */
    USART6_IRQn                 = 71,     /*!< usart6 interrupt                                     */
    I2C3_EVT_IRQn               = 72,     /*!< i2c3 event interrupt                                 */
    I2C3_ERR_IRQn               = 73,     /*!< i2c3 error interrupt                                 */
    OTGFS2_WKUP_IRQn            = 76,     /*!< otgfs2 wakeup from suspend through exint line interrupt */
    OTGFS2_IRQn                 = 77,     /*!< otgfs2 interrupt                                     */
    DVP_IRQn                    = 78,     /*!< dvp interrupt                                        */
    FPU_IRQn                    = 81,     /*!< fpu interrupt                                        */
    UART7_IRQn                  = 82,     /*!< uart7 interrupt                                      */
    UART8_IRQn                  = 83,     /*!< uart8 interrupt                                      */
    SPI4_IRQn                   = 84,     /*!< spi4 global interrupt                                */
    QSPI2_IRQn                  = 91,     /*!< qspi2 global interrupt                               */
    QSPI1_IRQn                  = 92,     /*!< qspi1 global interrupt                               */
    DMAMUX_IRQn                 = 94,     /*!< dmamux global interrupt                              */
    SDIO2_IRQn                  = 102,    /*!< sdio2 global interrupt                               */
    ACC_IRQn                    = 103,    /*!< acc interrupt                                        */
    TMR20_BRK_IRQn              = 104,    /*!< tmr20 brake interrupt                                */
    TMR20_OVF_IRQn              = 105,    /*!< tmr20 overflow interrupt                             */
    TMR20_TRG_HALL_IRQn         = 106,    /*!< tmr20 trigger and hall interrupt                     */
    TMR20_CH_IRQn               = 107,    /*!< tmr20 channel interrupt                              */
    DMA2_Channel1_IRQn          = 108,    /*!< dma2 channel 1 global interrupt                      */
    DMA2_Channel2_IRQn          = 109,    /*!< dma2 channel 2 global interrupt                      */
    DMA2_Channel3_IRQn          = 110,    /*!< dma2 channel 3 global interrupt                      */
    DMA2_Channel4_IRQn          = 111,    /*!< dma2 channel 4 global interrupt                      */
    DMA2_Channel5_IRQn          = 112,    /*!< dma2 channel 5 global interrupt                      */
    DMA2_Channel6_IRQn          = 113,    /*!< dma2 channel 6 global interrupt                      */
    DMA2_Channel7_IRQn          = 114,    /*!< dma2 channel 7 global interrupt                      */
#endif

} IRQn_Type;

/**
  * @}
  */

#include "core_cm4.h"
#include <stdint.h>

/** @addtogroup Exported_types
  * @{
  */

typedef int32_t  INT32;
typedef int16_t  INT16;
typedef int8_t   INT8;
typedef uint32_t UINT32;
typedef uint16_t UINT16;
typedef uint8_t  UINT8;

typedef int32_t  s32;
typedef int16_t  s16;
typedef int8_t   s8;

typedef const int32_t sc32;   /*!< read only */
typedef const int16_t sc16;   /*!< read only */
typedef const int8_t  sc8;    /*!< read only */

typedef __IO int32_t  vs32;
typedef __IO int16_t  vs16;
typedef __IO int8_t   vs8;

typedef __I int32_t vsc32;    /*!< read only */
typedef __I int16_t vsc16;    /*!< read only */
typedef __I int8_t  vsc8;     /*!< read only */

typedef uint32_t u32;
typedef uint16_t u16;
typedef uint8_t  u8;

typedef const uint32_t uc32;  /*!< read only */
typedef const uint16_t uc16;  /*!< read only */
typedef const uint8_t  uc8;   /*!< read only */

typedef __IO uint32_t vu32;
typedef __IO uint16_t vu16;
typedef __IO uint8_t  vu8;

typedef __I uint32_t vuc32;   /*!< read only */
typedef __I uint16_t vuc16;   /*!< read only */
typedef __I uint8_t  vuc8;    /*!< read only */

typedef enum {RESET = 0, SET = !RESET} flag_status;
typedef enum {ERROR = 0, SUCCESS = !ERROR} error_status;

/**
  * @}
  */

/** @addtogroup Exported_macro
  * @{
  */

#define REG8(addr)                       *(volatile uint8_t *)(addr)
#define REG16(addr)                      *(volatile uint16_t *)(addr)
#define REG32(addr)                      *(volatile uint32_t *)(addr)

#define MAKE_VALUE(reg_offset, bit_num)  (((reg_offset) << 16) | (bit_num & 0x1f))

#define PERIPH_REG(periph_base, value)   REG32((periph_base + (value >> 16)))
#define PERIPH_REG_BIT(value)            (0x1u << (value & 0x1f))

/**
  * @}
  */

/** @addtogroup Bit_definition
  * @{
  */
/******************  Bit definition for CRM_CTRL register  *****************/
#define CRM_CTRL_HICKEN                  (0x1U << 0)
#define CRM_CTRL_HICKSTBL                (0x1U << 1)
#define CRM_CTRL_HICKTRIM                (0x3FU << 2)
#define CRM_CTRL_HEXTEN                  (0x1U << 16)
#define CRM_CTRL_HEXTSTBL                (0x1U << 17)
#define CRM_CTRL_HEXTBYPS                (0x1U << 18)
#define CRM_CTRL_CFDEN                   (0x1U << 19)
#define CRM_CTRL_PLLEN                   (0x1U << 24)
#define CRM_CTRL_PLLSTBL                 (0x1U << 25)

/******************  Bit definition for CRM_CFG register  ******************/
#define CRM_CFG_SCLKSEL                  (0x3U << 0)
#define CRM_CFG_SCLK_HICK                (0x0U << 0)
#define CRM_CFG_SCLK_HEXT                (0x1U << 0)
#define CRM_CFG_SCLK_PLL                 (0x2U << 0)
#define CRM_CFG_SCLKSTS                  (0x3U << 2)
#define CRM_CFG_SCLKSTS_HICK             (0x0U << 2)
#define CRM_CFG_SCLKSTS_HEXT             (0x1U << 2)
#define CRM_CFG_SCLKSTS_PLL              (0x2U << 2)

/*****************  Bit definition for CRM_AHBRST1 register  ***************/
#define CRM_AHBRST1_GPIOARST             (0x1U << 0)
#define CRM_AHBRST1_GPIOBRST             (0x1U << 1)
#define CRM_AHBRST1_GPIOCRST             (0x1U << 2)
#define CRM_AHBRST1_GPIODRST             (0x1U << 3)
#define CRM_AHBRST1_GPIOERST             (0x1U << 4)
#define CRM_AHBRST1_GPIOFRST             (0x1U << 5)
#define CRM_AHBRST1_GPIOGRST             (0x1U << 6)
#define CRM_AHBRST1_GPIOHRST             (0x1U << 7)
#define CRM_AHBRST1_CRCRST               (0x1U << 12)
#define CRM_AHBRST1_EDMARST              (0x1U << 21)
#define CRM_AHBRST1_DMA1RST              (0x1U << 22)
#define CRM_AHBRST1_DMA2RST              (0x1U << 24)
#define CRM_AHBRST1_EMACRST              (0x1U << 25)
#define CRM_AHBRST1_OTGFS2RST            (0x1U << 29)

/*****************  Bit definition for CRM_AHBRST2 register  ***************/
#define CRM_AHBRST2_DVPRST               (0x1U << 0)
#define CRM_AHBRST2_OTGFS1RST            (0x1U << 7)
#define CRM_AHBRST2_SDIO1RST             (0x1U << 15)

/*****************  Bit definition for CRM_AHBRST3 register  ***************/
#define CRM_AHBRST3_XMCRST               (0x1U << 0)
#define CRM_AHBRST3_QSPI1RST             (0x1U << 1)
#define CRM_AHBRST3_QSPI2RST             (0x1U << 14)
#define CRM_AHBRST3_SDIO2RST             (0x1U << 15)

/*****************  Bit definition for CRM_APB1RST register  ***************/
#define CRM_APB1RST_TMR2RST              (0x1U << 0)
#define CRM_APB1RST_TMR3RST              (0x1U << 1)
#define CRM_APB1RST_TMR4RST              (0x1U << 2)
#define CRM_APB1RST_TMR5RST              (0x1U << 3)
#define CRM_APB1RST_TMR6RST              (0x1U << 4)
#define CRM_APB1RST_TMR7RST              (0x1U << 5)
#define CRM_APB1RST_TMR12RST             (0x1U << 6)
#define CRM_APB1RST_TMR13RST             (0x1U << 7)
#define CRM_APB1RST_TMR14RST             (0x1U << 8)
#define CRM_APB1RST_WWDTRST              (0x1U << 11)
#define CRM_APB1RST_SPI2RST              (0x1U << 14)
#define CRM_APB1RST_SPI3RST              (0x1U << 15)
#define CRM_APB1RST_USART2RST            (0x1U << 17)
#define CRM_APB1RST_USART3RST            (0x1U << 18)
#define CRM_APB1RST_UART4RST             (0x1U << 19)
#define CRM_APB1RST_UART5RST             (0x1U << 20)
#define CRM_APB1RST_I2C1RST              (0x1U << 21)
#define CRM_APB1RST_I2C2RST              (0x1U << 22)
#define CRM_APB1RST_I2C3RST              (0x1U << 23)
#define CRM_APB1RST_CAN1RST              (0x1U << 25)
#define CRM_APB1RST_CAN2RST              (0x1U << 26)
#define CRM_APB1RST_PWCRST               (0x1U << 28)
#define CRM_APB1RST_DACRST               (0x1U << 29)
#define CRM_APB1RST_UART7RST             (0x1U << 30)
#define CRM_APB1RST_UART8RST             (0x1U << 31)

/*****************  Bit definition for CRM_APB2RST register  ***************/
#define CRM_APB2RST_TMR1RST              (0x1U << 0)
#define CRM_APB2RST_TMR8RST              (0x1U << 1)
#define CRM_APB2RST_USART1RST            (0x1U << 4)
#define CRM_APB2RST_USART6RST            (0x1U << 5)
#define CRM_APB2RST_ADC1RST              (0x1U << 8)
#define CRM_APB2RST_ADC2RST              (0x1U << 8)
#define CRM_APB2RST_ADC3RST              (0x1U << 8)
#define CRM_APB2RST_SPI1RST              (0x1U << 12)
#define CRM_APB2RST_SPI4RST              (0x1U << 13)
#define CRM_APB2RST_SCFGRST              (0x1U << 14)
#define CRM_APB2RST_TMR9RST              (0x1U << 16)
#define CRM_APB2RST_TMR10RST             (0x1U << 17)
#define CRM_APB2RST_TMR11RST             (0x1U << 18)
#define CRM_APB2RST_TMR20RST             (0x1U << 20)
#define CRM_APB2RST_ACCRST               (0x1U << 29)

/*****************  Bit definition for CRM_AHBEN1 register  ***************/
#define CRM_AHBEN1_GPIOAEN               (0x1U << 0)
#define CRM_AHBEN1_GPIOBEN               (0x1U << 1)
#define CRM_AHBEN1_GPIOCEN               (0x1U << 2)
#define CRM_AHBEN1_GPIODEN               (0x1U << 3)
#define CRM_AHBEN1_GPIOEEN               (0x1U << 4)
#define CRM_AHBEN1_GPIOFEN               (0x1U << 5)
#define CRM_AHBEN1_GPIOGEN               (0x1U << 6)
#define CRM_AHBEN1_GPIOHEN               (0x1U << 7)
#define CRM_AHBEN1_CRCEN                 (0x1U << 12)
#define CRM_AHBEN1_EDMAEN                (0x1U << 21)
#define CRM_AHBEN1_DMA1EN                (0x1U << 22)
#define CRM_AHBEN1_DMA2EN                (0x1U << 24)
#define CRM_AHBEN1_EMACEN                (0x1U << 25)
#define CRM_AHBEN1_OTGFS2EN              (0x1U << 29)

/*****************  Bit definition for CRM_AHBEN2 register  ***************/
#define CRM_AHBEN2_DVPEN                 (0x1U << 0)
#define CRM_AHBEN2_OTGFS1EN              (0x1U << 7)
#define CRM_AHBEN2_SDIO1EN               (0x1U << 15)

/*****************  Bit definition for CRM_AHBEN3 register  ***************/
#define CRM_AHBEN3_XMCEN                 (0x1U << 0)
#define CRM_AHBEN3_QSPI1EN               (0x1U << 1)
#define CRM_AHBEN3_QSPI2EN               (0x1U << 14)
#define CRM_AHBEN3_SDIO2EN               (0x1U << 15)

/*****************  Bit definition for CRM_APB1EN register  ***************/
#define CRM_APB1EN_TMR2EN                (0x1U << 0)
#define CRM_APB1EN_TMR3EN                (0x1U << 1)
#define CRM_APB1EN_TMR4EN                (0x1U << 2)
#define CRM_APB1EN_TMR5EN                (0x1U << 3)
#define CRM_APB1EN_TMR6EN                (0x1U << 4)
#define CRM_APB1EN_TMR7EN                (0x1U << 5)
#define CRM_APB1EN_TMR12EN               (0x1U << 6)
#define CRM_APB1EN_TMR13EN               (0x1U << 7)
#define CRM_APB1EN_TMR14EN               (0x1U << 8)
#define CRM_APB1EN_WWDTEN                (0x1U << 11)
#define CRM_APB1EN_SPI2EN                (0x1U << 14)
#define CRM_APB1EN_SPI3EN                (0x1U << 15)
#define CRM_APB1EN_USART2EN              (0x1U << 17)
#define CRM_APB1EN_USART3EN              (0x1U << 18)
#define CRM_APB1EN_UART4EN               (0x1U << 19)
#define CRM_APB1EN_UART5EN               (0x1U << 20)
#define CRM_APB1EN_I2C1EN                (0x1U << 21)
#define CRM_APB1EN_I2C2EN                (0x1U << 22)
#define CRM_APB1EN_I2C3EN                (0x1U << 23)
#define CRM_APB1EN_CAN1EN                (0x1U << 25)
#define CRM_APB1EN_CAN2EN                (0x1U << 26)
#define CRM_APB1EN_PWCEN                 (0x1U << 28)
#define CRM_APB1EN_DACEN                 (0x1U << 29)
#define CRM_APB1EN_UART7EN               (0x1U << 30)
#define CRM_APB1EN_UART8EN               (0x1U << 31)

/*****************  Bit definition for CRM_APB2EN register  ***************/
#define CRM_APB2EN_TMR1EN                (0x1U << 0)
#define CRM_APB2EN_TMR8EN                (0x1U << 1)
#define CRM_APB2EN_USART1EN              (0x1U << 4)
#define CRM_APB2EN_USART6EN              (0x1U << 5)
#define CRM_APB2EN_ADC1EN                (0x1U << 8)
#define CRM_APB2EN_ADC2EN                (0x1U << 9)
#define CRM_APB2EN_ADC3EN                (0x1U << 10)
#define CRM_APB2EN_SPI1EN                (0x1U << 12)
#define CRM_APB2EN_SPI4EN                (0x1U << 13)
#define CRM_APB2EN_SCFGEN                (0x1U << 14)
#define CRM_APB2EN_TMR9EN                (0x1U << 16)
#define CRM_APB2EN_TMR10EN               (0x1U << 17)
#define CRM_APB2EN_TMR11EN               (0x1U << 18)
#define CRM_APB2EN_TMR20EN               (0x1U << 20)
#define CRM_APB2EN_ACCEN                 (0x1U << 29)

/*****************  Bit definition for CRM_AHBLPEN1 register  ***************/
#define CRM_AHBLPEN1_GPIOALPEN           (0x1U << 0)
#define CRM_AHBLPEN1_GPIOBLPEN           (0x1U << 1)
#define CRM_AHBLPEN1_GPIOCLPEN           (0x1U << 2)
#define CRM_AHBLPEN1_GPIODLPEN           (0x1U << 3)
#define CRM_AHBLPEN1_GPIOELPEN           (0x1U << 4)
#define CRM_AHBLPEN1_GPIOFLPEN           (0x1U << 5)
#define CRM_AHBLPEN1_GPIOGLPEN           (0x1U << 6)
#define CRM_AHBLPEN1_GPIOHLPEN           (0x1U << 7)
#define CRM_AHBLPEN1_CRCLPEN             (0x1U << 12)
#define CRM_AHBLPEN1_EDMALPEN            (0x1U << 21)
#define CRM_AHBLPEN1_DMA1LPEN            (0x1U << 22)
#define CRM_AHBLPEN1_DMA2LPEN            (0x1U << 24)
#define CRM_AHBLPEN1_EMACLPEN            (0x1U << 25)
#define CRM_AHBLPEN1_OTGFS2LPEN          (0x1U << 29)

/*****************  Bit definition for CRM_AHBLPEN2 register  ***************/
#define CRM_AHBLPEN2_DVPLPEN             (0x1U << 0)
#define CRM_AHBLPEN2_OTGFS1LPEN          (0x1U << 7)
#define CRM_AHBLPEN2_SDIO1LPEN           (0x1U << 15)

/*****************  Bit definition for CRM_AHBLPEN3 register  ***************/
#define CRM_AHBLPEN3_XMCLPEN             (0x1U << 0)
#define CRM_AHBLPEN3_QSPI1LPEN           (0x1U << 1)
#define CRM_AHBLPEN3_QSPI2LPEN           (0x1U << 14)
#define CRM_AHBLPEN3_SDIO2LPEN           (0x1U << 15)

/*****************  Bit definition for CRM_APB1LPEN register  ***************/
#define CRM_APB1LPEN_TMR2LPEN            (0x1U << 0)
#define CRM_APB1LPEN_TMR3LPEN            (0x1U << 1)
#define CRM_APB1LPEN_TMR4LPEN            (0x1U << 2)
#define CRM_APB1LPEN_TMR5LPEN            (0x1U << 3)
#define CRM_APB1LPEN_TMR6LPEN            (0x1U << 4)
#define CRM_APB1LPEN_TMR7LPEN            (0x1U << 5)
#define CRM_APB1LPEN_TMR12LPEN           (0x1U << 6)
#define CRM_APB1LPEN_TMR13LPEN           (0x1U << 7)
#define CRM_APB1LPEN_TMR14LPEN           (0x1U << 8)
#define CRM_APB1LPEN_WWDTLPEN            (0x1U << 11)
#define CRM_APB1LPEN_SPI2LPEN            (0x1U << 14)
#define CRM_APB1LPEN_SPI3LPEN            (0x1U << 15)
#define CRM_APB1LPEN_USART2LPEN          (0x1U << 17)
#define CRM_APB1LPEN_USART3LPEN          (0x1U << 18)
#define CRM_APB1LPEN_UART4LPEN           (0x1U << 19)
#define CRM_APB1LPEN_UART5LPEN           (0x1U << 20)
#define CRM_APB1LPEN_I2C1LPEN            (0x1U << 21)
#define CRM_APB1LPEN_I2C2LPEN            (0x1U << 22)
#define CRM_APB1LPEN_I2C3LPEN            (0x1U << 23)
#define CRM_APB1LPEN_CAN1LPEN            (0x1U << 25)
#define CRM_APB1LPEN_CAN2LPEN            (0x1U << 26)
#define CRM_APB1LPEN_PWCLPEN             (0x1U << 28)
#define CRM_APB1LPEN_DACLPEN             (0x1U << 29)
#define CRM_APB1LPEN_UART7LPEN           (0x1U << 30)
#define CRM_APB1LPEN_UART8LPEN           (0x1U << 31)

/*****************  Bit definition for CRM_APB2LPEN register  ***************/
#define CRM_APB2LPEN_TMR1LPEN            (0x1U << 0)
#define CRM_APB2LPEN_TMR8LPEN            (0x1U << 1)
#define CRM_APB2LPEN_USART1LPEN          (0x1U << 4)
#define CRM_APB2LPEN_USART6LPEN          (0x1U << 5)
#define CRM_APB2LPEN_ADC1LPEN            (0x1U << 8)
#define CRM_APB2LPEN_ADC2LPEN            (0x1U << 9)
#define CRM_APB2LPEN_ADC3LPEN            (0x1U << 10)
#define CRM_APB2LPEN_SPI1LPEN            (0x1U << 12)
#define CRM_APB2LPEN_SPI4LPEN            (0x1U << 13)
#define CRM_APB2LPEN_SCFGLPEN            (0x1U << 14)
#define CRM_APB2LPEN_TMR9LPEN            (0x1U << 16)
#define CRM_APB2LPEN_TMR10LPEN           (0x1U << 17)
#define CRM_APB2LPEN_TMR11LPEN           (0x1U << 18)
#define CRM_APB2LPEN_TMR20LPEN           (0x1U << 20)
#define CRM_APB2LPEN_ACCLPEN             (0x1U << 29)

/******************  Bit definition for CRM_BPDC register  *****************/
#define CRM_BPDC_LEXTEN                  (0x1U << 0)
#define CRM_BPDC_LEXTSTBL                (0x1U << 1)
#define CRM_BPDC_LEXTBYPS                (0x1U << 2)
#define CRM_BPDC_ERTCSEL                 (0x3U << 8)
#define CRM_BPDC_ERTCSEL_LEXT            (0x1U << 8)
#define CRM_BPDC_ERTCSEL_LICK            (0x2U << 8)
#define CRM_BPDC_ERTCSEL_HEXTDIV         (0x3U << 8)
#define CRM_BPDC_ERTCEN                  (0x1U << 15)
#define CRM_BPDC_BPDRST                  (0x1U << 16)

/******************  Bit definition for CRM_CTRLSTS register  **************/
#define CRM_CTRLSTS_LICKEN               (0x1U << 0)
#define CRM_CTRLSTS_LICKSTBL             (0x1U << 1)
#define CRM_CTRLSTS_RSTFC                (0x1U << 24)
#define CRM_CTRLSTS_NRSTF                (0x1U << 26)
#define CRM_CTRLSTS_PORRSTF              (0x1U << 27)
#define CRM_CTRLSTS_SWRSTF               (0x1U << 28)
#define CRM_CTRLSTS_WDTRSTF              (0x1U << 29)
#define CRM_CTRLSTS_WWDTRSTF             (0x1U << 30)
#define CRM_CTRLSTS_LPRSTF               (0x1U << 31)

/******************  Bit definition for CRM_MISC1 register  ****************/
#define CRM_MISC1_HICKDIV                (0x1U << 12)
#define CRM_MISC1_HICK_TO_USB            (0x1U << 13)
#define CRM_MISC1_HICK_TO_SCLK           (0x1U << 14)

/******************  Bit definition for CRM_MISC2 register  ****************/
#define CRM_MISC2_AUTO_STEP_EN           (0x3U << 4)
#define CRM_MISC2_CLK1_TO_TMR            (0x1U << 8)
#define CRM_MISC2_EMAC_PPS_SEL           (0x1U << 9)

/******************  Bit definition for PWC_CTRL register  *****************/
#define PWC_CTRL_PVMEN                   (0x1U << 4)
#define PWC_CTRL_BPWEN                   (0x1U << 8)

/******************  Bit definition for FLASH_STS register  ****************/
#define FLASH_STS_OBF                    (0x1U << 0)
#define FLASH_STS_PRGMERR                (0x1U << 2)
#define FLASH_STS_EPPERR                 (0x1U << 4)
#define FLASH_STS_ODF                    (0x1U << 5)

/******************  Bit definition for FLASH_CTRL register  ***************/
#define FLASH_CTRL_FPRGM                 (0x1U << 0)
#define FLASH_CTRL_SECERS                (0x1U << 1)
#define FLASH_CTRL_BANKERS               (0x1U << 2)
#define FLASH_CTRL_USDPRGM               (0x1U << 4)
#define FLASH_CTRL_USDERS                (0x1U << 5)
#define FLASH_CTRL_ERSTR                 (0x1U << 6)
#define FLASH_CTRL_OPLK                  (0x1U << 7)

/******************  Bit definition for TMR_IDEN register  ****************/
#define TMR_IDEN_OVFIEN                  (0x1U << 0)
#define TMR_IDEN_C1IEN                   (0x1U << 1)
#define TMR_IDEN_C2IEN                   (0x1U << 2)
#define TMR_IDEN_C3IEN                   (0x1U << 3)
#define TMR_IDEN_C4IEN                   (0x1U << 4)
#define TMR_IDEN_HALLIEN                 (0x1U << 5)
#define TMR_IDEN_TIEN                    (0x1U << 6)
#define TMR_IDEN_BRKIEN                  (0x1U << 7)
#define TMR_IDEN_OVFDEN                  (0x1U << 8)
#define TMR_IDEN_C1DEN                   (0x1U << 9)
#define TMR_IDEN_C2DEN                   (0x1U << 10)
#define TMR_IDEN_C3DEN                   (0x1U << 11)
#define TMR_IDEN_C4DEN                   (0x1U << 12)
#define TMR_IDEN_HALLDEN                 (0x1U << 13)
#define TMR_IDEN_TDEN                    (0x1U << 14)

/******************  Bit definition for DMA_CxCTRL register  **************/
#define DMA_CTRL_CHEN                    (0x1U << 0)
#define DMA_CTRL_FDTIEN                  (0x1U << 1)
#define DMA_CTRL_HDTIEN                  (0x1U << 2)
#define DMA_CTRL_DTERRIEN                (0x1U << 3)
#define DMA_CTRL_DTD                     (0x1U << 4)
#define DMA_CTRL_LM                      (0x1U << 5)
#define DMA_CTRL_PINCM                   (0x1U << 6)
#define DMA_CTRL_MINCM                   (0x1U << 7)
#define DMA_CTRL_PWIDTH                  (0x3U << 8)
#define DMA_CTRL_PWIDTH_8BITS            (0x0U << 8)
#define DMA_CTRL_PWIDTH_16BITS           (0x1U << 8)
#define DMA_CTRL_PWIDTH_32BITS           (0x2U << 8)
#define DMA_CTRL_MWIDTH                  (0x3U << 10)
#define DMA_CTRL_MWIDTH_8BITS            (0x0U << 10)
#define DMA_CTRL_MWIDTH_16BITS           (0x1U << 10)
#define DMA_CTRL_MWIDTH_32BITS           (0x2U << 10)
#define DMA_CTRL_CHPL                    (0x3U << 12)
#define DMA_CTRL_CHPL_LOW                (0x0U << 12)
#define DMA_CTRL_CHPL_MID                (0x1U << 12)
#define DMA_CTRL_CHPL_HIGH               (0x2U << 12)
#define DMA_CTRL_CHPL_HIGHEST            (0x3U << 12)
#define DMA_CTRL_M2M                     (0x1U << 14)

/******************  Bit definition for DMA_MUXSEL register  *************/
#define DMA_MUXSEL_TBL_SEL               (0x1U << 0)

/******************  Bit definition for DMA_MUXCxCTRL register  *************/
#define DMA_MUXCTRL_SYNCOVIEN            (0x1U << 8)
#define DMA_MUXCTRL_EVTGEN               (0x1U << 9)
#define DMA_MUXCTRL_SYNCEN               (0x1U << 16)
#define DMA_MUXCTRL_SYNCPOL              (0x3U << 17)
#define DMA_MUXCTRL_SYNCPOL_NONE         (0x0U << 17)
#define DMA_MUXCTRL_SYNCPOL_RISING       (0x1U << 17)
#define DMA_MUXCTRL_SYNCPOL_FALLING      (0x2U << 17)
#define DMA_MUXCTRL_SYNCPOL_BOTH         (0x3U << 17)

/******************  Bit definition for DMA_MUXGxCTRL register  *************/
#define DMA_MUXGCTRL_TRGOVIEN            (0x1U << 8)
#define DMA_MUXGCTRL_GEN                 (0x1U << 16)
#define DMA_MUXGCTRL_GPOL                (0x3U << 17)
#define DMA_MUXGCTRL_GPOL_NONE           (0x0U << 17)
#define DMA_MUXGCTRL_GPOL_RISING         (0x1U << 17)
#define DMA_MUXGCTRL_GPOL_FALLING        (0x2U << 17)
#define DMA_MUXGCTRL_GPOL_BOTH           (0x3U << 17)

/******************  Bit definition for EDMA_SxCTRL register  **************/
#define EDMA_SCTRL_SEN                     (0x1U << 0)
#define EDMA_SCTRL_DMERRIEN                (0x1U << 1)
#define EDMA_SCTRL_DTERRIEN                (0x1U << 2)
#define EDMA_SCTRL_HDTIEN                  (0x1U << 3)
#define EDMA_SCTRL_FDTIEN                  (0x1U << 4)
#define EDMA_SCTRL_PFCTRL                  (0x1U << 5)
#define EDMA_SCTRL_DTD                     (0x3U << 6)
#define EDMA_SCTRL_DTD_P2M                 (0x0U << 6)
#define EDMA_SCTRL_DTD_M2P                 (0x1U << 6)
#define EDMA_SCTRL_DTD_M2M                 (0x2U << 6)
#define EDMA_SCTRL_LM                      (0x1U << 8)
#define EDMA_SCTRL_PINCM                   (0x1U << 9)
#define EDMA_SCTRL_MINCM                   (0x1U << 10)
#define EDMA_SCTRL_PWIDTH                  (0x3U << 11)
#define EDMA_SCTRL_PWIDTH_8BITS            (0x0U << 11)
#define EDMA_SCTRL_PWIDTH_16BITS           (0x1U << 11)
#define EDMA_SCTRL_PWIDTH_32BITS           (0x2U << 11)
#define EDMA_SCTRL_MWIDTH                  (0x3U << 13)
#define EDMA_SCTRL_MWIDTH_8BITS            (0x0U << 13)
#define EDMA_SCTRL_MWIDTH_16BITS           (0x1U << 13)
#define EDMA_SCTRL_MWIDTH_32BITS           (0x2U << 13)
#define EDMA_SCTRL_PINCOS                  (0x1U << 15)
#define EDMA_SCTRL_SPL                     (0x3U << 16)
#define EDMA_SCTRL_SPL_LOW                 (0x0U << 16)
#define EDMA_SCTRL_SPL_MID                 (0x1U << 16)
#define EDMA_SCTRL_SPL_HIGH                (0x2U << 16)
#define EDMA_SCTRL_SPL_HIGHEST             (0x3U << 16)
#define EDMA_SCTRL_DMM                     (0x1U << 18)
#define EDMA_SCTRL_CM                      (0x1U << 19)
#define EDMA_SCTRL_PBURST                  (0x3U << 21)
#define EDMA_SCTRL_PBURST_SINGLE           (0x0U << 21)
#define EDMA_SCTRL_PBURST_INCR4            (0x1U << 21)
#define EDMA_SCTRL_PBURST_INCR8            (0x2U << 21)
#define EDMA_SCTRL_PBURST_INCR16           (0x3U << 21)
#define EDMA_SCTRL_MBURST                  (0x3U << 23)
#define EDMA_SCTRL_MBURST_SINGLE           (0x0U << 23)
#define EDMA_SCTRL_MBURST_INCR4            (0x1U << 23)
#define EDMA_SCTRL_MBURST_INCR8            (0x2U << 23)
#define EDMA_SCTRL_MBURST_INCR16           (0x3U << 23)
#define EDMA_SCTRL_CHSEL                   (0x7U << 25)

/******************  Bit definition for EDMA_MUXSEL register  *************/
#define EDMA_MUXSEL_TBL_SEL               (0x1U << 0)

/******************  Bit definition for ADC_STS register  ***************/
#define ADC_STS_VMOR                     (0x1U << 0)
#define ADC_STS_OCCE                     (0x1U << 1)
#define ADC_STS_PCCE                     (0x1U << 2)
#define ADC_STS_PCCS                     (0x1U << 3)
#define ADC_STS_OCCS                     (0x1U << 4)
#define ADC_STS_OCCO                     (0x1U << 5)
#define ADC_STS_RDY                      (0x1U << 6)

/******************  Bit definition for ADC_CTRL1 register  ***************/
#define ADC_CTRL1_OCCEIEN                (0x1U << 5)
#define ADC_CTRL1_VMORIEN                (0x1U << 6)
#define ADC_CTRL1_PCCEIEN                (0x1U << 7)   
#define ADC_CTRL1_SQEN                   (0x1U << 8)
#define ADC_CTRL1_VMSGEN                 (0x1U << 9)
#define ADC_CTRL1_PCAUTOEN               (0x1U << 10)
#define ADC_CTRL1_OCPEN                  (0x1U << 11)
#define ADC_CTRL1_PCPEN                  (0x1U << 12)
#define ADC_CTRL1_PCVMEN                 (0x1U << 22)
#define ADC_CTRL1_OCVMEN                 (0x1U << 23)
#define ADC_CTRL1_OCCOIE                 (0x1U << 26)

/******************  Bit definition for ADC_CTRL2 register  ***************/
#define ADC_CTRL2_ADCEN                  (0x1U << 0)
#define ADC_CTRL2_RPEN                   (0x1U << 1)
#define ADC_CTRL2_ADCAL                  (0x1U << 2)
#define ADC_CTRL2_ADCALINIT              (0x1U << 3)
#define ADC_CTRL2_ADCABRT                (0x1U << 4)
#define ADC_CTRL2_OCDMAEN                (0x1U << 8)
#define ADC_CTRL2_OCDRCEN                (0x1U << 9)
#define ADC_CTRL2_EOCSFEN                (0x1U << 10)
#define ADC_CTRL2_DTALIGN                (0x1U << 11)
#define ADC_CTRL2_DTALIGN_R              (0x0U << 11)
#define ADC_CTRL2_DTALIGN_L              (0x1U << 11)
#define ADC_CTRL2_PCETE                  (0x3U << 20)
#define ADC_CTRL2_PCSWTRG                (0x1U << 22)
#define ADC_CTRL2_OCETE                  (0x3U << 28)
#define ADC_CTRL2_OCSWTRG                (0x1U << 30)

/******************  Bit definition for ADC_VMHB register  ***************/
#define ADC_VMHB_HB                      (0xFFFFU << 0)

/******************  Bit definition for ADC_VMLB register  ***************/
#define ADC_VMLB_LB                      (0x0000U << 0)

/******************  Bit definition for I2C_CTRL1 register  ***************/
#define I2C_CTRL1_I2CEN                  (0x1U << 0)
#define I2C_CTRL1_TDIEN                  (0x1U << 1)
#define I2C_CTRL1_RDIEN                  (0x1U << 2)
#define I2C_CTRL1_ADDRIEN                (0x1U << 3)
#define I2C_CTRL1_ACKFAILIEN             (0x1U << 4)
#define I2C_CTRL1_STOPIEN                (0x1U << 5)
#define I2C_CTRL1_TDCIEN                 (0x1U << 6)
#define I2C_CTRL1_ERRIEN                 (0x1U << 7)
#define I2C_CTRL1_ANGNFOFF               (0x1U << 12)
#define I2C_CTRL1_DMATEN                 (0x1U << 14)
#define I2C_CTRL1_DMAREN                 (0x1U << 15)
#define I2C_CTRL1_SCTRL                  (0x1U << 16)
#define I2C_CTRL1_STRETCH                (0x1U << 17)
#define I2C_CTRL1_WAKEUPEN               (0x1U << 18)
#define I2C_CTRL1_GCAEN                  (0x1U << 19)
#define I2C_CTRL1_HADDREN                (0x1U << 20)
#define I2C_CTRL1_DEVADDREN              (0x1U << 21)
#define I2C_CTRL1_SMBALERT               (0x1U << 22)
#define I2C_CTRL1_PECEN                  (0x1U << 23)

/******************  Bit definition for I2C_CTRL2 register  ***************/
#define I2C_CTRL2_DIR                    (0x1U << 10)
#define I2C_CTRL2_ADDR10                 (0x1U << 11)
#define I2C_CTRL2_READH10                (0x1U << 12)
#define I2C_CTRL2_GENSTART               (0x1U << 13)
#define I2C_CTRL2_GENSTOP                (0x1U << 14)
#define I2C_CTRL2_NACKEN                 (0x1U << 15)
#define I2C_CTRL2_RLDEN                  (0x1U << 24)
#define I2C_CTRL2_ASTOPEN                (0x1U << 25)
#define I2C_CTRL2_PECTEN                 (0x1U << 26)

/******************  Bit definition for I2C_TIMEOUT register  ***************/
#define I2C_TIMEOUT_TOMODE               (0x1U << 12)
#define I2C_TIMEOUT_TOMODE_LOW           (0x0U << 12)
#define I2C_TIMEOUT_TOMODE_HIGH          (0x1U << 12)
#define I2C_TIMEOUT_TOEN                 (0x1U << 15)
#define I2C_TIMEOUT_EXTEN                (0x1U << 31)

/******************  Bit definition for I2C_STS register  ***************/
#define I2C_STS_TDBE                     (0x1U << 0)
#define I2C_STS_TDIS                     (0x1U << 1)
#define I2C_STS_RDBF                     (0x1U << 2)
#define I2C_STS_ADDRF                    (0x1U << 3)
#define I2C_STS_ACKFAILF                 (0x1U << 4)
#define I2C_STS_STOPF                    (0x1U << 5)
#define I2C_STS_TDC                      (0x1U << 6)
#define I2C_STS_TCRLD                    (0x1U << 7)
#define I2C_STS_BUSERR                   (0x1U << 8)
#define I2C_STS_ARLOST                   (0x1U << 9)
#define I2C_STS_OUF                      (0x1U << 10)
#define I2C_STS_PECERR                   (0x1U << 11)
#define I2C_STS_TMOUT                    (0x1U << 12)
#define I2C_STS_ALERTF                   (0x1U << 13)
#define I2C_STS_BUSYF                    (0x1U << 15)
#define I2C_STS_SDIR                     (0x1U << 16)

/*******************  Bit definition for USART_STS register  **************/
#define USART_STS_PERR                   (0x1U << 0)                   
#define USART_STS_FERR                   (0x1U << 1)                   
#define USART_STS_NERR                   (0x1U << 2)                   
#define USART_STS_ROERR                  (0x1U << 3)                   
#define USART_STS_IDLEF                  (0x1U << 4)                  
#define USART_STS_RDBF                   (0x1U << 5)
#define USART_STS_TDC                    (0x1U << 6)
#define USART_STS_TDBE                   (0x1U << 7)
#define USART_STS_BFF                    (0x1U << 8)
#define USART_STS_CTSCF                  (0x1U << 9)

/*******************  Bit definition for USART_DT register  ***************/
#define USART_DT_DT                      (0x1FFU << 0)

/******************  Bit definition for USART_CTRL1 register  *************/
#define USART_CTRL1_SBF                  (0x1U << 0)
#define USART_CTRL1_RM                   (0x1U << 1)
#define USART_CTRL1_REN                  (0x1U << 2)
#define USART_CTRL1_TEN                  (0x1U << 3)
#define USART_CTRL1_IDLEIEN              (0x1U << 4)
#define USART_CTRL1_RDBFIEN              (0x1U << 5)
#define USART_CTRL1_TDCIEN               (0x1U << 6)
#define USART_CTRL1_TDBEIEN              (0x1U << 7)
#define USART_CTRL1_PERRIEN              (0x1U << 8)
#define USART_CTRL1_PSEL                 (0x1U << 9)
#define USART_CTRL1_PEN                  (0x1U << 10)
#define USART_CTRL1_WUM                  (0x1U << 11)
#define USART_CTRL1_DBN0                 (0x1U << 12)
#define USART_CTRL1_UEN                  (0x1U << 13)
#define USART_CTRL1_DBN1                 (0x1U << 28)
#define USART_CTRL1_DBN_7BITS            (0x1U << 28)
#define USART_CTRL1_DBN_8BITS            (0x0U << 28)
#define USART_CTRL1_DBN_9BITS            (0x1U << 12)


/******************  Bit definition for USART_CTRL2 register  *************/
#define USART_CTRL2_IDL                  (0xFU << 0)
#define USART_CTRL2_IDBN                 (0x1U << 4)
#define USART_CTRL2_BFBN                 (0x1U << 5)
#define USART_CTRL2_BFIEN                (0x1U << 6)
#define USART_CTRL2_LBCP                 (0x1U << 8)
#define USART_CTRL2_CLKPHA               (0x1U << 9)
#define USART_CTRL2_CLKPOL               (0x1U << 10)
#define USART_CTRL2_CLKEN                (0x1U << 11)
#define USART_CTRL2_STOPBN               (0x3U << 12)
#define USART_CTRL2_STOP_0               (0x1U << 12)           
#define USART_CTRL2_STOP_1               (0x1U << 13)  
#define USART_CTRL2_STOPBN_1_BITS        (0x0U << 12)
#define USART_CTRL2_STOPBN_0P5_BITS      (0x1U << 12)
#define USART_CTRL2_STOPBN_2_BITS        (0x2U << 12)
#define USART_CTRL2_STOPBN_1P5_BITS      (0x3U << 12)
#define USART_CTRL2_LINEN                (0x1U << 14)
#define USART_CTRL2_TRPSWAP              (0x1U << 15)
#define USART_CTRL2_RXREV                (0x1U << 16)
#define USART_CTRL2_TXREV                (0x1U << 17)
#define USART_CTRL2_DTREV                (0x1U << 18)
#define USART_CTRL2_MTF                  (0x1U << 19)
#define USART_CTRL2_IDH                  (0xFU << 28)

/******************  Bit definition for USART_CTRL3 register  *************/
#define USART_CTRL3_ERRIEN               (0x1U << 0)
#define USART_CTRL3_IRDAEN               (0x1U << 1)
#define USART_CTRL3_IRDALP               (0x1U << 2)
#define USART_CTRL3_SLBEN                (0x1U << 3)
#define USART_CTRL3_SCNACKEN             (0x1U << 4)
#define USART_CTRL3_SCMEN                (0x1U << 5)
#define USART_CTRL3_DMAREN               (0x1U << 6)
#define USART_CTRL3_DMATEN               (0x1U << 7)
#define USART_CTRL3_RTSEN                (0x1U << 8)
#define USART_CTRL3_CTSEN                (0x1U << 9)
#define USART_CTRL3_CTSCFIEN             (0x1U << 10)
#define USART_CTRL3_RS485EN              (0x1U << 14)
#define USART_CTRL3_DEP                  (0x1U << 15)

/*******************  Bit definition for SPI_CTRL1 register  **************/
#define SPI_CTRL1_CLKPHA                 (0x1U << 0)
#define SPI_CTRL1_CLKPOL                 (0x1U << 1)
#define SPI_CTRL1_MSTEN                  (0x1U << 2)
#define SPI_CTRL1_MDIV                   (0x7U << 3)
#define SPI_CTRL1_MDIV_2                 (0x0U << 3)
#define SPI_CTRL1_MDIV_4                 (0x1U << 3)
#define SPI_CTRL1_MDIV_8                 (0x2U << 3)
#define SPI_CTRL1_MDIV_16                (0x3U << 3)
#define SPI_CTRL1_MDIV_32                (0x4U << 3)
#define SPI_CTRL1_MDIV_64                (0x5U << 3)
#define SPI_CTRL1_MDIV_128               (0x6U << 3)
#define SPI_CTRL1_MDIV_256               (0x7U << 3)
#define SPI_CTRL1_MDIV_512               (0x0U << 3)
#define SPI_CTRL1_MDIV_1024              (0x1U << 3)
#define SPI_CTRL1_SPIEN                  (0x1U << 6)
#define SPI_CTRL1_LTF                    (0x1U << 7)
#define SPI_CTRL1_SWCSIL                 (0x1U << 8)
#define SPI_CTRL1_SWCSEN                 (0x1U << 9)
#define SPI_CTRL1_ORA                    (0x1U << 10)
#define SPI_CTRL1_FBN                    (0x1U << 11)
#define SPI_CTRL1_NTC                    (0x1U << 12)
#define SPI_CTRL1_CCEN                   (0x1U << 13)
#define SPI_CTRL1_SLBTD                  (0x1U << 14)
#define SPI_CTRL1_SLBEN                  (0x1U << 15)

/*******************  Bit definition for SPI_CTRL2 register  **************/
#define SPI_CTRL2_DMAREN                 (0x1U << 0)
#define SPI_CTRL2_DMATEN                 (0x1U << 1)
#define SPI_CTRL2_HWCSOE                 (0x1U << 2)
#define SPI_CTRL2_TIEN                   (0x1U << 4)
#define SPI_CTRL2_ERRIE                  (0x1U << 5)
#define SPI_CTRL2_RDBFIE                 (0x1U << 6)
#define SPI_CTRL2_TDBEIE                 (0x1U << 7)
#define SPI_CTRL2_MDIV                   (0x1U << 8)
#define SPI_CTRL2_MDIV_512_1024          (0x1U << 8)
#define SPI_CTRL2_MDIV3EN                (0x1U << 9)

/*******************  Bit definition for SPI_STS register  ********************/
#define SPI_STS_RDBF                     (0x1U << 0)
#define SPI_STS_TDBE                     (0x1U << 1)
#define SPI_STS_ACS                      (0x1U << 2)
#define SPI_STS_TUERR                    (0x1U << 3)
#define SPI_STS_CCERR                    (0x1U << 4)
#define SPI_STS_MMERR                    (0x1U << 5)
#define SPI_STS_ROERR                    (0x1U << 6)
#define SPI_STS_BF                       (0x1U << 7)
#define SPI_STS_CSPAS                    (0x1U << 8)

/*******************  Bit definition for SPI_I2SCTRL register  *****************/
#define SPI_I2SCTRL_I2SCBN               (0x1U << 0)
#define SPI_I2SCTRL_I2SDBN               (0x3U << 1)
#define SPI_I2SCTRL_I2SDBN_16BITS        (0x0U << 1)
#define SPI_I2SCTRL_I2SDBN_24BITS        (0x1U << 1)
#define SPI_I2SCTRL_I2SDBN_32BITS        (0x2U << 1)
#define SPI_I2SCTRL_I2SDBN_NONE          (0x3U << 1)
#define SPI_I2SCTRL_I2SCLKPOL            (0x1U << 3)
#define SPI_I2SCTRL_STDSEL               (0x3U << 4)
#define SPI_I2SCTRL_STDSEL_PHILIPS       (0x0U << 4)
#define SPI_I2SCTRL_STDSEL_MSB           (0x1U << 4)
#define SPI_I2SCTRL_STDSEL_LSB           (0x2U << 4)
#define SPI_I2SCTRL_STDSEL_PCM           (0x3U << 4)
#define SPI_I2SCTRL_PCMFSSEL             (0x1U << 7)
#define SPI_I2SCTRL_OPERSEL              (0x3U << 8)
#define SPI_I2SCTRL_OPERSEL_ST           (0x0U << 8)
#define SPI_I2SCTRL_OPERSEL_SR           (0x1U << 8)
#define SPI_I2SCTRL_OPERSEL_HT           (0x2U << 8)
#define SPI_I2SCTRL_OPERSEL_HR           (0x3U << 8)
#define SPI_I2SCTRL_I2SEN                (0x1U << 10)
#define SPI_I2SCTRL_I2SMSEL              (0x1U << 11)

/*******************  Bit definition for SPI_I2SCLKP register  ************/
#define SPI_I2SCLKP_I2SDIV_1             (0xFFU << 0)
#define SPI_I2SCLKP_I2SODD               (0x1U << 8)
#define SPI_I2SCLKP_I2SMCLKOE            (0x1U << 9)
#define SPI_I2SCLKP_I2SDIV_2             (0x3U << 10)

/******************  Bit definition for DEBUG_APB1_PAUSE register  **************/
#define DEBUG_APB1_PAUSE_TMR2_PAUSE         (0x1U << 0)
#define DEBUG_APB1_PAUSE_TMR3_PAUSE         (0x1U << 1)
#define DEBUG_APB1_PAUSE_TMR4_PAUSE         (0x1U << 2)
#define DEBUG_APB1_PAUSE_TMR5_PAUSE         (0x1U << 3)
#define DEBUG_APB1_PAUSE_TMR6_PAUSE         (0x1U << 4)
#define DEBUG_APB1_PAUSE_TMR7_PAUSE         (0x1U << 5)
#define DEBUG_APB1_PAUSE_TMR12_PAUSE        (0x1U << 6)
#define DEBUG_APB1_PAUSE_TMR13_PAUSE        (0x1U << 7)
#define DEBUG_APB1_PAUSE_TMR14_PAUSE        (0x1U << 8)
#define DEBUG_APB1_PAUSE_ERTC_PAUSE         (0x1U << 10)
#define DEBUG_APB1_PAUSE_WWDT_PAUSE         (0x1U << 11)
#define DEBUG_APB1_PAUSE_WDT_PAUSE          (0x1U << 12)
#define DEBUG_APB1_PAUSE_ERTC_512_PAUSE     (0x1U << 15)
#define DEBUG_APB1_PAUSE_I2C1_SMBUS_TIMEOUT (0x1U << 24)
#define DEBUG_APB1_PAUSE_CAN1_PAUSE         (0x1U << 25)
#define DEBUG_APB1_PAUSE_CAN2_PAUSE         (0x1U << 26)
#define DEBUG_APB1_PAUSE_I2C2_SMBUS_TIMEOUT (0x1U << 27)
#define DEBUG_APB1_PAUSE_I2C3_SMBUS_TIMEOUT (0x1U << 28)

/******************  Bit definition for DEBUG_APB2_PAUSE register  **************/
#define DEBUG_APB2_PAUSE_TMR1_PAUSE      (0x1U << 0)
#define DEBUG_APB2_PAUSE_TMR8_PAUSE      (0x1U << 1)
#define DEBUG_APB2_PAUSE_TMR20_PAUSE     (0x1U << 6)
#define DEBUG_APB2_PAUSE_TMR9_PAUSE      (0x1U << 16)
#define DEBUG_APB2_PAUSE_TMR10_PAUSE     (0x1U << 17)
#define DEBUG_APB2_PAUSE_TMR11_PAUSE     (0x1U << 18)

/**
  * @}
  */

/** @addtogroup Peripheral_memory_map
  * @{
  */

#define XMC_SDRAM_MEM_BASE               ((uint32_t)0xC0000000)
#define QSPI2_MEM_BASE                   ((uint32_t)0xB0000000)
#define XMC_CARD_MEM_BASE                ((uint32_t)0xA8000000)
#define QSPI2_REG_BASE                   ((uint32_t)0xA0002000)
#define QSPI1_REG_BASE                   ((uint32_t)0xA0001000)
#define XMC_REG_BASE                     ((uint32_t)0xA0000000)
#define XMC_BANK1_REG_BASE               (XMC_REG_BASE + 0x0000)
#define XMC_BANK2_REG_BASE               (XMC_REG_BASE + 0x0060)
#define XMC_BANK3_REG_BASE               (XMC_REG_BASE + 0x0080)
#define XMC_BANK4_REG_BASE               (XMC_REG_BASE + 0x00A0)
#define XMC_SDRAM_REG_BASE               (XMC_REG_BASE + 0x0140)
#define QSPI1_MEM_BASE                   ((uint32_t)0x90000000)
#define XMC_MEM_BASE                     ((uint32_t)0x60000000)
#define PERIPH_BASE                      ((uint32_t)0x40000000)
#define SRAM_BB_BASE                     ((uint32_t)0x22000000)
#define PERIPH_BB_BASE                   ((uint32_t)0x42000000)
#define SRAM_BASE                        ((uint32_t)0x20000000)
#define USD_BASE                         ((uint32_t)0x1FFFC000)
#define FLASH_BASE                       ((uint32_t)0x08000000)

#define DEBUG_BASE                       ((uint32_t)0xE0042000)

#define APB1PERIPH_BASE                  (PERIPH_BASE)
#define APB2PERIPH_BASE                  (PERIPH_BASE + 0x10000)
#define AHBPERIPH1_BASE                  (PERIPH_BASE + 0x20000)
#define AHBPERIPH2_BASE                  (PERIPH_BASE + 0x10000000)

#if defined (AT32F435xx)
/* apb1 bus base address */
#define UART8_BASE                       (APB1PERIPH_BASE + 0x7C00)
#define UART7_BASE                       (APB1PERIPH_BASE + 0x7800)
#define DAC_BASE                         (APB1PERIPH_BASE + 0x7400)
#define PWC_BASE                         (APB1PERIPH_BASE + 0x7000)
#define CAN2_BASE                        (APB1PERIPH_BASE + 0x6800)
#define CAN1_BASE                        (APB1PERIPH_BASE + 0x6400)
#define I2C3_BASE                        (APB1PERIPH_BASE + 0x5C00)
#define I2C2_BASE                        (APB1PERIPH_BASE + 0x5800)
#define I2C1_BASE                        (APB1PERIPH_BASE + 0x5400)
#define UART5_BASE                       (APB1PERIPH_BASE + 0x5000)
#define UART4_BASE                       (APB1PERIPH_BASE + 0x4C00)
#define USART3_BASE                      (APB1PERIPH_BASE + 0x4800)
#define USART2_BASE                      (APB1PERIPH_BASE + 0x4400)
#define SPI3_BASE                        (APB1PERIPH_BASE + 0x3C00)
#define SPI2_BASE                        (APB1PERIPH_BASE + 0x3800)
#define WDT_BASE                         (APB1PERIPH_BASE + 0x3000)
#define WWDT_BASE                        (APB1PERIPH_BASE + 0x2C00)
#define ERTC_BASE                        (APB1PERIPH_BASE + 0x2800)
#define TMR14_BASE                       (APB1PERIPH_BASE + 0x2000)
#define TMR13_BASE                       (APB1PERIPH_BASE + 0x1C00)
#define TMR12_BASE                       (APB1PERIPH_BASE + 0x1800)
#define TMR7_BASE                        (APB1PERIPH_BASE + 0x1400)
#define TMR6_BASE                        (APB1PERIPH_BASE + 0x1000)
#define TMR5_BASE                        (APB1PERIPH_BASE + 0x0C00)
#define TMR4_BASE                        (APB1PERIPH_BASE + 0x0800)
#define TMR3_BASE                        (APB1PERIPH_BASE + 0x0400)
#define TMR2_BASE                        (APB1PERIPH_BASE + 0x0000)
/* apb2 bus base address */
#define I2S2EXT_BASE                     (APB2PERIPH_BASE + 0x7800)
#define I2S3EXT_BASE                     (APB2PERIPH_BASE + 0x7C00)
#define ACC_BASE                         (APB2PERIPH_BASE + 0x7400)
#define TMR20_BASE                       (APB2PERIPH_BASE + 0x4C00)
#define TMR11_BASE                       (APB2PERIPH_BASE + 0x4800)
#define TMR10_BASE                       (APB2PERIPH_BASE + 0x4400)
#define TMR9_BASE                        (APB2PERIPH_BASE + 0x4000)
#define EXINT_BASE                       (APB2PERIPH_BASE + 0x3C00)
#define SCFG_BASE                        (APB2PERIPH_BASE + 0x3800)
#define SPI4_BASE                        (APB2PERIPH_BASE + 0x3400)
#define SPI1_BASE                        (APB2PERIPH_BASE + 0x3000)
#define ADC1_BASE                        (APB2PERIPH_BASE + 0x2000)
#define ADC2_BASE                        (APB2PERIPH_BASE + 0x2100)
#define ADC3_BASE                        (APB2PERIPH_BASE + 0x2200)
#define ADCCOM_BASE                      (APB2PERIPH_BASE + 0x2300)
#define USART6_BASE                      (APB2PERIPH_BASE + 0x1400)
#define USART1_BASE                      (APB2PERIPH_BASE + 0x1000)
#define TMR8_BASE                        (APB2PERIPH_BASE + 0x0400)
#define TMR1_BASE                        (APB2PERIPH_BASE + 0x0000)
/* ahb bus base address */
#define OTGFS2_BASE                      (AHBPERIPH1_BASE + 0x20000)
#define SDIO1_BASE                       (AHBPERIPH1_BASE + 0xC400)
#define GPIOH_BASE                       (AHBPERIPH1_BASE + 0x1C00)
#define GPIOG_BASE                       (AHBPERIPH1_BASE + 0x1800)
#define GPIOF_BASE                       (AHBPERIPH1_BASE + 0x1400)
#define GPIOE_BASE                       (AHBPERIPH1_BASE + 0x1000)
#define GPIOD_BASE                       (AHBPERIPH1_BASE + 0x0C00)
#define GPIOC_BASE                       (AHBPERIPH1_BASE + 0x0800)
#define GPIOB_BASE                       (AHBPERIPH1_BASE + 0x0400)
#define GPIOA_BASE                       (AHBPERIPH1_BASE + 0x0000)

#define DMA1_BASE                        (AHBPERIPH1_BASE + 0x6400)
#define DMA1_CHANNEL1_BASE               (DMA1_BASE + 0x0008)
#define DMA1_CHANNEL2_BASE               (DMA1_BASE + 0x001C)
#define DMA1_CHANNEL3_BASE               (DMA1_BASE + 0x0030)
#define DMA1_CHANNEL4_BASE               (DMA1_BASE + 0x0044)
#define DMA1_CHANNEL5_BASE               (DMA1_BASE + 0x0058)
#define DMA1_CHANNEL6_BASE               (DMA1_BASE + 0x006C)
#define DMA1_CHANNEL7_BASE               (DMA1_BASE + 0x0080)

#define DMA1MUX_BASE                     (DMA1_BASE + 0x0104)
#define DMA1MUX_CHANNEL1_BASE            (DMA1MUX_BASE)
#define DMA1MUX_CHANNEL2_BASE            (DMA1MUX_BASE + 0x0004)
#define DMA1MUX_CHANNEL3_BASE            (DMA1MUX_BASE + 0x0008)
#define DMA1MUX_CHANNEL4_BASE            (DMA1MUX_BASE + 0x000C)
#define DMA1MUX_CHANNEL5_BASE            (DMA1MUX_BASE + 0x0010)
#define DMA1MUX_CHANNEL6_BASE            (DMA1MUX_BASE + 0x0014)
#define DMA1MUX_CHANNEL7_BASE            (DMA1MUX_BASE + 0x0018)

#define DMA1MUX_GENERATOR1_BASE          (DMA1_BASE + 0x0120)
#define DMA1MUX_GENERATOR2_BASE          (DMA1_BASE + 0x0124)
#define DMA1MUX_GENERATOR3_BASE          (DMA1_BASE + 0x0128)
#define DMA1MUX_GENERATOR4_BASE          (DMA1_BASE + 0x012C)

#define DMA2_BASE                        (AHBPERIPH1_BASE + 0x6600)
#define DMA2_CHANNEL1_BASE               (DMA2_BASE + 0x0008)
#define DMA2_CHANNEL2_BASE               (DMA2_BASE + 0x001C)
#define DMA2_CHANNEL3_BASE               (DMA2_BASE + 0x0030)
#define DMA2_CHANNEL4_BASE               (DMA2_BASE + 0x0044)
#define DMA2_CHANNEL5_BASE               (DMA2_BASE + 0x0058)
#define DMA2_CHANNEL6_BASE               (DMA2_BASE + 0x006C)
#define DMA2_CHANNEL7_BASE               (DMA2_BASE + 0x0080)

#define DMA2MUX_BASE                     (DMA2_BASE + 0x0104)
#define DMA2MUX_CHANNEL1_BASE            (DMA2MUX_BASE)
#define DMA2MUX_CHANNEL2_BASE            (DMA2MUX_BASE + 0x0004)
#define DMA2MUX_CHANNEL3_BASE            (DMA2MUX_BASE + 0x0008)
#define DMA2MUX_CHANNEL4_BASE            (DMA2MUX_BASE + 0x000C)
#define DMA2MUX_CHANNEL5_BASE            (DMA2MUX_BASE + 0x0010)
#define DMA2MUX_CHANNEL6_BASE            (DMA2MUX_BASE + 0x0014)
#define DMA2MUX_CHANNEL7_BASE            (DMA2MUX_BASE + 0x0018)

#define DMA2MUX_GENERATOR1_BASE          (DMA2_BASE + 0x0120)
#define DMA2MUX_GENERATOR2_BASE          (DMA2_BASE + 0x0124)
#define DMA2MUX_GENERATOR3_BASE          (DMA2_BASE + 0x0128)
#define DMA2MUX_GENERATOR4_BASE          (DMA2_BASE + 0x012C)

#define EDMA_BASE                        (AHBPERIPH1_BASE + 0x6000)
#define EDMA_STREAM1_BASE                (EDMA_BASE + 0x0010)
#define EDMA_STREAM2_BASE                (EDMA_BASE + 0x0028)
#define EDMA_STREAM3_BASE                (EDMA_BASE + 0x0040)
#define EDMA_STREAM4_BASE                (EDMA_BASE + 0x0058)
#define EDMA_STREAM5_BASE                (EDMA_BASE + 0x0070)
#define EDMA_STREAM6_BASE                (EDMA_BASE + 0x0088)
#define EDMA_STREAM7_BASE                (EDMA_BASE + 0x00A0)
#define EDMA_STREAM8_BASE                (EDMA_BASE + 0x00B8)

#define EDMA_2D_BASE                     (EDMA_BASE + 0x00F4)
#define EDMA_STREAM1_2D_BASE             (EDMA_2D_BASE + 0x0004)
#define EDMA_STREAM2_2D_BASE             (EDMA_2D_BASE + 0x000C)
#define EDMA_STREAM3_2D_BASE             (EDMA_2D_BASE + 0x0014)
#define EDMA_STREAM4_2D_BASE             (EDMA_2D_BASE + 0x001C)
#define EDMA_STREAM5_2D_BASE             (EDMA_2D_BASE + 0x0024)
#define EDMA_STREAM6_2D_BASE             (EDMA_2D_BASE + 0x002C)
#define EDMA_STREAM7_2D_BASE             (EDMA_2D_BASE + 0x0034)
#define EDMA_STREAM8_2D_BASE             (EDMA_2D_BASE + 0x003C)

#define EDMA_LL_BASE                     (EDMA_BASE + 0x00D0)
#define EDMA_STREAM1_LL_BASE             (EDMA_LL_BASE + 0x0004)
#define EDMA_STREAM2_LL_BASE             (EDMA_LL_BASE + 0x0008)
#define EDMA_STREAM3_LL_BASE             (EDMA_LL_BASE + 0x000C)
#define EDMA_STREAM4_LL_BASE             (EDMA_LL_BASE + 0x0010)
#define EDMA_STREAM5_LL_BASE             (EDMA_LL_BASE + 0x0014)
#define EDMA_STREAM6_LL_BASE             (EDMA_LL_BASE + 0x0018)
#define EDMA_STREAM7_LL_BASE             (EDMA_LL_BASE + 0x001C)
#define EDMA_STREAM8_LL_BASE             (EDMA_LL_BASE + 0x0020)

#define EDMAMUX_BASE                     (EDMA_BASE + 0x0140)
#define EDMAMUX_CHANNEL1_BASE            (EDMAMUX_BASE)
#define EDMAMUX_CHANNEL2_BASE            (EDMAMUX_BASE + 0x0004)
#define EDMAMUX_CHANNEL3_BASE            (EDMAMUX_BASE + 0x0008)
#define EDMAMUX_CHANNEL4_BASE            (EDMAMUX_BASE + 0x000C)
#define EDMAMUX_CHANNEL5_BASE            (EDMAMUX_BASE + 0x0010)
#define EDMAMUX_CHANNEL6_BASE            (EDMAMUX_BASE + 0x0014)
#define EDMAMUX_CHANNEL7_BASE            (EDMAMUX_BASE + 0x0018)
#define EDMAMUX_CHANNEL8_BASE            (EDMAMUX_BASE + 0x001C)

#define EDMAMUX_GENERATOR1_BASE          (EDMA_BASE + 0x0160)
#define EDMAMUX_GENERATOR2_BASE          (EDMA_BASE + 0x0164)
#define EDMAMUX_GENERATOR3_BASE          (EDMA_BASE + 0x0168)
#define EDMAMUX_GENERATOR4_BASE          (EDMA_BASE + 0x016C)

#define FLASH_REG_BASE                   (AHBPERIPH1_BASE + 0x3C00)
#define CRM_BASE                         (AHBPERIPH1_BASE + 0x3800)
#define CRC_BASE                         (AHBPERIPH1_BASE + 0x3000)
#define SDIO2_BASE                       (AHBPERIPH2_BASE + 0x61000)
#define DVP_BASE                         (AHBPERIPH2_BASE + 0x50000)
#define OTGFS1_BASE                      (AHBPERIPH2_BASE + 0x00000)
#endif

#if defined (AT32F437xx)
/* apb1 bus base address */
#define UART8_BASE                       (APB1PERIPH_BASE + 0x7C00)
#define UART7_BASE                       (APB1PERIPH_BASE + 0x7800)
#define DAC_BASE                         (APB1PERIPH_BASE + 0x7400)
#define PWC_BASE                         (APB1PERIPH_BASE + 0x7000)
#define CAN2_BASE                        (APB1PERIPH_BASE + 0x6800)
#define CAN1_BASE                        (APB1PERIPH_BASE + 0x6400)
#define I2C3_BASE                        (APB1PERIPH_BASE + 0x5C00)
#define I2C2_BASE                        (APB1PERIPH_BASE + 0x5800)
#define I2C1_BASE                        (APB1PERIPH_BASE + 0x5400)
#define UART5_BASE                       (APB1PERIPH_BASE + 0x5000)
#define UART4_BASE                       (APB1PERIPH_BASE + 0x4C00)
#define USART3_BASE                      (APB1PERIPH_BASE + 0x4800)
#define USART2_BASE                      (APB1PERIPH_BASE + 0x4400)
#define SPI3_BASE                        (APB1PERIPH_BASE + 0x3C00)
#define SPI2_BASE                        (APB1PERIPH_BASE + 0x3800)
#define WDT_BASE                         (APB1PERIPH_BASE + 0x3000)
#define WWDT_BASE                        (APB1PERIPH_BASE + 0x2C00)
#define ERTC_BASE                        (APB1PERIPH_BASE + 0x2800)
#define TMR14_BASE                       (APB1PERIPH_BASE + 0x2000)
#define TMR13_BASE                       (APB1PERIPH_BASE + 0x1C00)
#define TMR12_BASE                       (APB1PERIPH_BASE + 0x1800)
#define TMR7_BASE                        (APB1PERIPH_BASE + 0x1400)
#define TMR6_BASE                        (APB1PERIPH_BASE + 0x1000)
#define TMR5_BASE                        (APB1PERIPH_BASE + 0x0C00)
#define TMR4_BASE                        (APB1PERIPH_BASE + 0x0800)
#define TMR3_BASE                        (APB1PERIPH_BASE + 0x0400)
#define TMR2_BASE                        (APB1PERIPH_BASE + 0x0000)
/* apb2 bus base address */
#define I2S2EXT_BASE                     (APB2PERIPH_BASE + 0x7800)
#define I2S3EXT_BASE                     (APB2PERIPH_BASE + 0x7C00)
#define ACC_BASE                         (APB2PERIPH_BASE + 0x7400)
#define TMR20_BASE                       (APB2PERIPH_BASE + 0x4C00)
#define TMR11_BASE                       (APB2PERIPH_BASE + 0x4800)
#define TMR10_BASE                       (APB2PERIPH_BASE + 0x4400)
#define TMR9_BASE                        (APB2PERIPH_BASE + 0x4000)
#define EXINT_BASE                       (APB2PERIPH_BASE + 0x3C00)
#define SCFG_BASE                        (APB2PERIPH_BASE + 0x3800)
#define SPI4_BASE                        (APB2PERIPH_BASE + 0x3400)
#define SPI1_BASE                        (APB2PERIPH_BASE + 0x3000)
#define ADC1_BASE                        (APB2PERIPH_BASE + 0x2000)
#define ADC2_BASE                        (APB2PERIPH_BASE + 0x2100)
#define ADC3_BASE                        (APB2PERIPH_BASE + 0x2200)
#define ADCCOM_BASE                      (APB2PERIPH_BASE + 0x2300)
#define USART6_BASE                      (APB2PERIPH_BASE + 0x1400)
#define USART1_BASE                      (APB2PERIPH_BASE + 0x1000)
#define TMR8_BASE                        (APB2PERIPH_BASE + 0x0400)
#define TMR1_BASE                        (APB2PERIPH_BASE + 0x0000)
/* ahb bus base address */
#define OTGFS2_BASE                      (AHBPERIPH1_BASE + 0x20000)
#define SDIO1_BASE                       (AHBPERIPH1_BASE + 0xC400)
#define EMAC_BASE                        (AHBPERIPH1_BASE + 0x8000)
#define GPIOH_BASE                       (AHBPERIPH1_BASE + 0x1C00)
#define GPIOG_BASE                       (AHBPERIPH1_BASE + 0x1800)
#define GPIOF_BASE                       (AHBPERIPH1_BASE + 0x1400)
#define GPIOE_BASE                       (AHBPERIPH1_BASE + 0x1000)
#define GPIOD_BASE                       (AHBPERIPH1_BASE + 0x0C00)
#define GPIOC_BASE                       (AHBPERIPH1_BASE + 0x0800)
#define GPIOB_BASE                       (AHBPERIPH1_BASE + 0x0400)
#define GPIOA_BASE                       (AHBPERIPH1_BASE + 0x0000)

#define DMA1_BASE                        (AHBPERIPH1_BASE + 0x6400)
#define DMA1_CHANNEL1_BASE               (DMA1_BASE + 0x0008)
#define DMA1_CHANNEL2_BASE               (DMA1_BASE + 0x001C)
#define DMA1_CHANNEL3_BASE               (DMA1_BASE + 0x0030)
#define DMA1_CHANNEL4_BASE               (DMA1_BASE + 0x0044)
#define DMA1_CHANNEL5_BASE               (DMA1_BASE + 0x0058)
#define DMA1_CHANNEL6_BASE               (DMA1_BASE + 0x006C)
#define DMA1_CHANNEL7_BASE               (DMA1_BASE + 0x0080)

#define DMA1MUX_BASE                     (DMA1_BASE + 0x0104)
#define DMA1MUX_CHANNEL1_BASE            (DMA1MUX_BASE)
#define DMA1MUX_CHANNEL2_BASE            (DMA1MUX_BASE + 0x0004)
#define DMA1MUX_CHANNEL3_BASE            (DMA1MUX_BASE + 0x0008)
#define DMA1MUX_CHANNEL4_BASE            (DMA1MUX_BASE + 0x000C)
#define DMA1MUX_CHANNEL5_BASE            (DMA1MUX_BASE + 0x0010)
#define DMA1MUX_CHANNEL6_BASE            (DMA1MUX_BASE + 0x0014)
#define DMA1MUX_CHANNEL7_BASE            (DMA1MUX_BASE + 0x0018)

#define DMA1MUX_GENERATOR1_BASE          (DMA1_BASE + 0x0120)
#define DMA1MUX_GENERATOR2_BASE          (DMA1_BASE + 0x0124)
#define DMA1MUX_GENERATOR3_BASE          (DMA1_BASE + 0x0128)
#define DMA1MUX_GENERATOR4_BASE          (DMA1_BASE + 0x012C)

#define DMA2_BASE                        (AHBPERIPH1_BASE + 0x6600)
#define DMA2_CHANNEL1_BASE               (DMA2_BASE + 0x0008)
#define DMA2_CHANNEL2_BASE               (DMA2_BASE + 0x001C)
#define DMA2_CHANNEL3_BASE               (DMA2_BASE + 0x0030)
#define DMA2_CHANNEL4_BASE               (DMA2_BASE + 0x0044)
#define DMA2_CHANNEL5_BASE               (DMA2_BASE + 0x0058)
#define DMA2_CHANNEL6_BASE               (DMA2_BASE + 0x006C)
#define DMA2_CHANNEL7_BASE               (DMA2_BASE + 0x0080)

#define DMA2MUX_BASE                     (DMA2_BASE + 0x0104)
#define DMA2MUX_CHANNEL1_BASE            (DMA2MUX_BASE)
#define DMA2MUX_CHANNEL2_BASE            (DMA2MUX_BASE + 0x0004)
#define DMA2MUX_CHANNEL3_BASE            (DMA2MUX_BASE + 0x0008)
#define DMA2MUX_CHANNEL4_BASE            (DMA2MUX_BASE + 0x000C)
#define DMA2MUX_CHANNEL5_BASE            (DMA2MUX_BASE + 0x0010)
#define DMA2MUX_CHANNEL6_BASE            (DMA2MUX_BASE + 0x0014)
#define DMA2MUX_CHANNEL7_BASE            (DMA2MUX_BASE + 0x0018)

#define DMA2MUX_GENERATOR1_BASE          (DMA2_BASE + 0x0120)
#define DMA2MUX_GENERATOR2_BASE          (DMA2_BASE + 0x0124)
#define DMA2MUX_GENERATOR3_BASE          (DMA2_BASE + 0x0128)
#define DMA2MUX_GENERATOR4_BASE          (DMA2_BASE + 0x012C)

#define EDMA_BASE                        (AHBPERIPH1_BASE + 0x6000)
#define EDMA_STREAM1_BASE                (EDMA_BASE + 0x0010)
#define EDMA_STREAM2_BASE                (EDMA_BASE + 0x0028)
#define EDMA_STREAM3_BASE                (EDMA_BASE + 0x0040)
#define EDMA_STREAM4_BASE                (EDMA_BASE + 0x0058)
#define EDMA_STREAM5_BASE                (EDMA_BASE + 0x0070)
#define EDMA_STREAM6_BASE                (EDMA_BASE + 0x0088)
#define EDMA_STREAM7_BASE                (EDMA_BASE + 0x00A0)
#define EDMA_STREAM8_BASE                (EDMA_BASE + 0x00B8)

#define EDMA_2D_BASE                     (EDMA_BASE + 0x00F4)
#define EDMA_STREAM1_2D_BASE             (EDMA_2D_BASE + 0x0004)
#define EDMA_STREAM2_2D_BASE             (EDMA_2D_BASE + 0x000C)
#define EDMA_STREAM3_2D_BASE             (EDMA_2D_BASE + 0x0014)
#define EDMA_STREAM4_2D_BASE             (EDMA_2D_BASE + 0x001C)
#define EDMA_STREAM5_2D_BASE             (EDMA_2D_BASE + 0x0024)
#define EDMA_STREAM6_2D_BASE             (EDMA_2D_BASE + 0x002C)
#define EDMA_STREAM7_2D_BASE             (EDMA_2D_BASE + 0x0034)
#define EDMA_STREAM8_2D_BASE             (EDMA_2D_BASE + 0x003C)

#define EDMA_LL_BASE                     (EDMA_BASE + 0x00D0)
#define EDMA_STREAM1_LL_BASE             (EDMA_LL_BASE + 0x0004)
#define EDMA_STREAM2_LL_BASE             (EDMA_LL_BASE + 0x0008)
#define EDMA_STREAM3_LL_BASE             (EDMA_LL_BASE + 0x000C)
#define EDMA_STREAM4_LL_BASE             (EDMA_LL_BASE + 0x0010)
#define EDMA_STREAM5_LL_BASE             (EDMA_LL_BASE + 0x0014)
#define EDMA_STREAM6_LL_BASE             (EDMA_LL_BASE + 0x0018)
#define EDMA_STREAM7_LL_BASE             (EDMA_LL_BASE + 0x001C)
#define EDMA_STREAM8_LL_BASE             (EDMA_LL_BASE + 0x0020)

#define EDMAMUX_BASE                     (EDMA_BASE + 0x0140)
#define EDMAMUX_CHANNEL1_BASE            (EDMAMUX_BASE)
#define EDMAMUX_CHANNEL2_BASE            (EDMAMUX_BASE + 0x0004)
#define EDMAMUX_CHANNEL3_BASE            (EDMAMUX_BASE + 0x0008)
#define EDMAMUX_CHANNEL4_BASE            (EDMAMUX_BASE + 0x000C)
#define EDMAMUX_CHANNEL5_BASE            (EDMAMUX_BASE + 0x0010)
#define EDMAMUX_CHANNEL6_BASE            (EDMAMUX_BASE + 0x0014)
#define EDMAMUX_CHANNEL7_BASE            (EDMAMUX_BASE + 0x0018)
#define EDMAMUX_CHANNEL8_BASE            (EDMAMUX_BASE + 0x001C)

#define EDMAMUX_GENERATOR1_BASE          (EDMA_BASE + 0x0160)
#define EDMAMUX_GENERATOR2_BASE          (EDMA_BASE + 0x0164)
#define EDMAMUX_GENERATOR3_BASE          (EDMA_BASE + 0x0168)
#define EDMAMUX_GENERATOR4_BASE          (EDMA_BASE + 0x016C)

#define FLASH_REG_BASE                   (AHBPERIPH1_BASE + 0x3C00)
#define CRM_BASE                         (AHBPERIPH1_BASE + 0x3800)
#define CRC_BASE                         (AHBPERIPH1_BASE + 0x3000)
#define SDIO2_BASE                       (AHBPERIPH2_BASE + 0x61000)
#define DVP_BASE                         (AHBPERIPH2_BASE + 0x50000)
#define OTGFS1_BASE                      (AHBPERIPH2_BASE + 0x00000)

#define EMAC_MAC_BASE                    (EMAC_BASE)
#define EMAC_MMC_BASE                    (EMAC_BASE + 0x0100)
#define EMAC_PTP_BASE                    (EMAC_BASE + 0x0700)
#define EMAC_DMA_BASE                    (EMAC_BASE + 0x1000)
#endif

/**
  * @}
  */

/** @addtogroup Peripheral_type_define
  * @{
  */
/**
  * @brief type define exint register all
  */
typedef struct
{

  /**
    * @brief exint inten register, offset:0x00
    */
  __IO uint32_t INTEN;

  /**
    * @brief exint evten register, offset:0x04
    */
  __IO uint32_t EVTEN;

  /**
    * @brief exint polcfg1 register, offset:0x08
    */
  __IO uint32_t POLCFG1;

  /**
    * @brief exint polcfg2 register, offset:0x0C
    */
  __IO uint32_t POLCFG2;

  /**
    * @brief exint swtrg register, offset:0x10
    */
  __IO uint32_t SWTRG;

  /**
    * @brief exint intsts register, offset:0x14
    */
  __IO uint32_t INTSTS;

} EXINT_TypeDef;

/**
  * @brief type define crm register all
  */
typedef struct
{
  /**
    * @brief crm ctrl register, offset:0x00
    */
  __IO uint32_t CTRL;

  /**
    * @brief crm pllcfg register, offset:0x04
    */
  __IO uint32_t PLLCFG;

  /**
    * @brief crm cfg register, offset:0x08
    */
  __IO uint32_t CFG;

  /**
    * @brief crm clkint register, offset:0x0C
    */
  __IO uint32_t CLKINT;

  /**
    * @brief crm ahbrst1 register, offset:0x10
    */
  __IO uint32_t AHBRST1;

  /**
    * @brief crm ahbrst2 register, offset:0x14
    */
  __IO uint32_t AHBRST2;

  /**
    * @brief crm ahbrst3 register, offset:0x18
    */
  __IO uint32_t AHBRST3;

  /**
    * @brief crm reserved1 register, offset:0x1C
    */
  __IO uint32_t RESERVED1;

  /**
    * @brief crm apb1rst register, offset:0x20
    */
  __IO uint32_t APB1RST;
  
  /**
    * @brief crm apb2rst register, offset:0x24
    */
  __IO uint32_t APB2RST;
    
  /**
    * @brief crm reserved2 register, offset:0x28~0x2C
    */
  __IO uint32_t RESERVED2[2];

  /**
    * @brief crm ahben1 register, offset:0x30
    */
  __IO uint32_t AHBEN1;

  /**
    * @brief crm ahben2 register, offset:0x34
    */
  __IO uint32_t AHBEN2;

  /**
    * @brief crm ahben3 register, offset:0x38
    */
  __IO uint32_t AHBEN3;

  /**
    * @brief crm reserved3 register, offset:0x3C
    */
  __IO uint32_t RESERVED3;

  /**
    * @brief crm apb1en register, offset:0x40
    */
  __IO uint32_t APB1EN;

  /**
    * @brief crm apb2en register, offset:0x44
    */
  __IO uint32_t APB2EN;
  
  /**
    * @brief crm reserved4 register, offset:0x48~0x4C
    */
  __IO uint32_t RESERVED4[2];

  /**
    * @brief crm ahblpen1 register, offset:0x50
    */
  __IO uint32_t AHBLPEN1;

  /**
    * @brief crm ahblpen2 register, offset:0x54
    */
  __IO uint32_t AHBLPEN2;

  /**
    * @brief crm ahblpen3 register, offset:0x58
    */
  __IO uint32_t AHBLPEN3;

  /**
    * @brief crm reserved5 register, offset:0x5C
    */
  __IO uint32_t RESERVED5;

  /**
    * @brief crm apb1lpen register, offset:0x60
    */
  __IO uint32_t APB1LPEN;

  /**
    * @brief crm apb2lpen register, offset:0x64
    */
  __IO uint32_t APB2LPEN;

  /**
    * @brief crm reserved6 register, offset:0x68~0x6C
    */
  __IO uint32_t RESERVED6[2];

  /**
    * @brief crm bpdc register, offset:0x70
    */
  __IO uint32_t BPDC;
  
  /**
    * @brief crm ctrlsts register, offset:0x74
    */
  __IO uint32_t CTRLSTS;

  /**
    * @brief crm reserved7 register, offset:0x78~0x9C
    */
  __IO uint32_t RESERVED7[10];

  /**
    * @brief crm misc1 register, offset:0xA0
    */
  __IO uint32_t MISC1;

  /**
    * @brief crm misc2 register, offset:0xA4
    */
  __IO uint32_t MISC2;

} CRM_TypeDef;

/**
  * @brief type define pwc register all
  */
typedef struct
{
  /**
    * @brief pwc ctrl register, offset:0x00
    */
  __IO uint32_t CTRL;

  /**
    * @brief pwc ctrlsts register, offset:0x04
    */
  __IO uint32_t CTRLSTS;

  /**
    * @brief crm reserved1 register, offset:0x08~0x0C
    */
  __IO uint32_t RESERVED1[2];

  /**
    * @brief pwc ldoov register, offset:0x10
    */
  __IO uint32_t LDOOV;

} PWC_TypeDef;

/**
  * @brief type define flash register all
  */
typedef struct
{
  /**
    * @brief flash psr register, offset:0x00
    */
  __IO uint32_t PSR;

  /**
    * @brief flash unlock register, offset:0x04
    */
  __IO uint32_t UNLOCK;

  /**
    * @brief flash usd unlock register, offset:0x08
    */
  __IO uint32_t USD_UNLOCK;

  /**
    * @brief flash sts register, offset:0x0C
    */
  __IO uint32_t STS;

  /**
    * @brief flash ctrl register, offset:0x10
    */
  __IO uint32_t CTRL;

  /**
    * @brief flash addr register, offset:0x14
    */
  __IO uint32_t ADDR;

  /**
    * @brief flash reserved1 register, offset:0x18
    */
  __IO uint32_t RESERVED1;

  /**
    * @brief flash usd register, offset:0x1C
    */
  __IO uint32_t USD;

  /**
    * @brief flash epps register, offset:0x20
    */
  __IO uint32_t EPPS0;

  /**
    * @brief flash reserved2 register, offset:0x28~0x24
    */
  __IO uint32_t RESERVED2[2];

  /**
    * @brief flash epps1 register, offset:0x2C
    */
  __IO uint32_t EPPS1;

  /**
    * @brief flash reserved3 register, offset:0x40~0x30
    */
  __IO uint32_t RESERVED3[5];

  /**
    * @brief flash unlock2 register, offset:0x44
    */
  __IO uint32_t UNLOCK2;

  /**
    * @brief flash reserved4 register, offset:0x48
    */
  __IO uint32_t RESERVED4;

  /**
    * @brief flash sts2 register, offset:0x4C
    */
  __IO uint32_t STS2;

  /**
    * @brief flash ctrl2 register, offset:0x50
    */
  __IO uint32_t CTRL2;

  /**
    * @brief flash addr2 register, offset:0x54
    */
  __IO uint32_t ADDR2;

  /**
    * @brief flash contr register, offset:0x58
    */
  __IO uint32_t CONTR;

  /**
    * @brief flash reserved5 register, offset:0x5C
    */
  __IO uint32_t RESERVED5;

  /**
    * @brief flash divr register, offset:0x60
    */
  __IO uint32_t DIVR;

  /**
    * @brief flash reserved6 register, offset:0xC4~0x64
    */
  __IO uint32_t RESERVED6[25];

  /**
    * @brief flash slib_sts2 register, offset:0xC8
    */
  __IO uint32_t SLIB_STS2;

  /**
    * @brief flash slib_sts0 register, offset:0xCC
    */
  __IO uint32_t SLIB_STS0;

  /**
    * @brief flash slib_sts1 register, offset:0xD0
    */
  __IO uint32_t SLIB_STS1;

  /**
    * @brief flash slib_pwd_clr register, offset:0xD4
    */
  __IO uint32_t SLIB_PWD_CLR;

  /**
    * @brief flash slib_misc_sts register, offset:0xD8
    */
  __IO uint32_t SLIB_MISC_STS;

  /**
    * @brief flash slib_set_pwd register, offset:0xDC
    */
  __IO uint32_t SLIB_SET_PWD;

  /**
    * @brief flash slib_set_range0 register, offset:0xE0
    */
  __IO uint32_t SLIB_SET_RANGE0;

  /**
    * @brief flash slib_set_range1 register, offset:0xE4
    */
  __IO uint32_t SLIB_SET_RANGE1;

  /**
    * @brief flash reserved7 register, offset:0xEC~0xE8
    */
  __IO uint32_t RESERVED7[2];

  /**
    * @brief flash slib_unlock register, offset:0xF0
    */
  __IO uint32_t SLIB_UNLOCK;

  /**
    * @brief flash crc_ctrl register, offset:0xF4
    */
  __IO uint32_t CRC_CTRL;

  /**
    * @brief flash crc_chkr register, offset:0xF8
    */
  __IO uint32_t CRC_CHKR;
  
} FLASH_TypeDef;

/**
  * @brief type define gpio register all
  */
typedef struct
{
  /**
    * @brief gpio mode register, offset:0x00
    */
  __IO uint32_t CFGR;

  /**
    * @brief gpio output type register, offset:0x04
    */
  __IO uint32_t OMODE;

  /**
    * @brief gpio output driver register, offset:0x08
    */
  __IO uint32_t ODRVR;

  /**
    * @brief gpio pull up/down register, offset:0x0C
    */
  __IO uint32_t PULL;

  /**
    * @brief gpio input data register, offset:0x10
    */
  __IO uint32_t IDT;

  /**
    * @brief gpio output data register, offset:0x14
    */
  __IO uint32_t ODT;

  /**
    * @brief gpio scr register, offset:0x18
    */
  __IO uint32_t SCR;

  /**
    * @brief gpio wpen register, offset:0x1C
    */
  __IO uint32_t WPR;

  /**
    * @brief gpio muxl register, offset:0x20
    */
  __IO uint32_t MUXL;

  /**
    * @brief gpio muxh register, offset:0x24
    */
  __IO uint32_t MUXH;

  /**
    * @brief gpio clr register, offset:0x28
    */
  __IO uint32_t CLR;

  /**
    * @brief gpio reserved1 register, offset:0x2C~0x38
    */
  __IO uint32_t RESERVED1[4];

  /**
    * @brief gpio hdrv register, offset:0x3C
    */
  __IO uint32_t HDRV;

} GPIO_TypeDef;

/**
  * @brief type define system config register all
  */
typedef struct
{
  /**
    * @brief scfg cfg1 register, offset:0x00
    */
  __IO uint32_t CFG1;

  /**
    * @brief scfg cfg2 register, offset:0x04
    */
  __IO uint32_t CFG2;

  /**
    * @brief scfg exintc register, offset:0x08-0x14
    */
  __IO uint32_t EXINTC[4];

  /**
    * @brief scfg reserved1 register, offset:0x18~0x28
    */
  __IO uint32_t RESERVED1[5];

  /**
    * @brief scfg uhdrv register, offset:0x2C
    */
  __IO uint32_t UHDRV;

} SCFG_TypeDef;

/**
  * @brief type define tmr register all
  */
typedef struct
{
  /**
    * @brief tmr ctrl1 register, offset:0x00
    */
  __IO uint32_t CTRL1;

  /**
    * @brief tmr ctrl2 register, offset:0x04
    */
  __IO uint32_t CTRL2;

  /**
    * @brief tmr smc register, offset:0x08
    */
  __IO uint32_t STCTRL;

  /**
    * @brief tmr die register, offset:0x0C
    */
  __IO uint32_t IDEN;

  /**
    * @brief tmr ists register, offset:0x10
    */
  __IO uint32_t ISTS;

  /**
    * @brief tmr eveg register, offset:0x14
    */
  __IO uint32_t SWEVT;

  /**
    * @brief tmr ccm1 register, offset:0x18
    */
  __IO uint32_t CM1;

  /**
    * @brief tmr ccm2 register, offset:0x1C
    */
  __IO uint32_t CM2;

  /**
    * @brief tmr cce register, offset:0x20
    */
  __IO  uint32_t CCTRL;

  /**
    * @brief tmr cnt register, offset:0x24
    */
  __IO uint32_t CVAL;

  /**
    * @brief tmr div, offset:0x28
    */
  __IO uint32_t DIV;

  /**
    * @brief tmr pr register, offset:0x2C
    */
  __IO  uint32_t PR;

  /**
    * @brief tmr rpr register, offset:0x30
    */
  __IO uint32_t RPR;

  /**
    * @brief tmr c1dt register, offset:0x34
    */
  __IO uint32_t C1DT;

  /**
    * @brief tmr c2dt register, offset:0x38
    */
  __IO uint32_t C2DT;

  /**
    * @brief tmr c3dt register, offset:0x3C
    */
  __IO uint32_t C3DT;

  /**
    * @brief tmr c4dt register, offset:0x40
    */
  __IO uint32_t C4DT;

  /**
    * @brief tmr brk register, offset:0x44
    */
  __IO uint32_t BRK;

  /**
    * @brief tmr dmactrl register, offset:0x48
    */
  __IO uint32_t DMACTRL;

  /**
    * @brief tmr dmadt register, offset:0x4C
    */
  __IO uint32_t DMADT;

  /**
    * @brief tmr rmp register, offset:0x50
    */
  __IO uint32_t RMP;

  /**
    * @brief tmr reserved1 register, offset:0x54-0x6C
    */
  __IO uint32_t RESERVED1[7];

  /**
    * @brief tmr cm3 register, offset:0x70
    */
  __IO uint32_t CM3;

  /**
    * @brief tmr c5dt register, offset:0x74
    */
  __IO uint32_t C5DT;

} TMR_TypeDef;

/**
  * @brief type define debug register all
  */
typedef struct
{
  /**
    * @brief debug idcode register, offset:0x00
    */
  __IO uint32_t IDCODE;

  /**
    * @brief debug ctrl register, offset:0x04
    */
  __IO uint32_t CTRL;

  /**
    * @brief debug apb1 frz register, offset:0x08
    */
  __IO uint32_t APB1_PAUSE;

  /**
    * @brief debug apb2 frz register, offset:0x0c
    */
  __IO uint32_t APB2_PAUSE;

} DEBUG_TypeDef;

/**
  * @brief type define dma register
  */
typedef struct
{
  /**
    * @brief dma sts register, offset:0x00
    */
  __IO uint32_t STS;

  /**
    * @brief dma clr register, offset:0x04
    */
  __IO uint32_t CLR;

  /**
    * @brief reserved, offset:0x08~0xFC
    */
  __IO uint32_t RESERVED1[62];

  /**
    * @brief dmamux sel register, offset:0x100
    */
  __IO uint32_t MUXSEL;

  /**
    * @brief reserved, offset:0x08~0xFC
    */
  __IO uint32_t RESERVED2[11];

  /**
    * @brief dmamux syncsts register, offset:0x130
    */
  __IO uint32_t MUXSYNCSTS;

  /**
    * @brief dmamux syncclr register, offset:0x134
    */
  __IO uint32_t MUXSYNCCLR;

  /**
    * @brief dmamux request generator status register, offset:0x138
    */
  __IO uint32_t MUXGSTS;

  /**
    * @brief dmamux request generator status clear register, offset:0x13C
    */
  __IO uint32_t MUXGCLR;

} DMA_TypeDef;

/**
  * @brief type define dma channel register all
  */
typedef struct
{
  /**
    * @brief dma ctrl register, offset:0x08+20*(x-1) x=1...7
    */
  __IO uint32_t CTRL;

  /**
    * @brief dma dtcnt register, offset:0x0C+20*(x-1) x=1...7
    */
  __IO uint32_t DTCNT;

  /**
    * @brief dma cpba register, offset:0x10+20*(x-1) x=1...7
    */
  __IO uint32_t PADDR;

  /**
    * @brief dma cmba register, offset:0x14+20*(x-1) x=1...7
    */
  __IO uint32_t MADDR;
} DMA_Channel_TypeDef;

/**
  * @brief type define dmamux muxsctrl register
  */
typedef struct
{
  /**
    * @brief dma muxsctrl register
    */
  __IO uint32_t MUXCTRL;

} DMAMUX_Channel_TypeDef;

/**
  * @brief type define dmamux request generator register all
  */
typedef struct
{
  /**
    * @brief dmamux request generator register, offset:0x120+4*(x-1) x=1...4
    */
  __IO uint32_t GCTRL;

} DMAMUX_Generator_TypeDef;

/**
  * @brief type define edma register
  */
typedef struct
{
  /**
    * @brief edma sts1 register, offset:0x00
    */
  __IO uint32_t STS1;

  /**
    * @brief edma sts2 register, offset:0x04
    */
  __IO uint32_t STS2;

  /**
    * @brief edma clr1 register, offset:0x08
    */
  __IO uint32_t CLR1;

  /**
    * @brief edma clr2 register, offset:0x0C
    */
  __IO uint32_t CLR2;

  /**
    * @brief reserved, offset:0x10~0xCC
    */
  __IO uint32_t RESERVED1[48];

  /**
    * @brief edma link list ctrl register, offset:0xD0
    */
  __IO uint32_t LLCTRL;

  /**
    * @brief reserved, offset:0xD4~0xF0
    */
  __IO uint32_t RESERVED2[8];

  /**
    * @brief edma 2d ctrl register, offset:0xF4
    */
  __IO uint32_t S2DCTRL;

  /**
    * @brief reserved, offset:0xF8~0x138
    */
  __IO uint32_t RESERVED3[17];

  /**
    * @brief edmamux sel register, offset:0x13C
    */
  __IO uint32_t MUXSEL;

  /**
    * @brief reserved, offset:0x140~0x16C
    */
  __IO uint32_t RESERVED4[12];

  /**
    * @brief edmamux syncsts register, offset:0x170
    */
  __IO uint32_t MUXSYNCSTS;

  /**
    * @brief edmamux syncclr register, offset:0x174
    */
  __IO uint32_t MUXSYNCCLR;

  /**
    * @brief edmamux request generator status register, offset:0x178
    */
  __IO uint32_t MUXGSTS;

  /**
    * @brief edmamux request generator status clear register, offset:0x17C
    */
  __IO uint32_t MUXGCLR;

} EDMA_TypeDef;

/**
  * @brief type define edma channel register all
  */
typedef struct
{
  /**
    * @brief edma sxctrl register, offset:0x10+0x18*n n=1...8
    */
  __IO uint32_t CTRL;

  /**
    * @brief edma dtcnt register, offset:0x14+0x18*n n=1...8
    */
  __IO uint32_t DTCNT;

  /**
    * @brief edma paddr register, offset:0x18+0x18*n n=1...8
    */
  __IO uint32_t PADDR;

  /**
    * @brief edma m0adr register, offset:0x1C+0x18*n n=1...8
    */
  __IO uint32_t M0ADDR;

  /**
    * @brief edma m1adr register, offset:0x20+0x18*n n=1...8
    */
  __IO uint32_t M1ADDR;

  /**
    * @brief edma fctrl register, offset:0x24+0x18*n n=1...8
    */
  __IO uint32_t FCTRL;
  
} EDMA_Stream_TypeDef;

/**
  * @brief type define edma stream link list pointer register
  */
typedef struct
{
  /**
    * @brief edma stream link list pointer register
    */
  __IO uint32_t LLP;

} EDMA_Stream_Link_List_TypeDef;

/**
  * @brief type define edma 2d register all
  */
typedef struct
{
  /**
    * @brief edma s2dcnt register, offset:0x00
    */
  __IO uint32_t S2DCNT;

  /**
    * @brief edma stride register, offset:0x04
    */
  __IO uint32_t STRIDE;
 
} EDMA_Stream_2D_TypeDef;

/**
  * @brief type define edmamux muxsctrl register
  */
typedef struct
{
  /**
    * @brief edma muxsctrl register
    */
  __IO uint32_t MUXCTRL;

} EDMAMUX_Channel_TypeDef;

/**
  * @brief type define edmaamux request generator register all
  */
typedef struct
{
  /**
    * @brief edmaamux request generator register, offset:0x120+4*(x-1) x=1...4
    */
  __IO uint32_t GCTRL;

} EDMAMUX_Generator_TypeDef;

/**
  * @brief type define adc register all
  */
typedef struct
{
  /**
    * @brief adc sts register, offset:0x00
    */
  __IO uint32_t STS;

  /**
    * @brief adc ctrl1 register, offset:0x04
    */  
   __IO uint32_t CTRL1;

  /**
    * @brief adc ctrl2 register, offset:0x08
    */
  __IO uint32_t CTRL2;

  /**
    * @brief adc spt1 register, offset:0x0C
    */
  __IO uint32_t SPT1;

  /**
    * @brief adc spt2 register, offset:0x10
    */
  __IO uint32_t SPT2;

  /**
    * @brief adc pcdto1 register, offset:0x14
    */
  __IO uint32_t PCDTO1;

  /**
    * @brief adc pcdto2 register, offset:0x18
    */
  __IO uint32_t PCDTO2;

  /**
    * @brief adc pcdto3 register, offset:0x1C
    */
  __IO uint32_t PCDTO3;

  /**
    * @brief adc pcdto4 register, offset:0x20
    */
  __IO uint32_t PCDTO4;

  /**
    * @brief adc vmhb register, offset:0x24
    */
  __IO uint32_t VMHB;

  /**
    * @brief adc vmlb register, offset:0x28
    */
  __IO uint32_t VMLB;

  /**
    * @brief adc osq1 register, offset:0x2C
    */
  __IO uint32_t OSQ1;

  /**
    * @brief adc osq2 register, offset:0x30
    */
  __IO uint32_t OSQ2;

  /**
    * @brief adc osq3 register, offset:0x34
    */
  __IO uint32_t OSQ3;

  /**
    * @brief adc psq register, offset:0x38
    */
  __IO uint32_t PSQ;

  /**
    * @brief adc pdt1 register, offset:0x3C
    */
  __IO uint32_t PDT1;

  /**
    * @brief adc pdt2 register, offset:0x40
    */
  __IO uint32_t PDT2;

  /**
    * @brief adc pdt3 register, offset:0x44
    */
  __IO uint32_t PDT3;

  /**
    * @brief adc pdt4 register, offset:0x48
    */
  __IO uint32_t PDT4;

  /**
    * @brief adc odt register, offset:0x4C
    */
  __IO uint32_t ODT;

  /**
    * @brief adc reserved1 register, offset:0x50~0x7C
    */
  __IO uint32_t RESERVED1[12];

  /**
    * @brief adc oversample register, offset:0x80 
    */
  __IO uint32_t OVSP;

  /**
    * @brief adc reserved2 register, offset:0x80~0xB0
    */
  __IO uint32_t RESERVED2[12];

  /**
    * @brief adc calval register, offset:0xB4
    */
  __IO uint32_t CALVAL;

} ADC_TypeDef;

/**
  * @brief type define adc register all
  */
typedef struct
{
  /**
    * @brief adc csts register, offset:0x00
    */
  __IO uint32_t CSTS;
  
  /**
    * @brief adc cctrl register, offset:0x04
    */
  __IO uint32_t CCTRL;

  /**
    * @brief adc codt register, offset:0x08
    */
  __IO uint32_t CODT;

} ADCCOM_TypeDef;

/**
  * @brief type define i2c register all
  */
typedef struct
{
  /**
    * @brief i2c ctrl1 register, offset:0x00
    */
  __IO uint32_t CTRL1;

  /**
    * @brief i2c ctrl2 register, offset:0x04
    */
  __IO uint32_t CTRL2;

  /**
    * @brief i2c oaddr1 register, offset:0x08
    */
  __IO uint32_t OADDR1;

  /**
    * @brief i2c oaddr2 register, offset:0x0C
    */
  __IO uint32_t OADDR2;

  /**
    * @brief i2c clkctrl register, offset:0x10
    */
  __IO uint32_t CLKCTRL;

  /**
    * @brief i2c timeout register, offset:0x14
    */
  __IO uint32_t TIMEOUT;

  /**
    * @brief i2c sts register, offset:0x18
    */
  __IO uint32_t STS;

  /**
    * @brief i2c clr register, offset:0x1C
    */
  __IO uint32_t CLR;

  /**
    * @brief i2c pec register, offset:0x20
    */
  __IO uint32_t PEC;

  /**
    * @brief i2c rxdt register, offset:0x20
    */
  __IO uint32_t RXDT;

  /**
    * @brief i2c txdt register, offset:0x20
    */
  __IO uint32_t TXDT;

} I2C_TypeDef;

/**
  * @brief type define usart register all
  */
typedef struct
{
  /**
    * @brief usart sts register, offset:0x00
    */
  __IO uint32_t STS;

  /**
    * @brief usart dt register, offset:0x04
    */
  __IO uint32_t DT;

  /**
    * @brief usart baudr register, offset:0x08
    */
  __IO uint32_t BAUDR;

  /**
    * @brief usart ctrl1 register, offset:0x0C
    */
  __IO uint32_t CTRL1;

  /**
    * @brief usart ctrl2 register, offset:0x10
    */
  __IO uint32_t CTRL2;

  /**
    * @brief usart ctrl3 register, offset:0x14
    */
  __IO uint32_t CTRL3;

  /**
    * @brief usart gdiv register, offset:0x18
    */
  __IO uint32_t GDIV;

} USART_TypeDef;

/**
  * @brief type define spi register all
  */
typedef struct
{

  /**
    * @brief spi ctrl1 register, offset:0x00
    */
  __IO uint32_t CTRL1;

  /**
    * @brief spi ctrl2 register, offset:0x04
    */
  __IO uint32_t CTRL2;

  /**
    * @brief spi sts register, offset:0x08
    */
  __IO uint32_t STS;

  /**
    * @brief spi dt register, offset:0x0C
    */
  __IO uint32_t DT;

  /**
    * @brief spi cpoly register, offset:0x10
    */
  __IO uint32_t CPOLY;

  /**
    * @brief spi rcrc register, offset:0x14
    */
  __IO uint32_t RCRC;
  /**
    * @brief spi tcrc register, offset:0x18
    */
  __IO uint32_t TCRC;

  /**
    * @brief spi i2sctrl register, offset:0x1C
    */
  __IO uint32_t I2SCTRL;

  /**
    * @brief spi i2sclk register, offset:0x20
    */
  __IO uint32_t I2SCLK;

} SPI_TypeDef;

/**
  * @}
  */

/** @addtogroup Peripheral_instance
  * @{
  */

#define EXINT                             ((EXINT_TypeDef *) EXINT_BASE)
#define CRM                               ((CRM_TypeDef *) CRM_BASE)
#define PWC                               ((PWC_TypeDef *) PWC_BASE)
#define FLASH                             ((FLASH_TypeDef *) FLASH_REG_BASE)
#define GPIOA                             ((GPIO_TypeDef *) GPIOA_BASE)
#define GPIOB                             ((GPIO_TypeDef *) GPIOB_BASE)
#define GPIOC                             ((GPIO_TypeDef *) GPIOC_BASE)
#define GPIOD                             ((GPIO_TypeDef *) GPIOD_BASE)
#define GPIOE                             ((GPIO_TypeDef *) GPIOE_BASE)
#define GPIOF                             ((GPIO_TypeDef *) GPIOF_BASE)
#define GPIOG                             ((GPIO_TypeDef *) GPIOG_BASE)
#define GPIOH                             ((GPIO_TypeDef *) GPIOH_BASE)
#define SCFG                              ((SCFG_TypeDef *) SCFG_BASE)
#define TMR1                              ((TMR_TypeDef *) TMR1_BASE)
#define TMR2                              ((TMR_TypeDef *) TMR2_BASE)
#define TMR3                              ((TMR_TypeDef *) TMR3_BASE)
#define TMR4                              ((TMR_TypeDef *) TMR4_BASE)
#define TMR5                              ((TMR_TypeDef *) TMR5_BASE)
#define TMR6                              ((TMR_TypeDef *) TMR6_BASE)
#define TMR7                              ((TMR_TypeDef *) TMR7_BASE)
#define TMR8                              ((TMR_TypeDef *) TMR8_BASE)
#define TMR9                              ((TMR_TypeDef *) TMR9_BASE)
#define TMR10                             ((TMR_TypeDef *) TMR10_BASE)
#define TMR11                             ((TMR_TypeDef *) TMR11_BASE)
#define TMR12                             ((TMR_TypeDef *) TMR12_BASE)
#define TMR13                             ((TMR_TypeDef *) TMR13_BASE)
#define TMR14                             ((TMR_TypeDef *) TMR14_BASE)
#define TMR20                             ((TMR_TypeDef *) TMR20_BASE)
#define DEBUGMCU                          ((DEBUG_TypeDef *) DEBUG_BASE)
#define DMA1                              ((DMA_TypeDef *) DMA1_BASE)
#define DMA2                              ((DMA_TypeDef *) DMA2_BASE)
#define DMA1_CHANNEL1                     ((DMA_Channel_TypeDef *) DMA1_CHANNEL1_BASE)
#define DMA1_CHANNEL2                     ((DMA_Channel_TypeDef *) DMA1_CHANNEL2_BASE)
#define DMA1_CHANNEL3                     ((DMA_Channel_TypeDef *) DMA1_CHANNEL3_BASE)
#define DMA1_CHANNEL4                     ((DMA_Channel_TypeDef *) DMA1_CHANNEL4_BASE)
#define DMA1_CHANNEL5                     ((DMA_Channel_TypeDef *) DMA1_CHANNEL5_BASE)
#define DMA1_CHANNEL6                     ((DMA_Channel_TypeDef *) DMA1_CHANNEL6_BASE)
#define DMA1_CHANNEL7                     ((DMA_Channel_TypeDef *) DMA1_CHANNEL7_BASE)
#define DMA2_CHANNEL1                     ((DMA_Channel_TypeDef *) DMA2_CHANNEL1_BASE)
#define DMA2_CHANNEL2                     ((DMA_Channel_TypeDef *) DMA2_CHANNEL2_BASE)
#define DMA2_CHANNEL3                     ((DMA_Channel_TypeDef *) DMA2_CHANNEL3_BASE)
#define DMA2_CHANNEL4                     ((DMA_Channel_TypeDef *) DMA2_CHANNEL4_BASE)
#define DMA2_CHANNEL5                     ((DMA_Channel_TypeDef *) DMA2_CHANNEL5_BASE)
#define DMA2_CHANNEL6                     ((DMA_Channel_TypeDef *) DMA2_CHANNEL6_BASE)
#define DMA2_CHANNEL7                     ((DMA_Channel_TypeDef *) DMA2_CHANNEL7_BASE)
#define DMA1MUX_CHANNEL1                  ((DMAMUX_Channel_TypeDef *) DMA1MUX_CHANNEL1_BASE)
#define DMA1MUX_CHANNEL2                  ((DMAMUX_Channel_TypeDef *) DMA1MUX_CHANNEL2_BASE)
#define DMA1MUX_CHANNEL3                  ((DMAMUX_Channel_TypeDef *) DMA1MUX_CHANNEL3_BASE)
#define DMA1MUX_CHANNEL4                  ((DMAMUX_Channel_TypeDef *) DMA1MUX_CHANNEL4_BASE)
#define DMA1MUX_CHANNEL5                  ((DMAMUX_Channel_TypeDef *) DMA1MUX_CHANNEL5_BASE)
#define DMA1MUX_CHANNEL6                  ((DMAMUX_Channel_TypeDef *) DMA1MUX_CHANNEL6_BASE)
#define DMA1MUX_CHANNEL7                  ((DMAMUX_Channel_TypeDef *) DMA1MUX_CHANNEL7_BASE)
#define DMA2MUX_CHANNEL1                  ((DMAMUX_Channel_TypeDef *) DMA2MUX_CHANNEL1_BASE)
#define DMA2MUX_CHANNEL2                  ((DMAMUX_Channel_TypeDef *) DMA2MUX_CHANNEL2_BASE)
#define DMA2MUX_CHANNEL3                  ((DMAMUX_Channel_TypeDef *) DMA2MUX_CHANNEL3_BASE)
#define DMA2MUX_CHANNEL4                  ((DMAMUX_Channel_TypeDef *) DMA2MUX_CHANNEL4_BASE)
#define DMA2MUX_CHANNEL5                  ((DMAMUX_Channel_TypeDef *) DMA2MUX_CHANNEL5_BASE)
#define DMA2MUX_CHANNEL6                  ((DMAMUX_Channel_TypeDef *) DMA2MUX_CHANNEL6_BASE)
#define DMA2MUX_CHANNEL7                  ((DMAMUX_Channel_TypeDef *) DMA2MUX_CHANNEL7_BASE)
#define DMA1MUX_GENERATOR1                ((DMAMUX_Generator_TypeDef *) DMA1MUX_GENERATOR1_BASE)
#define DMA1MUX_GENERATOR2                ((DMAMUX_Generator_TypeDef *) DMA1MUX_GENERATOR2_BASE)
#define DMA1MUX_GENERATOR3                ((DMAMUX_Generator_TypeDef *) DMA1MUX_GENERATOR3_BASE)
#define DMA1MUX_GENERATOR4                ((DMAMUX_Generator_TypeDef *) DMA1MUX_GENERATOR4_BASE)
#define DMA2MUX_GENERATOR1                ((DMAMUX_Generator_TypeDef *) DMA2MUX_GENERATOR1_BASE)
#define DMA2MUX_GENERATOR2                ((DMAMUX_Generator_TypeDef *) DMA2MUX_GENERATOR2_BASE)
#define DMA2MUX_GENERATOR3                ((DMAMUX_Generator_TypeDef *) DMA2MUX_GENERATOR3_BASE)
#define DMA2MUX_GENERATOR4                ((DMAMUX_Generator_TypeDef *) DMA2MUX_GENERATOR4_BASE)
#define EDMA1                             ((EDMA_TypeDef *) EDMA_BASE)
#define EDMA1_STREAM1                     ((EDMA_Stream_TypeDef *) EDMA_STREAM1_BASE)
#define EDMA1_STREAM2                     ((EDMA_Stream_TypeDef *) EDMA_STREAM2_BASE)
#define EDMA1_STREAM3                     ((EDMA_Stream_TypeDef *) EDMA_STREAM3_BASE)
#define EDMA1_STREAM4                     ((EDMA_Stream_TypeDef *) EDMA_STREAM4_BASE)
#define EDMA1_STREAM5                     ((EDMA_Stream_TypeDef *) EDMA_STREAM5_BASE)
#define EDMA1_STREAM6                     ((EDMA_Stream_TypeDef *) EDMA_STREAM6_BASE)
#define EDMA1_STREAM7                     ((EDMA_Stream_TypeDef *) EDMA_STREAM7_BASE)
#define EDMA1_STREAM8                     ((EDMA_Stream_TypeDef *) EDMA_STREAM8_BASE)
#define EDMA1_STREAM1_2D                  ((EDMA_Stream_2D_TypeDef *) EDMA_STREAM1_2D_BASE)
#define EDMA1_STREAM2_2D                  ((EDMA_Stream_2D_TypeDef *) EDMA_STREAM2_2D_BASE)
#define EDMA1_STREAM3_2D                  ((EDMA_Stream_2D_TypeDef *) EDMA_STREAM3_2D_BASE)
#define EDMA1_STREAM4_2D                  ((EDMA_Stream_2D_TypeDef *) EDMA_STREAM4_2D_BASE)
#define EDMA1_STREAM5_2D                  ((EDMA_Stream_2D_TypeDef *) EDMA_STREAM5_2D_BASE)
#define EDMA1_STREAM6_2D                  ((EDMA_Stream_2D_TypeDef *) EDMA_STREAM6_2D_BASE)
#define EDMA1_STREAM7_2D                  ((EDMA_Stream_2D_TypeDef *) EDMA_STREAM7_2D_BASE)
#define EDMA1_STREAM8_2D                  ((EDMA_Stream_2D_TypeDef *) EDMA_STREAM8_2D_BASE)
#define EDMA1_STREAM1_LL                  ((EDMA_Stream_Link_List_TypeDef *) EDMA_STREAM1_LL_BASE)
#define EDMA1_STREAM2_LL                  ((EDMA_Stream_Link_List_TypeDef *) EDMA_STREAM2_LL_BASE)
#define EDMA1_STREAM3_LL                  ((EDMA_Stream_Link_List_TypeDef *) EDMA_STREAM3_LL_BASE)
#define EDMA1_STREAM4_LL                  ((EDMA_Stream_Link_List_TypeDef *) EDMA_STREAM4_LL_BASE)
#define EDMA1_STREAM5_LL                  ((EDMA_Stream_Link_List_TypeDef *) EDMA_STREAM5_LL_BASE)
#define EDMA1_STREAM6_LL                  ((EDMA_Stream_Link_List_TypeDef *) EDMA_STREAM6_LL_BASE)
#define EDMA1_STREAM7_LL                  ((EDMA_Stream_Link_List_TypeDef *) EDMA_STREAM7_LL_BASE)
#define EDMA1_STREAM8_LL                  ((EDMA_Stream_Link_List_TypeDef *) EDMA_STREAM8_LL_BASE)
#define EDMA1MUX_CHANNEL1                 ((EDMAMUX_Channel_TypeDef *) EDMAMUX_CHANNEL1_BASE)
#define EDMA1MUX_CHANNEL2                 ((EDMAMUX_Channel_TypeDef *) EDMAMUX_CHANNEL2_BASE)
#define EDMA1MUX_CHANNEL3                 ((EDMAMUX_Channel_TypeDef *) EDMAMUX_CHANNEL3_BASE)
#define EDMA1MUX_CHANNEL4                 ((EDMAMUX_Channel_TypeDef *) EDMAMUX_CHANNEL4_BASE)
#define EDMA1MUX_CHANNEL5                 ((EDMAMUX_Channel_TypeDef *) EDMAMUX_CHANNEL5_BASE)
#define EDMA1MUX_CHANNEL6                 ((EDMAMUX_Channel_TypeDef *) EDMAMUX_CHANNEL6_BASE)
#define EDMA1MUX_CHANNEL7                 ((EDMAMUX_Channel_TypeDef *) EDMAMUX_CHANNEL7_BASE)
#define EDMA1MUX_CHANNEL8                 ((EDMAMUX_Channel_TypeDef *) EDMAMUX_CHANNEL8_BASE)
#define EDMA1MUX_GENERATOR1               ((EDMAMUX_Generator_TypeDef *) EDMAMUX_GENERATOR1_BASE)
#define EDMA1MUX_GENERATOR2               ((EDMAMUX_Generator_TypeDef *) EDMAMUX_GENERATOR2_BASE)
#define EDMA1MUX_GENERATOR3               ((EDMAMUX_Generator_TypeDef *) EDMAMUX_GENERATOR3_BASE)
#define EDMA1MUX_GENERATOR4               ((EDMAMUX_Generator_TypeDef *) EDMAMUX_GENERATOR4_BASE)
#define ADC1                              ((ADC_TypeDef *) ADC1_BASE)
#define ADC2                              ((ADC_TypeDef *) ADC2_BASE)
#define ADC3                              ((ADC_TypeDef *) ADC3_BASE)
#define ADCCOM                            ((ADCCOM_TypeDef *) ADCCOM_BASE)
#define I2C1                              ((I2C_TypeDef *) I2C1_BASE)
#define I2C2                              ((I2C_TypeDef *) I2C2_BASE)
#define I2C3                              ((I2C_TypeDef *) I2C3_BASE)
#define USART1                            ((USART_TypeDef *) USART1_BASE)
#define USART2                            ((USART_TypeDef *) USART2_BASE)
#define USART3                            ((USART_TypeDef *) USART3_BASE)
#define UART4                             ((USART_TypeDef *) UART4_BASE)
#define UART5                             ((USART_TypeDef *) UART5_BASE)
#define USART6                            ((USART_TypeDef *) USART6_BASE)
#define UART7                             ((USART_TypeDef *) UART7_BASE)
#define UART8                             ((USART_TypeDef *) UART8_BASE)
#define SPI1                              ((SPI_TypeDef *) SPI1_BASE)
#define SPI2                              ((SPI_TypeDef *) SPI2_BASE)
#define SPI3                              ((SPI_TypeDef *) SPI3_BASE)
#define SPI4                              ((SPI_TypeDef *) SPI4_BASE)
#define I2S2EXT                           ((SPI_TypeDef *) I2S2EXT_BASE)
#define I2S3EXT                           ((SPI_TypeDef *) I2S3EXT_BASE)

/**
  * @}
  */

/** @defgroup FLASH_unlock_keys
  * @brief flash unlock keys
  * @{
  */
 
#define FLASH_UNLOCK_KEY1                ((uint32_t)0x45670123) /*!< flash operation unlock order key1 */
#define FLASH_UNLOCK_KEY2                ((uint32_t)0xCDEF89AB) /*!< flash operation unlock order key2 */
#define FAP_RELIEVE_KEY                  ((uint16_t)0x00A5)     /*!< flash fap relieve key val */
#define SLIB_UNLOCK_KEY                  ((uint32_t)0xA35F6D24) /*!< flash slib operation unlock order key */

#if defined (AT32F435CMU7) || defined (AT32F435CMT7) || defined (AT32F435RMT7) || \
    defined (AT32F435VMT7) || defined (AT32F435ZMT7) || defined (AT32F437RMT7) || \
    defined (AT32F437VMT7) || defined (AT32F437ZMT7)
#define FLASH_BANK1_START_ADDR           ((uint32_t)0x08000000) /*!< flash start address of bank1 */
#define FLASH_BANK1_END_ADDR             ((uint32_t)0x081FFFFF) /*!< flash end address of bank1 */
#define FLASH_BANK2_START_ADDR           ((uint32_t)0x08200000) /*!< flash start address of bank2 */
#define FLASH_BANK2_END_ADDR             ((uint32_t)0x083EFFFF) /*!< flash end address of bank2 */
#else
#define FLASH_BANK1_START_ADDR           ((uint32_t)0x08000000) /*!< flash start address of bank1 */
#define FLASH_BANK1_END_ADDR             ((uint32_t)0x0807FFFF) /*!< flash end address of bank1 */
#define FLASH_BANK2_START_ADDR           ((uint32_t)0x08080000) /*!< flash start address of bank2 */
#define FLASH_BANK2_END_ADDR             ((uint32_t)0x080FFFFF) /*!< flash end address of bank2 */
#endif

#define FLASHSIZE_BASE                   ((uint32_t)0x1FFFF7E0U) /*!< FLASH Size register base address */
#define UID_BASE                         ((uint32_t)0x1FFFF7E8U) /*!< Unique device ID register base address */

/**
  * @}
  */
 
#ifdef __cplusplus
}
#endif

#endif
