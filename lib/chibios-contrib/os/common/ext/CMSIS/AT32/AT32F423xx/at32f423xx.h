/**
  **************************************************************************
  * @file     at32f423.h
  * @brief    at32f423 header file
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

#ifndef __AT32F423_H
#define __AT32F423_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined (__CC_ARM)
 #pragma anon_unions
#endif


/** @addtogroup CMSIS
  * @{
  */

/** @addtogroup AT32F423
  * @{
  */

/** @addtogroup Library_configuration_section
  * @{
  */

/**
  * tip: to avoid modifying this file each time you need to switch between these
  *      devices, you can define the device in your toolchain compiler preprocessor.
  */

#if !defined (AT32F423K8U7_4) && !defined (AT32F423KBU7_4) && !defined (AT32F423KCU7_4) && \
    !defined (AT32F423T8U7)   && !defined (AT32F423TBU7)   && !defined (AT32F423TCU7)   && \
    !defined (AT32F423C8U7)   && !defined (AT32F423CBU7)   && !defined (AT32F423CCU7)   && \
    !defined (AT32F423C8T7)   && !defined (AT32F423CBT7)   && !defined (AT32F423CCT7)   && \
    !defined (AT32F423R8T7_7) && !defined (AT32F423RBT7_7) && !defined (AT32F423RCT7_7) && \
    !defined (AT32F423R8T7)   && !defined (AT32F423RBT7)   && !defined (AT32F423RCT7)   && \
    !defined (AT32F423V8T7)   && !defined (AT32F423VBT7)   && !defined (AT32F423VCT7)   && \
    !defined (AT32F423CBU7_7)

    #error "Please select first the target device used in your application (in at32f423.h file)"
#endif

#if defined (AT32F423K8U7_4) || defined (AT32F423KBU7_4) || defined (AT32F423KCU7_4) || \
    defined (AT32F423T8U7)   || defined (AT32F423TBU7)   || defined (AT32F423TCU7)   || \
    defined (AT32F423C8U7)   || defined (AT32F423CBU7)   || defined (AT32F423CCU7)   || \
    defined (AT32F423C8T7)   || defined (AT32F423CBT7)   || defined (AT32F423CCT7)   || \
    defined (AT32F423R8T7_7) || defined (AT32F423RBT7_7) || defined (AT32F423RCT7_7) || \
    defined (AT32F423R8T7)   || defined (AT32F423RBT7)   || defined (AT32F423RCT7)   || \
    defined (AT32F423V8T7)   || defined (AT32F423VBT7)   || defined (AT32F423VCT7)   || \
    defined (AT32F423CBU7_7)

    #define AT32F423xx
#endif

/**
  * define with package
  */
#if defined (AT32F423K8U7_4) || defined (AT32F423KBU7_4) || defined (AT32F423KCU7_4)

    #define AT32F423Kx
#endif

#if defined (AT32F423T8U7)   || defined (AT32F423TBU7)   || defined (AT32F423TCU7)

    #define AT32F423Tx
#endif

#if defined (AT32F423C8U7)   || defined (AT32F423CBU7)   || defined (AT32F423CCU7)   || \
    defined (AT32F423C8T7)   || defined (AT32F423CBT7)   || defined (AT32F423CCT7)   || \
    defined (AT32F423CBU7_7)

    #define AT32F423Cx
#endif

#if defined (AT32F423R8T7_7) || defined (AT32F423RBT7_7) || defined (AT32F423RCT7_7) || \
    defined (AT32F423R8T7)   || defined (AT32F423RBT7)   || defined (AT32F423RCT7)

    #define AT32F423Rx
#endif

#if defined (AT32F423V8T7)   || defined (AT32F423VBT7)   || defined (AT32F423VCT7)

    #define AT32F423Vx
#endif

/**
  * define with memory density
  */
#if defined (AT32F423K8U7_4) || defined (AT32F423T8U7)   || defined (AT32F423C8U7)   || \
    defined (AT32F423C8T7)   || defined (AT32F423R8T7_7) || defined (AT32F423R8T7)   || \
    defined (AT32F423V8T7)

    #define AT32F423x8
#endif

#if defined (AT32F423KBU7_4) || defined (AT32F423TBU7)   || defined (AT32F423CBU7)   || \
    defined (AT32F423CBT7)   || defined (AT32F423RBT7_7) || defined (AT32F423RBT7)   || \
    defined (AT32F423VBT7)   || defined (AT32F423CBU7_7)

    #define AT32F423xB
