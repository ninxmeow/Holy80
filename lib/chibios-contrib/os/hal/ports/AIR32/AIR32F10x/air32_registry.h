/*
    ChibiOS - Copyright (C) 2006..2018 Giovanni Di Sirio

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

/**
 * @file    AIR32F10x/air32_registry.h
 * @brief   AIR32F10x capabilities registry.
 *
 * @addtogroup HAL
 * @{
 */

#ifndef AIR32_REGISTRY_H
#define AIR32_REGISTRY_H

#if !defined(AIR32F10x)
#error "unsupported or unrecognized AIR32F10x member"
#endif

/*===========================================================================*/
/* Platform capabilities.                                                    */
/*===========================================================================*/
#if defined(AIR32F103xB) || defined(AIR32F103xC) || defined(__DOXYGEN__)
/**
 * @name    AIR32F10x capabilities
 * @{
 */
/* ADC attributes.*/
#define AIR32_HAS_ADC1                      TRUE
#define AIR32_HAS_ADC2                      TRUE
#define AIR32_HAS_ADC3                      FALSE

#define AIR32_HAS_SDADC1                    FALSE
#define AIR32_HAS_SDADC2                    FALSE
#define AIR32_HAS_SDADC3                    FALSE

/* CAN attributes.*/
#define AIR32_HAS_CAN1                      TRUE
#define AIR32_CAN_MAX_FILTERS               14

/* DAC attributes.*/
#define AIR32_HAS_DAC1_CH1                  TRUE
#define AIR32_DAC_DAC1_CH1_DMA_STREAM       AIR32_DMA_STREAM_ID(2, 3)

#define AIR32_HAS_DAC1_CH2                  TRUE
#define AIR32_DAC_DAC1_CH2_DMA_STREAM       AIR32_DMA_STREAM_ID(2, 4)

#define AIR32_HAS_DAC2_CH1                  FALSE
#define AIR32_HAS_DAC2_CH2                  FALSE

/* DMA attributes.*/
#define AIR32_ADVANCED_DMA                  FALSE
#define AIR32_DMA_SUPPORTS_DMAMUX           FALSE
#define AIR32_DMA_SUPPORTS_CSELR            FALSE

#define AIR32_DMA1_NUM_CHANNELS             7
#define AIR32_DMA1_CH1_HANDLER              Vector6C
#define AIR32_DMA1_CH2_HANDLER              Vector70
#define AIR32_DMA1_CH3_HANDLER              Vector74
#define AIR32_DMA1_CH4_HANDLER              Vector78
#define AIR32_DMA1_CH5_HANDLER              Vector7C
#define AIR32_DMA1_CH6_HANDLER              Vector80
#define AIR32_DMA1_CH7_HANDLER              Vector84
#define AIR32_DMA1_CH1_NUMBER               11
#define AIR32_DMA1_CH2_NUMBER               12
#define AIR32_DMA1_CH3_NUMBER               13
#define AIR32_DMA1_CH4_NUMBER               14
#define AIR32_DMA1_CH5_NUMBER               15
#define AIR32_DMA1_CH6_NUMBER               16
#define AIR32_DMA1_CH7_NUMBER               17

#define AIR32_DMA2_NUM_CHANNELS             5
#define AIR32_DMA2_CH1_HANDLER              Vector120
#define AIR32_DMA2_CH2_HANDLER              Vector124
#define AIR32_DMA2_CH3_HANDLER              Vector128
#define AIR32_DMA2_CH45_HANDLER             Vector12C
#define AIR32_DMA2_CH1_NUMBER               56
#define AIR32_DMA2_CH2_NUMBER               57
#define AIR32_DMA2_CH3_NUMBER               58
#define AIR32_DMA2_CH45_NUMBER              59

#define AIR32_DMA2_CH4_NUMBER               AIR32_DMA2_CH45_NUMBER
#define AIR32_DMA2_CH5_NUMBER               AIR32_DMA2_CH45_NUMBER
#define DMA2_CH4_CMASK                      0x00000C00U
#define DMA2_CH5_CMASK                      0x00000C00U

/* ETH attributes.*/
#define AIR32_HAS_ETH                       FALSE