#endif

#if defined (AT32F423KCU7_4) || defined (AT32F423TCU7)   || defined (AT32F423CCU7)   || \
    defined (AT32F423CCT7)   || defined (AT32F423RCT7_7) || defined (AT32F423RCT7)   || \
    defined (AT32F423VCT7)

    #define AT32F423xC
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
  * @brief at32f423 standard peripheral library version number
  */
#define __AT32F423_LIBRARY_VERSION_MAJOR    (0x02) /*!< [31:24] major version */
#define __AT32F423_LIBRARY_VERSION_MIDDLE   (0x00) /*!< [23:16] middle version */
#define __AT32F423_LIBRARY_VERSION_MINOR    (0x02) /*!< [15:8]  minor version */
#define __AT32F423_LIBRARY_VERSION_RC       (0x00) /*!< [7:0]  release candidate */
#define __AT32F423_LIBRARY_VERSION          ((__AT32F423_LIBRARY_VERSION_MAJOR << 24)  | \
                                             (__AT32F423_LIBRARY_VERSION_MIDDLE << 16) | \
                                             (__AT32F423_LIBRARY_VERSION_MINOR << 8)   | \
                                             (__AT32F423_LIBRARY_VERSION_RC))

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
  * @brief at32f423 interrupt number definition, according to the selected device
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
    DMA1_Channel1_IRQn          = 11,     /*!< dma1 channel 1 global interrupt                      */
    DMA1_Channel2_IRQn          = 12,     /*!< dma1 channel 2 global interrupt                      */
    DMA1_Channel3_IRQn          = 13,     /*!< dma1 channel 3 global interrupt                      */
    DMA1_Channel4_IRQn          = 14,     /*!< dma1 channel 4 global interrupt                      */
    DMA1_Channel5_IRQn          = 15,     /*!< dma1 channel 5 global interrupt                      */
    DMA1_Channel6_IRQn          = 16,     /*!< dma1 channel 6 global interrupt                      */
    DMA1_Channel7_IRQn          = 17,     /*!< dma1 channel 7 global interrupt                      */

    ADC1_IRQn                   = 18,     /*!< adc1 global interrupt                                */
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
    SPI2_IRQn                   = 36,     /*!< spi2 global interrupt                                */
    USART1_IRQn                 = 37,     /*!< usart1 global interrupt                              */
    USART2_IRQn                 = 38,     /*!< usart2 global interrupt                              */
    USART3_IRQn                 = 39,     /*!< usart3 global interrupt                              */
    EXINT15_10_IRQn             = 40,     /*!< external line[15:10] interrupts                      */
    ERTCAlarm_IRQn              = 41,     /*!< ertc alarm through exint line interrupt              */
    OTGFS1_WKUP_IRQn            = 42,     /*!< otgfs1 wakeup from suspend through exint line interrupt */
    TMR12_GLOBAL_IRQn           = 43,     /*!< tmr12 global interrupt                               */
    TMR13_GLOBAL_IRQn           = 44,     /*!< tmr13 global interrupt                               */
    TMR14_GLOBAL_IRQn           = 45,     /*!< tmr14 global interrupt                               */
    SPI3_IRQn                   = 51,     /*!< spi3 global interrupt                                */
    USART4_IRQn                 = 52,     /*!< usart4 global interrupt                              */
    USART5_IRQn                 = 53,     /*!< usart5 global interrupt                              */
    TMR6_DAC_GLOBAL_IRQn        = 54,     /*!< tmr6 and dac global interrupt                        */
    TMR7_GLOBAL_IRQn            = 55,     /*!< tmr7 global interrupt                                */
    DMA2_Channel1_IRQn          = 56,     /*!< dma2 channel 1 global interrupt                      */
    DMA2_Channel2_IRQn          = 57,     /*!< dma2 channel 2 global interrupt                      */
    DMA2_Channel3_IRQn          = 58,     /*!< dma2 channel 3 global interrupt                      */
    DMA2_Channel4_IRQn          = 59,     /*!< dma2 channel 4 global interrupt                      */
    DMA2_Channel5_IRQn          = 60,     /*!< dma2 channel 5 global interrupt                      */
    CAN2_TX_IRQn                = 63,     /*!< can2 tx interrupt                                    */
    CAN2_RX0_IRQn               = 64,     /*!< can2 rx0 interrupt                                   */
    CAN2_RX1_IRQn               = 65,     /*!< can2 rx1 interrupt                                   */
    CAN2_SE_IRQn                = 66,     /*!< can2 se interrupt                                    */
    OTGFS1_IRQn                 = 67,     /*!< otgfs1 interrupt                                     */
    DMA2_Channel6_IRQn          = 68,     /*!< dma2 channel 6 global interrupt                      */
    DMA2_Channel7_IRQn          = 69,     /*!< dma2 channel 7 global interrupt                      */
    USART6_IRQn                 = 71,     /*!< usart6 interrupt                                     */
    I2C3_EVT_IRQn               = 72,     /*!< i2c3 event interrupt                                 */
    I2C3_ERR_IRQn               = 73,     /*!< i2c3 error interrupt                                 */
    FPU_IRQn                    = 81,     /*!< fpu interrupt                                        */
    USART7_IRQn                 = 82,     /*!< usart7 interrupt                                     */
    USART8_IRQn                 = 83,     /*!< usart8 interrupt                                     */
    DMAMUX_IRQn                 = 94,     /*!< dmamux global interrupt                              */
    ACC_IRQn                    = 103,    /*!< acc interrupt                                        */

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
#define CRM_AHBRST1_CRCRST               (0x1U << 12)
#define CRM_AHBRST1_DMA1RST              (0x1U << 22)
#define CRM_AHBRST1_DMA2RST              (0x1U << 24)

/*****************  Bit definition for CRM_AHBRST2 register  ***************/
#define CRM_AHBRST2_OTGFS1RST            (0x1U << 7)

/*****************  Bit definition for CRM_AHBRST3 register  ***************/
#define CRM_AHBRST3_XMCRST               (0x1U << 0)

/*****************  Bit definition for CRM_APB1RST register  ***************/
#define CRM_APB1RST_TMR2RST              (0x1U << 0)
#define CRM_APB1RST_TMR3RST              (0x1U << 1)
#define CRM_APB1RST_TMR4RST              (0x1U << 2)
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
#define CRM_APB1RST_USART4RST            (0x1U << 19)
#define CRM_APB1RST_USART5RST            (0x1U << 20)
#define CRM_APB1RST_I2C1RST              (0x1U << 21)
#define CRM_APB1RST_I2C2RST              (0x1U << 22)
#define CRM_APB1RST_I2C3RST              (0x1U << 23)
#define CRM_APB1RST_CAN1RST              (0x1U << 25)
#define CRM_APB1RST_CAN2RST              (0x1U << 26)
#define CRM_APB1RST_PWCRST               (0x1U << 28)
#define CRM_APB1RST_DACRST               (0x1U << 29)
#define CRM_APB1RST_USART7RST            (0x1U << 30)
#define CRM_APB1RST_USART8RST            (0x1U << 31)

/*****************  Bit definition for CRM_APB2RST register  ***************/
#define CRM_APB2RST_TMR1RST              (0x1U << 0)
#define CRM_APB2RST_USART1RST            (0x1U << 4)
#define CRM_APB2RST_USART6RST            (0x1U << 5)
#define CRM_APB2RST_ADC1RST              (0x1U << 8)
#define CRM_APB2RST_SPI1RST              (0x1U << 12)
#define CRM_APB2RST_SCFGRST              (0x1U << 14)
#define CRM_APB2RST_TMR9RST              (0x1U << 16)
#define CRM_APB2RST_TMR10RST             (0x1U << 17)
#define CRM_APB2RST_TMR11RST             (0x1U << 18)
#define CRM_APB2RST_ACCRST               (0x1U << 29)

/*****************  Bit definition for CRM_AHBEN1 register  ***************/
#define CRM_AHBEN1_GPIOAEN               (0x1U << 0)
#define CRM_AHBEN1_GPIOBEN               (0x1U << 1)
#define CRM_AHBEN1_GPIOCEN               (0x1U << 2)
#define CRM_AHBEN1_GPIODEN               (0x1U << 3)
#define CRM_AHBEN1_GPIOEEN               (0x1U << 4)
#define CRM_AHBEN1_GPIOFEN               (0x1U << 5)
#define CRM_AHBEN1_CRCEN                 (0x1U << 12)
#define CRM_AHBEN1_DMA1EN                (0x1U << 22)
#define CRM_AHBEN1_DMA2EN                (0x1U << 24)