/* EXTI attributes.*/
#define AIR32_EXTI_NUM_LINES                19
#define AIR32_EXTI_IMR_MASK                 0x00000000U

/* Flash attributes.*/
#if defined(AIR32F103xB)
#define AIR32_FLASH_NUMBER_OF_BANKS         1
#define AIR32_FLASH_SECTOR_SIZE             1024U
#if !defined(AIR32_FLASH_SECTORS_PER_BANK) || defined(__DOXYGEN__)
#define AIR32_FLASH_SECTORS_PER_BANK        128 /* Maximum, can be redefined.*/
#endif
#elif defined(AIR32F103xC)
#define AIR32_FLASH_NUMBER_OF_BANKS         1
#define AIR32_FLASH_SECTOR_SIZE             2048U
#if !defined(AIR32_FLASH_SECTORS_PER_BANK) || defined(__DOXYGEN__)
#define AIR32_FLASH_SECTORS_PER_BANK        128 /* Maximum, can be redefined.*/
#endif
#endif

/* GPIO attributes.*/
#define AIR32_HAS_GPIOA                     TRUE
#define AIR32_HAS_GPIOB                     TRUE
#define AIR32_HAS_GPIOC                     TRUE
#define AIR32_HAS_GPIOD                     TRUE
#define AIR32_HAS_GPIOE                     FALSE
#define AIR32_HAS_GPIOF                     FALSE
#define AIR32_HAS_GPIOG                     FALSE
#define AIR32_HAS_GPIOH                     FALSE
#define AIR32_HAS_GPIOI                     FALSE
#define AIR32_HAS_GPIOJ                     FALSE
#define AIR32_HAS_GPIOK                     FALSE

/* I2C attributes.*/
#define AIR32_HAS_I2C1                      TRUE
#define AIR32_I2C_I2C1_RX_DMA_STREAM        AIR32_DMA_STREAM_ID(1, 7)
#define AIR32_I2C_I2C1_TX_DMA_STREAM        AIR32_DMA_STREAM_ID(1, 6)

#define AIR32_HAS_I2C2                      TRUE
#define AIR32_I2C_I2C2_RX_DMA_STREAM        AIR32_DMA_STREAM_ID(1, 5)
#define AIR32_I2C_I2C2_TX_DMA_STREAM        AIR32_DMA_STREAM_ID(1, 4)
#define AIR32_HAS_I2C3                      FALSE
#define AIR32_HAS_I2C4                      FALSE

/* QUADSPI attributes.*/
#define AIR32_HAS_QUADSPI1                  FALSE

/* RTC attributes.*/
#define AIR32_HAS_RTC                       TRUE
#define AIR32_RTC_HAS_SUBSECONDS            TRUE
#define AIR32_RTC_IS_CALENDAR               FALSE

/* SDIO attributes.*/
#define AIR32_HAS_SDIO                      TRUE
#define AIR32_SDC_SDIO_DMA_STREAM           AIR32_DMA_STREAM_ID(2, 4)

/* SPI attributes.*/
#define AIR32_HAS_SPI1                      TRUE
#define AIR32_SPI1_SUPPORTS_I2S             FALSE
#define AIR32_SPI_SPI1_RX_DMA_STREAM        AIR32_DMA_STREAM_ID(1, 2)
#define AIR32_SPI_SPI1_TX_DMA_STREAM        AIR32_DMA_STREAM_ID(1, 3)

#define AIR32_HAS_SPI2                      TRUE
#define AIR32_SPI2_SUPPORTS_I2S             FALSE
#define AIR32_SPI_SPI2_RX_DMA_STREAM        AIR32_DMA_STREAM_ID(1, 4)
#define AIR32_SPI_SPI2_TX_DMA_STREAM        AIR32_DMA_STREAM_ID(1, 5)

#define AIR32_HAS_SPI3                      TRUE
#define AIR32_SPI3_SUPPORTS_I2S             FALSE
#define AIR32_SPI_SPI3_RX_DMA_STREAM        AIR32_DMA_STREAM_ID(2, 1)
#define AIR32_SPI_SPI3_TX_DMA_STREAM        AIR32_DMA_STREAM_ID(2, 2)

#define AIR32_HAS_SPI4                      FALSE
#define AIR32_HAS_SPI5                      FALSE
#define AIR32_HAS_SPI6                      FALSE