/*****************  Bit definition for CRM_AHBEN2 register  ***************/
#define CRM_AHBEN2_OTGFS1EN              (0x1U << 7)

/*****************  Bit definition for CRM_AHBEN3 register  ***************/
#define CRM_AHBEN3_XMCEN                 (0x1U << 0)

/*****************  Bit definition for CRM_APB1EN register  ***************/
#define CRM_APB1EN_TMR2EN                (0x1U << 0)
#define CRM_APB1EN_TMR3EN                (0x1U << 1)
#define CRM_APB1EN_TMR4EN                (0x1U << 2)
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
#define CRM_APB1EN_USART4EN              (0x1U << 19)
#define CRM_APB1EN_USART5EN              (0x1U << 20)
#define CRM_APB1EN_I2C1EN                (0x1U << 21)
#define CRM_APB1EN_I2C2EN                (0x1U << 22)
#define CRM_APB1EN_I2C3EN                (0x1U << 23)
#define CRM_APB1EN_CAN1EN                (0x1U << 25)
#define CRM_APB1EN_CAN2EN                (0x1U << 26)
#define CRM_APB1EN_PWCEN                 (0x1U << 28)
#define CRM_APB1EN_DACEN                 (0x1U << 29)
#define CRM_APB1EN_USART7EN              (0x1U << 30)
#define CRM_APB1EN_USART8EN              (0x1U << 31)

/*****************  Bit definition for CRM_APB2EN register  ***************/
#define CRM_APB2EN_TMR1EN                (0x1U << 0)
#define CRM_APB2EN_USART1EN              (0x1U << 4)
#define CRM_APB2EN_USART6EN              (0x1U << 5)
#define CRM_APB2EN_ADC1EN                (0x1U << 8)
#define CRM_APB2EN_SPI1EN                (0x1U << 12)
#define CRM_APB2EN_SCFGEN                (0x1U << 14)
#define CRM_APB2EN_TMR9EN                (0x1U << 16)
#define CRM_APB2EN_TMR10EN               (0x1U << 17)
#define CRM_APB2EN_TMR11EN               (0x1U << 18)
#define CRM_APB2EN_ACCEN                 (0x1U << 29)

/*****************  Bit definition for CRM_AHBLPEN1 register  ***************/
#define CRM_AHBLPEN1_GPIOALPEN           (0x1U << 0)
#define CRM_AHBLPEN1_GPIOBLPEN           (0x1U << 1)
#define CRM_AHBLPEN1_GPIOCLPEN           (0x1U << 2)
#define CRM_AHBLPEN1_GPIODLPEN           (0x1U << 3)
#define CRM_AHBLPEN1_GPIOELPEN           (0x1U << 4)
#define CRM_AHBLPEN1_GPIOFLPEN           (0x1U << 5)
#define CRM_AHBLPEN1_CRCLPEN             (0x1U << 12)
#define CRM_AHBLPEN1_DMA1LPEN            (0x1U << 22)
#define CRM_AHBLPEN1_DMA2LPEN            (0x1U << 24)

/*****************  Bit definition for CRM_AHBLPEN2 register  ***************/
#define CRM_AHBLPEN2_OTGFS1LPEN          (0x1U << 7)

/*****************  Bit definition for CRM_AHBLPEN3 register  ***************/
#define CRM_AHBLPEN3_XMCLPEN             (0x1U << 0)

/*****************  Bit definition for CRM_APB1LPEN register  ***************/
#define CRM_APB1LPEN_TMR2LPEN            (0x1U << 0)
#define CRM_APB1LPEN_TMR3LPEN            (0x1U << 1)
#define CRM_APB1LPEN_TMR4LPEN            (0x1U << 2)
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
#define CRM_APB1LPEN_USART4LPEN          (0x1U << 19)
#define CRM_APB1LPEN_USART5LPEN          (0x1U << 20)
#define CRM_APB1LPEN_I2C1LPEN            (0x1U << 21)
#define CRM_APB1LPEN_I2C2LPEN            (0x1U << 22)
#define CRM_APB1LPEN_I2C3LPEN            (0x1U << 23)
#define CRM_APB1LPEN_CAN1LPEN            (0x1U << 25)
#define CRM_APB1LPEN_CAN2LPEN            (0x1U << 26)
#define CRM_APB1LPEN_PWCLPEN             (0x1U << 28)
#define CRM_APB1LPEN_DACLPEN             (0x1U << 29)
#define CRM_APB1LPEN_USART7LPEN          (0x1U << 30)
#define CRM_APB1LPEN_USART8LPEN          (0x1U << 31)

/*****************  Bit definition for CRM_APB2LPEN register  ***************/
#define CRM_APB2LPEN_TMR1LPEN            (0x1U << 0)
#define CRM_APB2LPEN_USART1LPEN          (0x1U << 4)
#define CRM_APB2LPEN_USART6LPEN          (0x1U << 5)
#define CRM_APB2LPEN_ADC1LPEN            (0x1U << 8)
#define CRM_APB2LPEN_SPI1LPEN            (0x1U << 12)
#define CRM_APB2LPEN_SCFGLPEN            (0x1U << 14)
#define CRM_APB2LPEN_TMR9LPEN            (0x1U << 16)
#define CRM_APB2LPEN_TMR10LPEN           (0x1U << 17)
#define CRM_APB2LPEN_TMR11LPEN           (0x1U << 18)
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
#define CRM_MISC1_PLLCLK_TO_ADC          (0x1U << 15)

/******************  Bit definition for CRM_MISC2 register  ****************/
#define CRM_MISC2_AUTO_STEP_EN           (0x3U << 4)

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
#define USART_STS_RTODF                  (0x1U << 11)
#define USART_STS_OCCUPY                 (0x1U << 16)
#define USART_STS_CMDF                   (0x1U << 17)
#define USART_STS_LPWUF                  (0x1U << 20)
#define USART_STS_TXON                   (0x1U << 21)
#define USART_STS_RXON                   (0x1U << 22)

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
#define USART_CTRL1_CMDIE                (0x1U << 14)
#define USART_CTRL1_RETODIE              (0x1U << 26)
#define USART_CTRL1_RTODEN               (0x1U << 27)
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
#define USART_CTRL3_SMUSEN               (0x1U << 11)
#define USART_CTRL3_LPWUFIE              (0x1U << 13)
#define USART_CTRL3_RS485EN              (0x1U << 14)
#define USART_CTRL3_DEP                  (0x1U << 15)
#define USART_CTRL3_LPWUM                (0x3U << 16)

/*******************  Bit definition for USART_IFC register  ***************/
#define USART_IFC_RTODFC                 (0x1U << 11)
#define USART_IFC_CMDFC                  (0x1U << 17)
#define USART_IFC_LPWUFC                 (0x1U << 20)

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
#define USD_BASE                         ((uint32_t)0x1FFFF800)
#define FLASH_BASE                       ((uint32_t)0x08000000)

#define DEBUG_BASE                       ((uint32_t)0xE0042000)

#define APB1PERIPH_BASE                  (PERIPH_BASE)
#define APB2PERIPH_BASE                  (PERIPH_BASE + 0x10000)
#define AHBPERIPH1_BASE                  (PERIPH_BASE + 0x20000)
#define AHBPERIPH2_BASE                  (PERIPH_BASE + 0x10000000)