/* TIM attributes.*/
#define AIR32_TIM_MAX_CHANNELS              6

#define AIR32_HAS_TIM1                      TRUE
#define AIR32_TIM1_IS_32BITS                FALSE
#define AIR32_TIM1_CHANNELS                 6

#define AIR32_HAS_TIM2                      TRUE
#define AIR32_TIM2_IS_32BITS                FALSE
#define AIR32_TIM2_CHANNELS                 4

#define AIR32_HAS_TIM3                      TRUE
#define AIR32_TIM3_IS_32BITS                FALSE
#define AIR32_TIM3_CHANNELS                 4

#define AIR32_HAS_TIM4                      TRUE
#define AIR32_TIM4_IS_32BITS                FALSE
#define AIR32_TIM4_CHANNELS                 4

#define AIR32_HAS_TIM5                      TRUE
#define AIR32_TIM5_IS_32BITS                FALSE
#define AIR32_TIM5_CHANNELS                 4

#define AIR32_HAS_TIM6                      TRUE
#define AIR32_TIM6_IS_32BITS                FALSE
#define AIR32_TIM6_CHANNELS                 0

#define AIR32_HAS_TIM7                      TRUE
#define AIR32_TIM7_IS_32BITS                FALSE
#define AIR32_TIM7_CHANNELS                 0

#define AIR32_HAS_TIM8                      FALSE
#define AIR32_HAS_TIM9                      FALSE
#define AIR32_HAS_TIM10                     FALSE
#define AIR32_HAS_TIM11                     FALSE
#define AIR32_HAS_TIM12                     FALSE
#define AIR32_HAS_TIM13                     FALSE
#define AIR32_HAS_TIM14                     FALSE

/* USART attributes.*/
#define AIR32_HAS_USART1                    TRUE
#define AIR32_UART_USART1_RX_DMA_STREAM     AIR32_DMA_STREAM_ID(1, 5)
#define AIR32_UART_USART1_TX_DMA_STREAM     AIR32_DMA_STREAM_ID(1, 4)

#define AIR32_HAS_USART2                    TRUE
#define AIR32_UART_USART2_RX_DMA_STREAM     AIR32_DMA_STREAM_ID(1, 6)
#define AIR32_UART_USART2_TX_DMA_STREAM     AIR32_DMA_STREAM_ID(1, 7)

#define AIR32_HAS_USART3                    TRUE
#define AIR32_UART_USART3_RX_DMA_STREAM     AIR32_DMA_STREAM_ID(1, 3)
#define AIR32_UART_USART3_TX_DMA_STREAM     AIR32_DMA_STREAM_ID(1, 2)

#define AIR32_HAS_UART4                     FALSE
#define AIR32_HAS_UART5                     FALSE
#define AIR32_HAS_USART6                    FALSE
#define AIR32_HAS_UART7                     FALSE
#define AIR32_HAS_UART8                     FALSE
#define AIR32_HAS_UART9                     FALSE
#define AIR32_HAS_UART10                    FALSE
#define AIR32_HAS_LPUART1                   FALSE

/* USB attributes.*/
#define AIR32_HAS_USB                       TRUE
#define AIR32_USB_ACCESS_SCHEME_2x16        FALSE
#define AIR32_USB_PMA_SIZE                  512
#define AIR32_USB_HAS_BCDR                  FALSE
#define AIR32_HAS_OTG1                      FALSE
#define AIR32_HAS_OTG2                      FALSE

/* IWDG attributes.*/
#define AIR32_HAS_IWDG                      TRUE
#define AIR32_IWDG_IS_WINDOWED              FALSE

/* LTDC attributes.*/
#define AIR32_HAS_LTDC                      FALSE

/* DMA2D attributes.*/
#define AIR32_HAS_DMA2D                     FALSE

/* FSMC attributes.*/
#define AIR32_HAS_FSMC                      FALSE

/* CRC attributes.*/
#define AIR32_HAS_CRC                       TRUE
#define AIR32_CRC_PROGRAMMABLE              FALSE
/** @} */
#endif /* defined(AIR32F103xB) || defined(AIR32F103xC) */

#endif /* AIR32_REGISTRY_H */

/** @} */