/* apb1 bus base address */
#define USART8_BASE                      (APB1PERIPH_BASE + 0x7C00)
#define USART7_BASE                      (APB1PERIPH_BASE + 0x7800)
#define DAC_BASE                         (APB1PERIPH_BASE + 0x7400)
#define PWC_BASE                         (APB1PERIPH_BASE + 0x7000)
#define CAN2_BASE                        (APB1PERIPH_BASE + 0x6800)
#define CAN1_BASE                        (APB1PERIPH_BASE + 0x6400)
#define I2C3_BASE                        (APB1PERIPH_BASE + 0x5C00)
#define I2C2_BASE                        (APB1PERIPH_BASE + 0x5800)
#define I2C1_BASE                        (APB1PERIPH_BASE + 0x5400)
#define USART5_BASE                      (APB1PERIPH_BASE + 0x5000)
#define USART4_BASE                      (APB1PERIPH_BASE + 0x4C00)
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
#define TMR4_BASE                        (APB1PERIPH_BASE + 0x0800)
#define TMR3_BASE                        (APB1PERIPH_BASE + 0x0400)
#define TMR2_BASE                        (APB1PERIPH_BASE + 0x0000)
/* apb2 bus base address */
#define ACC_BASE                         (APB2PERIPH_BASE + 0x7400)
#define TMR11_BASE                       (APB2PERIPH_BASE + 0x4800)
#define TMR10_BASE                       (APB2PERIPH_BASE + 0x4400)
#define TMR9_BASE                        (APB2PERIPH_BASE + 0x4000)
#define EXINT_BASE                       (APB2PERIPH_BASE + 0x3C00)
#define SCFG_BASE                        (APB2PERIPH_BASE + 0x3800)
#define SPI1_BASE                        (APB2PERIPH_BASE + 0x3000)
#define ADC1_BASE                        (APB2PERIPH_BASE + 0x2000)
#define ADCCOM_BASE                      (APB2PERIPH_BASE + 0x2300)
#define USART6_BASE                      (APB2PERIPH_BASE + 0x1400)
#define USART1_BASE                      (APB2PERIPH_BASE + 0x1000)
#define TMR1_BASE                        (APB2PERIPH_BASE + 0x0000)
/* ahb bus base address */
#define GPIOF_BASE                       (AHBPERIPH1_BASE + 0x1400)
#define GPIOE_BASE                       (AHBPERIPH1_BASE + 0x1000)
#define GPIOD_BASE                       (AHBPERIPH1_BASE + 0x0C00)
#define GPIOC_BASE                       (AHBPERIPH1_BASE + 0x0800)
#define GPIOB_BASE                       (AHBPERIPH1_BASE + 0x0400)
#define GPIOA_BASE                       (AHBPERIPH1_BASE + 0x0000)

#define DMA1_BASE                        (AHBPERIPH1_BASE + 0x6000)
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

#define DMA2_BASE                        (AHBPERIPH1_BASE + 0x6400)
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

#define FLASH_REG_BASE                   (AHBPERIPH1_BASE + 0x3C00)
#define CRM_BASE                         (AHBPERIPH1_BASE + 0x3800)
#define CRC_BASE                         (AHBPERIPH1_BASE + 0x3000)
#define OTGFS1_BASE                      (AHBPERIPH2_BASE + 0x00000)

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
    * @brief crm piclks register, offset:0x68
    */
  __IO uint32_t PICLKS;

  /**
    * @brief crm reserved6 register, offset:0x6C
    */
  __IO uint32_t RESERVED6;

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
  __IO uint32_t EPPS;

  /**
    * @brief flash reserved2 register, offset:0x70~0x24
    */
  __IO uint32_t RESERVED2[20];

  /**
    * @brief flash slib_sts0 register, offset:0x74
    */
  __IO uint32_t SLIB_STS0;

  /**
    * @brief flash slib_sts1 register, offset:0x78
    */
  __IO uint32_t SLIB_STS1;

  /**
    * @brief flash slib_pwd_clr register, offset:0x7C
    */
  __IO uint32_t SLIB_PWD_CLR;

  /**
    * @brief flash slib_misc_sts register, offset:0x80
    */
  __IO uint32_t SLIB_MISC_STS;

  /**
    * @brief flash crc_addr register, offset:0x84
    */
  __IO uint32_t CRC_ADDR;

  /**
    * @brief flash crc_ctrl register, offset:0x88
    */
  __IO uint32_t CRC_CTRL;

  /**
    * @brief flash crc_chkr register, offset:0x8C
    */
  __IO uint32_t CRC_CHKR;

  /**
    * @brief flash reserved3 register, offset:0x15C~0x90
    */
  __IO uint32_t RESERVED3[52];

  /**
    * @brief flash slib_set_pwd register, offset:0x160
    */
  __IO uint32_t SLIB_SET_PWD;

  /**
    * @brief flash slib_set_range register, offset:0x164
    */
  __IO uint32_t SLIB_SET_RANGE;

  /**
    * @brief flash em_slib_set register, offset:0x168
    */
  __IO uint32_t EM_SLIB_SET;

  /**
    * @brief flash btm_mode_set register, offset:0x16C
    */
  __IO uint32_t BTM_MODE_SET;

  /**
    * @brief flash slib_unlock register, offset:0x170
    */
  __IO uint32_t SLIB_UNLOCK;

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
    * @brief gpio togr register, offset:0x2C
    */
  __IO uint32_t TOGR;

  /**
    * @brief gpio reserved1 register, offset:0x30~0x38
    */
  __IO uint32_t RESERVED1[3];

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
    * @brief adc spt3 register, offset:0x50
    */
  __IO uint32_t SPT3;

  /**
    * @brief adc osq4 register, offset:0x54
    */
  __IO uint32_t OSQ4;

  /**
    * @brief adc osq5 register, offset:0x58
    */
  __IO uint32_t OSQ5;

  /**
    * @brief adc osq6 register, offset:0x5C
    */
  __IO uint32_t OSQ6;

  /**
    * @brief adc reserved1 register, offset:0x5C~0x7C
    */
  __IO uint32_t RESERVED1[8];

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

  /**
    * @brief adc reserved3 register, offset:0xB8~0xCC
    */
  __IO uint32_t RESERVED3[6];

  /**
  * @brief adc misc register, offset:0xD0
  */
  __IO uint32_t MISC;

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

  /**
    * @brief usart rtov register, offset:0x1C
    */
  __IO uint32_t RTOV;

  /**
    * @brief usart ifc register, offset:0x20
    */
  __IO uint32_t IFC;

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
#define SCFG                              ((SCFG_TypeDef *) SCFG_BASE)
#define TMR1                              ((TMR_TypeDef *) TMR1_BASE)
#define TMR2                              ((TMR_TypeDef *) TMR2_BASE)
#define TMR3                              ((TMR_TypeDef *) TMR3_BASE)
#define TMR4                              ((TMR_TypeDef *) TMR4_BASE)
#define TMR6                              ((TMR_TypeDef *) TMR6_BASE)
#define TMR7                              ((TMR_TypeDef *) TMR7_BASE)
#define TMR9                              ((TMR_TypeDef *) TMR9_BASE)
#define TMR10                             ((TMR_TypeDef *) TMR10_BASE)
#define TMR11                             ((TMR_TypeDef *) TMR11_BASE)
#define TMR12                             ((TMR_TypeDef *) TMR12_BASE)
#define TMR13                             ((TMR_TypeDef *) TMR13_BASE)
#define TMR14                             ((TMR_TypeDef *) TMR14_BASE)
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
#define ADC1                              ((ADC_TypeDef *) ADC1_BASE)
#define ADCCOM                            ((ADCCOM_TypeDef *) ADCCOM_BASE)
#define I2C1                              ((I2C_TypeDef *) I2C1_BASE)
#define I2C2                              ((I2C_TypeDef *) I2C2_BASE)
#define I2C3                              ((I2C_TypeDef *) I2C3_BASE)
#define USART1                            ((USART_TypeDef *) USART1_BASE)
#define USART2                            ((USART_TypeDef *) USART2_BASE)
#define USART3                            ((USART_TypeDef *) USART3_BASE)
#define UART4                             ((USART_TypeDef *) USART4_BASE)
#define UART5                             ((USART_TypeDef *) USART5_BASE)
#define USART6                            ((USART_TypeDef *) USART6_BASE)
#define UART7                             ((USART_TypeDef *) USART7_BASE)
#define UART8                             ((USART_TypeDef *) USART8_BASE)
#define SPI1                              ((SPI_TypeDef *) SPI1_BASE)
#define SPI2                              ((SPI_TypeDef *) SPI2_BASE)
#define SPI3                              ((SPI_TypeDef *) SPI3_BASE)

/**
  * @}
  */

/** @defgroup FLASH_unlock_keys
  * @brief flash unlock keys
  * @{
  */

#define FLASH_UNLOCK_KEY1                ((uint32_t)0x45670123)  /*!< flash operation unlock order key1 */
#define FLASH_UNLOCK_KEY2                ((uint32_t)0xCDEF89AB)  /*!< flash operation unlock order key2 */
#define FAP_RELIEVE_KEY                  ((uint16_t)0x00A5)      /*!< flash fap relieve key val */
#define FAP_HIGH_LEVEL_KEY               ((uint16_t)0x00CC)      /*!< flash fap high level enable key val */
#define SLIB_UNLOCK_KEY                  ((uint32_t)0xA35F6D24)  /*!< flash slib operation unlock order key */

#define FLASHSIZE_BASE                   ((uint32_t)0x1FFFF7E0U) /*!< FLASH Size register base address */
#define UID_BASE                         ((uint32_t)0x1FFFF7E8U) /*!< Unique device ID register base address */

/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif
