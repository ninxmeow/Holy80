/*
    Copyright (C)

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
 * @file    AIR32F10x/hal_lld.h
 * @brief   AIR32F10x HAL subsystem low level driver header.
 * @pre     This module requires the following macros to be defined in the
 *          @p board.h file:
 *          - AIR32_LSECLK.
 *          - AIR32_LSE_BYPASS (optionally).
 *          - AIR32_HSECLK.
 *          - AIR32_HSE_BYPASS (optionally).
 *          .
 *
 * @addtogroup HAL
 * @{
 */

#ifndef HAL_LLD_H
#define HAL_LLD_H

#include "air32_registry.h"

/*===========================================================================*/
/* Driver constants.                                                         */
/*===========================================================================*/

/**
 * @name    Platform identification
 * @{
 */
#define PLATFORM_NAME                          "AIR32F10x"

/**
 * @brief   Sub-family identifier.
 */
#if !defined(AIR32F10x) || defined(__DOXYGEN__)
#define AIR32F10x
#endif
/** @} */

/**
 * @name    Absolute Maximum Ratings
 * @{
 */
/**
 * @brief   Maximum system clock frequency.
 */
#define AIR32_SYSCLK_MAX                        216000000
/**
 * @brief   Maximum HSE clock frequency.
 */
#define AIR32_HSECLK_MAX                        32000000

/**
 * @brief   Minimum HSE clock frequency.
 */
#define AIR32_HSECLK_MIN                        4000000

/**
 * @brief   Maximum LSE clock frequency.
 */
#define AIR32_LSECLK_MAX                        1000000

/**
 * @brief   Minimum LSE clock frequency.
 */
#define AIR32_LSECLK_MIN                        32768

/**
 * @brief   Maximum PLLs input clock frequency.
 */
#define AIR32_PLLIN_MAX                         32000000

/**
 * @brief   Minimum PLLs input clock frequency.
 */
#define AIR32_PLLIN_MIN                         2000000

/**
 * @brief   Maximum PLL output clock frequency.
 */
#define AIR32_PLLOUT_MAX                        216000000

/**
 * @brief   Minimum PLL output clock frequency.
 */
#define AIR32_PLLOUT_MIN                        16000000

/**
 * @brief   Maximum APB1 clock frequency.
 */
#define AIR32_PCLK1_MAX                         108000000

/**
 * @brief   Maximum APB2 clock frequency.
 */
#define AIR32_PCLK2_MAX                         216000000

/**
 * @brief   Maximum ADC clock frequency.
 */
#define AIR32_ADCCLK_MAX                        14000000
/** @} */

#define AIR32_HSICLK            8000000     /**< High speed internal clock. */
#define AIR32_LSICLK            40000       /**< Low speed internal clock.  */

/**
 * @name    PWR_CR2 register bits definitions
 * @{
 */
#define AIR32_PLS_MASK          (7 << 1)    /**< PLS bits mask.             */
#define AIR32_PLS_LEV0          (0 << 1)    /**< PVD level 0.               */
#define AIR32_PLS_LEV1          (1 << 1)    /**< PVD level 1.               */
#define AIR32_PLS_LEV2          (2 << 1)    /**< PVD level 2.               */
#define AIR32_PLS_LEV3          (3 << 1)    /**< PVD level 3.               */
#define AIR32_PLS_LEV4          (4 << 1)    /**< PVD level 4.               */
#define AIR32_PLS_LEV5          (5 << 1)    /**< PVD level 5.               */
#define AIR32_PLS_LEV6          (6 << 1)    /**< PVD level 6.               */
#define AIR32_PLS_LEV7          (7 << 1)    /**< PVD level 7.               */

/**
 * @name    RCC_CFGR register bits definitions
 * @{
 */
#define AIR32_SW_HSI            (0 << 0)    /**< SYSCLK source is HSI.      */
#define AIR32_SW_HSE            (1 << 0)    /**< SYSCLK source is HSE.      */
#define AIR32_SW_PLL            (2 << 0)    /**< SYSCLK source is PLL.      */

#define AIR32_SWS_HSI           (0 << 2)    /**< SYSCLK use HSI.            */
#define AIR32_SWS_HSE           (1 << 2)    /**< SYSCLK use HSE.            */
#define AIR32_SWS_PLL           (2 << 2)    /**< SYSCLK use PLL.            */

#define AIR32_HPRE_DIV1         (0 << 4)    /**< SYSCLK divided by 1.       */
#define AIR32_HPRE_DIV2         (8 << 4)    /**< SYSCLK divided by 2.       */
#define AIR32_HPRE_DIV4         (9 << 4)    /**< SYSCLK divided by 4.       */
#define AIR32_HPRE_DIV8         (10 << 4)   /**< SYSCLK divided by 8.       */
#define AIR32_HPRE_DIV16        (11 << 4)   /**< SYSCLK divided by 16.      */
#define AIR32_HPRE_DIV64        (12 << 4)   /**< SYSCLK divided by 64.      */
#define AIR32_HPRE_DIV128       (13 << 4)   /**< SYSCLK divided by 128.     */
#define AIR32_HPRE_DIV256       (14 << 4)   /**< SYSCLK divided by 256.     */
#define AIR32_HPRE_DIV512       (15 << 4)   /**< SYSCLK divided by 512.     */

#define AIR32_PPRE1_DIV1        (0 << 8)    /**< HCLK divided by 1.         */
#define AIR32_PPRE1_DIV2        (4 << 8)    /**< HCLK divided by 2.         */
#define AIR32_PPRE1_DIV4        (5 << 8)    /**< HCLK divided by 4.         */
#define AIR32_PPRE1_DIV8        (6 << 8)    /**< HCLK divided by 8.         */
#define AIR32_PPRE1_DIV16       (7 << 8)    /**< HCLK divided by 16.        */

#define AIR32_PPRE2_DIV1        (0 << 11)   /**< HCLK divided by 1.         */
#define AIR32_PPRE2_DIV2        (4 << 11)   /**< HCLK divided by 2.         */
#define AIR32_PPRE2_DIV4        (5 << 11)   /**< HCLK divided by 4.         */
#define AIR32_PPRE2_DIV8        (6 << 11)   /**< HCLK divided by 8.         */
#define AIR32_PPRE2_DIV16       (7 << 11)   /**< HCLK divided by 16.        */

#define AIR32_ADCPRE_DIV2       (0 << 14)   /**< PPRE2 divided by 2.        */
#define AIR32_ADCPRE_DIV4       (1 << 14)   /**< PPRE2 divided by 4.        */
#define AIR32_ADCPRE_DIV6       (2 << 14)   /**< PPRE2 divided by 6.        */
#define AIR32_ADCPRE_DIV8       (3 << 14)   /**< PPRE2 divided by 8.        */
#define AIR32_ADCPRE_DIV16      (1 << 29)   /**< PPRE2 divided by 16.       */
#define AIR32_ADCPRE_DIV32      ((1 << 29) | (1 << 14)) /**< PPRE2 divided by 32.       */
#define AIR32_ADCPRE_DIV36      ((1 << 29) | (2 << 14)) /**< PPRE2 divided by 36.       */
#define AIR32_ADCPRE_DIV48      ((1 << 29) | (3 << 14)) /**< PPRE2 divided by 48.       */
#define AIR32_ADCPRE_DIV64      (2 << 29)               /**< PPRE2 divided by 64.       */
#define AIR32_ADCPRE_DIV72      ((2 << 29) | (1 << 14)) /**< PPRE2 divided by 72.       */
#define AIR32_ADCPRE_DIV96      ((2 << 29) | (2 << 14)) /**< PPRE2 divided by 96.       */
#define AIR32_ADCPRE_DIV120     ((2 << 29) | (3 << 14)) /**< PPRE2 divided by 120.      */    
#define AIR32_ADCPRE_DIV144     (3 << 29)               /**< PPRE2 divided by 144.      */
#define AIR32_ADCPRE_DIV168     ((3 << 29) | (1 << 14)) /**< PPRE2 divided by 168.      */
#define AIR32_ADCPRE_DIV192     ((3 << 29) | (2 << 14)) /**< PPRE2 divided by 192.      */
#define AIR32_ADCPRE_DIV216     ((3 << 29) | (3 << 14)) /**< PPRE2 divided by 216.      */

#define AIR32_PLLSRC_HSI        (0 << 16)   /**< PLL clock source is HSI.   */
#define AIR32_PLLSRC_HSE        (1 << 16)   /**< PLL clock source is HSE.   */

#define AIR32_PLLXTPRE_DIV1     (0 << 17)   /**< HSE divided by 1.          */
#define AIR32_PLLXTPRE_DIV2     (1 << 17)   /**< HSE divided by 2.          */

#define AIR32_USBPRE_DIV1P5     (0 << 22)   /**< PLLOUT divided by 1.5.     */
#define AIR32_USBPRE_DIV1       (1 << 22)   /**< PLLOUT divided by 1.       */
#define AIR32_USBPRE_DIV2P5     (2 << 22)   /**< PLLOUT divided by 2.5.     */
#define AIR32_USBPRE_DIV2       (3 << 22)   /**< PLLOUT divided by 2.       */
#define AIR32_USBPRE_DIV3P5     (0x80000000U)   /**< PLLOUT divided by 3.5.     */
#define AIR32_USBPRE_DIV3       (0x80400000U)  /**< PLLOUT divided by 3.       */
#define AIR32_USBPRE_DIV4P5     (0x80800000U)  /**< PLLOUT divided by 4.5.     */
#define AIR32_USBPRE_DIV4       (0x80C00000U)  /**< PLLOUT divided by 4.       */

#define AIR32_MCOSEL_NOCLOCK    (0 << 24)   /**< No clock on MCO pin.       */
#define AIR32_MCOSEL_SYSCLK     (4 << 24)   /**< SYSCLK on MCO pin.         */
#define AIR32_MCOSEL_HSI        (5 << 24)   /**< HSI clock on MCO pin.      */
#define AIR32_MCOSEL_HSE        (6 << 24)   /**< HSE clock on MCO pin.      */
#define AIR32_MCOSEL_PLLDIV2    (7 << 24)   /**< PLL/2 clock on MCO pin.    */

#define AIR32_PLLMUL_MUL2      (0 << 18)   /**< PLL multiplier is 2.       */
#define AIR32_PLLMUL_MUL3      (1 << 18)   /**< PLL multiplier is 3.       */
#define AIR32_PLLMUL_MUL4      (2 << 18)   /**< PLL multiplier is 4.       */
#define AIR32_PLLMUL_MUL5      (3 << 18)   /**< PLL multiplier is 5.       */
#define AIR32_PLLMUL_MUL6      (4 << 18)   /**< PLL multiplier is 6.       */
#define AIR32_PLLMUL_MUL7      (5 << 18)   /**< PLL multiplier is 7.       */
#define AIR32_PLLMUL_MUL8      (6 << 18)   /**< PLL multiplier is 8.       */
#define AIR32_PLLMUL_MUL9      (7 << 18)   /**< PLL multiplier is 9.       */
#define AIR32_PLLMUL_MUL10     (8 << 18)   /**< PLL multiplier is 10.      */
#define AIR32_PLLMUL_MUL11     (9 << 18)   /**< PLL multiplier is 11.      */
#define AIR32_PLLMUL_MUL12     (10 << 18)  /**< PLL multiplier is 12.      */
#define AIR32_PLLMUL_MUL13     (11 << 18)  /**< PLL multiplier is 13.      */
#define AIR32_PLLMUL_MUL14     (12 << 18)  /**< PLL multiplier is 14.      */
#define AIR32_PLLMUL_MUL15     (13 << 18)  /**< PLL multiplier is 15.      */
#define AIR32_PLLMUL_MUL16     (14 << 18)  /**< PLL multiplier is 16.      */
#define AIR32_PLLMUL_MUL17     (1 << 28)   /**< PLL multiplier is 17.      */
#define AIR32_PLLMUL_MUL18     (0x10040000U)  /**< PLL multiplier is 18.      */
#define AIR32_PLLMUL_MUL19     ((1 << 28) | (2 << 18))  /**< PLL multiplier is 19.      */
#define AIR32_PLLMUL_MUL20     ((1 << 28) | (3 << 18))  /**< PLL multiplier is 20.      */
#define AIR32_PLLMUL_MUL21     ((1 << 28) | (4 << 18))  /**< PLL multiplier is 21.      */
#define AIR32_PLLMUL_MUL22     ((1 << 28) | (5 << 18))  /**< PLL multiplier is 22.      */
#define AIR32_PLLMUL_MUL23     ((1 << 28) | (6 << 18))  /**< PLL multiplier is 23.      */
#define AIR32_PLLMUL_MUL24     ((1 << 28) | (7 << 18))  /**< PLL multiplier is 24.      */
#define AIR32_PLLMUL_MUL25     ((1 << 28) | (8 << 18))  /**< PLL multiplier is 25.      */
#define AIR32_PLLMUL_MUL26     ((1 << 28) | (9 << 18))  /**< PLL multiplier is 26.      */
#define AIR32_PLLMUL_MUL27     ((1 << 28) | (10 << 18)) /**< PLL multiplier is 27.      */
#define AIR32_PLLMUL_MUL28     ((1 << 28) | (11 << 18)) /**< PLL multiplier is 28.      */
#define AIR32_PLLMUL_MUL29     ((1 << 28) | (12 << 18)) /**< PLL multiplier is 29.      */
#define AIR32_PLLMUL_MUL30     ((1 << 28) | (13 << 18)) /**< PLL multiplier is 30.      */
#define AIR32_PLLMUL_MUL31     ((1 << 28) | (14 << 18)) /**< PLL multiplier is 31.      */
#define AIR32_PLLMUL_MUL32     ((1 << 28) | (15 << 18)) /**< PLL multiplier is 32.      */
/** @} */

/**
 * @name    RCC_BDCR register bits definitions
 * @{
 */
#define AIR32_RTCSEL_MASK       (3 << 8)    /**< RTC clock source mask.     */
#define AIR32_RTCSEL_NOCLOCK    (0 << 8)    /**< No clock.                  */
#define AIR32_RTCSEL_LSE        (1 << 8)    /**< LSE used as RTC clock.     */
#define AIR32_RTCSEL_LSI        (2 << 8)    /**< LSI used as RTC clock.     */
#define AIR32_RTCSEL_HSEDIV     (3 << 8)    /**< HSE divided by 128 used as
                                                 RTC clock.                 */
/** @} */

/*===========================================================================*/
/* Platform capabilities.                                                    */
/*===========================================================================*/

/*===========================================================================*/
/* Driver pre-compile time settings.                                         */
/*===========================================================================*/

/**
 * @name    Configuration options
 * @{
 */
/**
 * @brief   Disables the PWR/RCC initialization in the HAL.
 */
#if !defined(AIR32_NO_INIT) || defined(__DOXYGEN__)
#define AIR32_NO_INIT                           FALSE
#endif

/**
 * @brief   Enables or disables the programmable voltage detector.
 */
#if !defined(AIR32_PVD_ENABLE) || defined(__DOXYGEN__)
#define AIR32_PVD_ENABLE                        FALSE
#endif

/**
 * @brief   Sets voltage level for programmable voltage detector.
 */
#if !defined(AIR32_PLS) || defined(__DOXYGEN__)
#define AIR32_PLS                               AIR32_PLS_LEV0
#endif

/**
 * @brief   Enables or disables the HSI clock source.
 */
#if !defined(AIR32_HSI_ENABLED) || defined(__DOXYGEN__)
#define AIR32_HSI_ENABLED                       TRUE
#endif

/**
 * @brief   Enables or disables the LSI clock source.
 */
#if !defined(AIR32_LSI_ENABLED) || defined(__DOXYGEN__)
#define AIR32_LSI_ENABLED                       FALSE
#endif

/**
 * @brief   Enables or disables the HSE clock source.
 */
#if !defined(AIR32_HSE_ENABLED) || defined(__DOXYGEN__)
#define AIR32_HSE_ENABLED                       TRUE
#endif

/**
 * @brief   Enables or disables the LSE clock source.
 */
#if !defined(AIR32_LSE_ENABLED) || defined(__DOXYGEN__)
#define AIR32_LSE_ENABLED                       FALSE
#endif
/** @} */

/**
 * @brief   Enables or disables the PLL clock source.
 */
#if !defined(AIR32_PLL_ENABLED) || defined(__DOXYGEN__)
#define AIR32_PLL_ENABLED                       TRUE
#endif

/**
 * @brief   Main clock source selection.
 * @note    If the selected clock source is not the PLL then the PLL is not
 *          initialized and started.
 * @note    The default value is calculated for a 216MHz system clock from
 *          a 8MHz crystal using the PLL.
 */
#if !defined(AIR32_SW) || defined(__DOXYGEN__)
#define AIR32_SW                               AIR32_SW_PLL
#endif

/**
 * @brief   Clock source for the PLL.
 * @note    This setting has only effect if the PLL is selected as the
 *          system clock source.
 * @note    The default value is calculated for a 216MHz system clock from
 *          a 8MHz crystal using the PLL.
 */
#if !defined(AIR32_PLLSRC) || defined(__DOXYGEN__)
#define AIR32_PLLSRC                           AIR32_PLLSRC_HSE
#endif

/**
 * @brief   Crystal PLL pre-divider.
 * @note    This setting has only effect if the PLL is selected as the
 *          system clock source.
 * @note    The default value is calculated for a 216MHz system clock from
 *          a 8MHz crystal using the PLL.
 */
#if !defined(AIR32_PLLXTPRE) || defined(__DOXYGEN__)
#define AIR32_PLLXTPRE                         AIR32_PLLXTPRE_DIV1
#endif

/**
 * @brief   PLL multiplier value.
 * @note    The allowed range is 2...32.
 * @note    The default value is calculated for a 216MHz system clock from
 *          a 8MHz crystal using the PLL.
 */
#if !defined(AIR32_PLLMUL_VALUE) || defined(__DOXYGEN__)
#define AIR32_PLLMUL_VALUE                     27
#endif

/**
 * @brief   AHB prescaler value.
 * @note    The default value is calculated for a 216MHz system clock from
 *          a 8MHz crystal using the PLL.
 */
#if !defined(AIR32_HPRE) || defined(__DOXYGEN__)
#define AIR32_HPRE                            AIR32_HPRE_DIV1
#endif

/**
 * @brief   APB1 prescaler value.
 */
#if !defined(AIR32_PPRE1) || defined(__DOXYGEN__)
#define AIR32_PPRE1                          AIR32_PPRE1_DIV2
#endif

/**
 * @brief   APB2 prescaler value.
 */
#if !defined(AIR32_PPRE2) || defined(__DOXYGEN__)
#define AIR32_PPRE2                          AIR32_PPRE2_DIV1
#endif

/**
 * @brief   ADC prescaler value.
 */
#if !defined(AIR32_ADCPRE) || defined(__DOXYGEN__)
#define AIR32_ADCPRE                AIR32_ADCPRE_DIV36
#endif

/**
 * @brief   USB clock setting.
 */
#if !defined(AIR32_USB_CLOCK_REQUIRED) || defined(__DOXYGEN__)
#define AIR32_USB_CLOCK_REQUIRED             TRUE
#endif

/**
 * @brief   USB prescaler initialization.
 */
#if !defined(AIR32_USBPRE) || defined(__DOXYGEN__)
#define AIR32_USBPRE                         AIR32_USBPRE_DIV4P5
#endif

/**
 * @brief   MCO pin setting.
 */
#if !defined(AIR32_MCOSEL) || defined(__DOXYGEN__)
#define AIR32_MCOSEL                         AIR32_MCOSEL_NOCLOCK
#endif

/**
 * @brief   RTC clock source.
 */
#if !defined(AIR32_RTCSEL) || defined(__DOXYGEN__)
#define AIR32_RTCSEL                       AIR32_RTCSEL_LSI
#endif
/** @} */

/*===========================================================================*/
/* Derived constants and error checks.                                       */
/*===========================================================================*/


/*
 * Configuration-related checks.
 */
#if !defined(AIR32F10x_MCUCONF)
#error "Using a wrong mcuconf.h file, AIR32F10x_MCUCONF not defined"
#endif

/*
 * Board files sanity checks.
 */
#if !defined(AIR32_LSECLK)
#error "AIR32_LSECLK not defined in board.h"
#endif

#if !defined(AIR32_HSECLK)
#error "AIR32_HSECLK not defined in board.h"
#endif

/*
 * HSI related checks.
 */
#if AIR32_HSI_ENABLED
#else /* !AIR32_HSI_ENABLED */

#if AIR32_SW == AIR32_SW_HSI
#error "HSI not enabled, required by AIR32_SW"
#endif

#if (AIR32_SW == AIR32_SW_PLL) && (AIR32_PLLSRC == AIR32_PLLSRC_HSI)
#error "HSI not enabled, required by AIR32_SW and AIR32_PLLSRC"
#endif

#if (AIR32_MCOSEL == AIR32_MCOSEL_HSI) ||                                   \
    ((AIR32_MCOSEL == AIR32_MCOSEL_PLLDIV2) &&                              \
     (AIR32_PLLSRC == AIR32_PLLSRC_HSI))
#error "HSI not enabled, required by AIR32_MCOSEL"
#endif

#endif /* !AIR32_HSI_ENABLED */

/*
 * HSE related checks.
 */
#if AIR32_HSE_ENABLED

#if AIR32_HSECLK == 0
#error "HSE frequency not defined"
#elif (AIR32_HSECLK < AIR32_HSECLK_MIN) || (AIR32_HSECLK > AIR32_HSECLK_MAX)
#error "AIR32_HSECLK outside acceptable range (AIR32_HSECLK_MIN...AIR32_HSECLK_MAX)"
#endif

#else /* !AIR32_HSE_ENABLED */

#if AIR32_SW == AIR32_SW_HSE
#error "HSE not enabled, required by AIR32_SW"
#endif

#if (AIR32_SW == AIR32_SW_PLL) && (AIR32_PLLSRC == AIR32_PLLSRC_HSE)
#error "HSE not enabled, required by AIR32_SW and AIR32_PLLSRC"
#endif

#if (AIR32_MCOSEL == AIR32_MCOSEL_HSE) ||                                   \
    ((AIR32_MCOSEL == AIR32_MCOSEL_PLLDIV2) &&                              \
     (AIR32_PLLSRC == AIR32_PLLSRC_HSE))
#error "HSE not enabled, required by AIR32_MCOSEL"
#endif

#if (AIR32_RTCSEL == AIR32_RTCSEL_HSEDIV)
#error "HSE not enabled, required by AIR32_RTCSEL"
#endif
#endif /* !AIR32_HSE_ENABLED */

#if AIR32_LSI_ENABLED
#else /* !AIR32_LSI_ENABLED */

#if HAL_USE_RTC && (AIR32_RTCSEL == AIR32_RTCSEL_LSI)
#error "LSI not enabled, required by AIR32_RTCSEL"
#endif
#endif /* !AIR32_LSI_ENABLED */

/* LSE related checks.*/
#if AIR32_LSE_ENABLED
#if (AIR32_LSECLK == 0)
#error "impossible to activate LSE, frequency is zero"
#endif

#if (AIR32_LSECLK < AIR32_LSECLK_MIN) || (AIR32_LSECLK > AIR32_LSECLK_MAX)
#error "AIR32_LSECLK outside acceptable range (AIR32_LSECLK_MIN...AIR32_LSECLK_MAX)"
#endif
#else /* !AIR32_LSE_ENABLED */

#if AIR32_RTCSEL == AIR32_RTCSEL_LSE
#error "LSE not enabled, required by AIR32_RTCSEL"
#endif
#endif /* !AIR32_LSE_ENABLED */

/* PLL activation conditions.*/
#if AIR32_USB_CLOCK_REQUIRED ||                                            \
    (AIR32_SW == AIR32_SW_PLL) ||                                           \
    (AIR32_MCOSEL == AIR32_MCOSEL_PLLDIV2) ||                                   \
    defined(__DOXYGEN__)
/**
 * @brief   PLL activation flag.
 */
#define AIR32_ACTIVATE_PLL          TRUE
#else
#define AIR32_ACTIVATE_PLL          FALSE
#endif

/* HSE prescaler setting check.*/
#if (AIR32_PLLXTPRE != AIR32_PLLXTPRE_DIV1) &&                              \
    (AIR32_PLLXTPRE != AIR32_PLLXTPRE_DIV2)
#error "invalid AIR32_PLLXTPRE value specified"
#endif

/**
 * @brief   PLLMUL field.
 */
#if ((AIR32_PLLMUL_VALUE >= 2) && (AIR32_PLLMUL_VALUE <= 32)) ||            \
    defined(__DOXYGEN__)
#if AIR32_PLLMUL_VALUE == 2
#define AIR32_PLLMUL                AIR32_PLLMUL_MUL2 
#elif AIR32_PLLMUL_VALUE == 3
#define AIR32_PLLMUL                AIR32_PLLMUL_MUL3 
#elif AIR32_PLLMUL_VALUE == 4
#define AIR32_PLLMUL                AIR32_PLLMUL_MUL4 
#elif AIR32_PLLMUL_VALUE == 5
#define AIR32_PLLMUL                AIR32_PLLMUL_MUL5 
#elif AIR32_PLLMUL_VALUE == 6
#define AIR32_PLLMUL                AIR32_PLLMUL_MUL6
#elif AIR32_PLLMUL_VALUE == 7
#define AIR32_PLLMUL                AIR32_PLLMUL_MUL7 
#elif AIR32_PLLMUL_VALUE == 8
#define AIR32_PLLMUL                AIR32_PLLMUL_MUL8 
#elif AIR32_PLLMUL_VALUE == 9
#define AIR32_PLLMUL                AIR32_PLLMUL_MUL9 
#elif AIR32_PLLMUL_VALUE == 10
#define AIR32_PLLMUL                AIR32_PLLMUL_MUL10 
#elif AIR32_PLLMUL_VALUE == 11
#define AIR32_PLLMUL                AIR32_PLLMUL_MUL11 
#elif AIR32_PLLMUL_VALUE == 12
#define AIR32_PLLMUL                AIR32_PLLMUL_MUL12 
#elif AIR32_PLLMUL_VALUE == 13
#define AIR32_PLLMUL                AIR32_PLLMUL_MUL13 
#elif AIR32_PLLMUL_VALUE == 14
#define AIR32_PLLMUL                AIR32_PLLMUL_MUL14 
#elif AIR32_PLLMUL_VALUE == 15
#define AIR32_PLLMUL                AIR32_PLLMUL_MUL15 
#elif AIR32_PLLMUL_VALUE == 16
#define AIR32_PLLMUL                AIR32_PLLMUL_MUL16 
#elif AIR32_PLLMUL_VALUE == 17
#define AIR32_PLLMUL                AIR32_PLLMUL_MUL17 
#elif AIR32_PLLMUL_VALUE == 18
#define AIR32_PLLMUL                AIR32_PLLMUL_MUL18 
#elif AIR32_PLLMUL_VALUE == 19
#define AIR32_PLLMUL                AIR32_PLLMUL_MUL19 
#elif AIR32_PLLMUL_VALUE == 20
#define AIR32_PLLMUL                AIR32_PLLMUL_MUL20 
#elif AIR32_PLLMUL_VALUE == 21
#define AIR32_PLLMUL                AIR32_PLLMUL_MUL21 
#elif AIR32_PLLMUL_VALUE == 22
#define AIR32_PLLMUL                AIR32_PLLMUL_MUL22 
#elif AIR32_PLLMUL_VALUE == 23
#define AIR32_PLLMUL                AIR32_PLLMUL_MUL23 
#elif AIR32_PLLMUL_VALUE == 24
#define AIR32_PLLMUL                AIR32_PLLMUL_MUL24 
#elif AIR32_PLLMUL_VALUE == 25
#define AIR32_PLLMUL                AIR32_PLLMUL_MUL25 
#elif AIR32_PLLMUL_VALUE == 26
#define AIR32_PLLMUL                AIR32_PLLMUL_MUL26 
#elif AIR32_PLLMUL_VALUE == 27
#define AIR32_PLLMUL                AIR32_PLLMUL_MUL27 
#elif AIR32_PLLMUL_VALUE == 28
#define AIR32_PLLMUL                AIR32_PLLMUL_MUL28 
#elif AIR32_PLLMUL_VALUE == 29
#define AIR32_PLLMUL                AIR32_PLLMUL_MUL29 
#elif AIR32_PLLMUL_VALUE == 30
#define AIR32_PLLMUL                AIR32_PLLMUL_MUL30 
#elif AIR32_PLLMUL_VALUE == 31
#define AIR32_PLLMUL                AIR32_PLLMUL_MUL31 
#elif AIR32_PLLMUL_VALUE == 32
#define AIR32_PLLMUL                AIR32_PLLMUL_MUL32 
#else
#error "invalid AIR32_PLLMUL_VALUE value specified"
#endif

/**
 * @brief   PLL input clock frequency.
 */
#if (AIR32_PLLSRC == AIR32_PLLSRC_HSE) || defined(__DOXYGEN__)
#if AIR32_PLLXTPRE == AIR32_PLLXTPRE_DIV1
#define AIR32_PLLCLKIN              (AIR32_HSECLK / 1)
#else
#define AIR32_PLLCLKIN              (AIR32_HSECLK / 2)
#endif
#elif AIR32_PLLSRC == AIR32_PLLSRC_HSI
#define AIR32_PLLCLKIN              (AIR32_HSICLK / 1)
#else
#error "invalid AIR32_PLLSRC value specified"
#endif

/* PLL input frequency range check.*/
#if (AIR32_PLLCLKIN < AIR32_PLLIN_MIN) || (AIR32_PLLCLKIN > AIR32_PLLIN_MAX)
#error "AIR32_PLLCLKIN outside acceptable range (AIR32_PLLIN_MIN...AIR32_PLLIN_MAX)"
#endif

/**
 * @brief   PLL output clock frequency.
 */
#define AIR32_PLLCLKOUT             (AIR32_PLLCLKIN * AIR32_PLLMUL_VALUE)

/* PLL output frequency range check.*/
#if (AIR32_PLLCLKOUT < AIR32_PLLOUT_MIN) || (AIR32_PLLCLKOUT > AIR32_PLLOUT_MAX)
#error "AIR32_PLLCLKOUT outside acceptable range (AIR32_PLLOUT_MIN...AIR32_PLLOUT_MAX)"
#endif

/**
 * @brief   System clock source.
 */
#if (AIR32_SW == AIR32_SW_PLL) || defined(__DOXYGEN__)
#define AIR32_SYSCLK                AIR32_PLLCLKOUT
#elif (AIR32_SW == AIR32_SW_HSI)
#define AIR32_SYSCLK                AIR32_HSICLK
#elif (AIR32_SW == AIR32_SW_HSE)
#define AIR32_SYSCLK                AIR32_HSECLK
#else
#error "invalid AIR32_SW value specified"
#endif

/* Check on the system clock.*/
#if AIR32_SYSCLK > AIR32_SYSCLK_MAX
#error "AIR32_SYSCLK above maximum rated frequency (AIR32_SYSCLK_MAX)"
#endif

/**
 * @brief   AHB frequency.
 */
#if (AIR32_HPRE == AIR32_HPRE_DIV1) || defined(__DOXYGEN__)
#define AIR32_HCLK                  (AIR32_SYSCLK / 1)
#elif AIR32_HPRE == AIR32_HPRE_DIV2
#define AIR32_HCLK                  (AIR32_SYSCLK / 2)
#elif AIR32_HPRE == AIR32_HPRE_DIV4
#define AIR32_HCLK                  (AIR32_SYSCLK / 4)
#elif AIR32_HPRE == AIR32_HPRE_DIV8
#define AIR32_HCLK                  (AIR32_SYSCLK / 8)
#elif AIR32_HPRE == AIR32_HPRE_DIV16
#define AIR32_HCLK                  (AIR32_SYSCLK / 16)
#elif AIR32_HPRE == AIR32_HPRE_DIV64
#define AIR32_HCLK                  (AIR32_SYSCLK / 64)
#elif AIR32_HPRE == AIR32_HPRE_DIV128
#define AIR32_HCLK                  (AIR32_SYSCLK / 128)
#elif AIR32_HPRE == AIR32_HPRE_DIV256
#define AIR32_HCLK                  (AIR32_SYSCLK / 256)
#elif AIR32_HPRE == AIR32_HPRE_DIV512
#define AIR32_HCLK                  (AIR32_SYSCLK / 512)
#else
#error "invalid AIR32_HPRE value specified"
#endif

/* AHB frequency check.*/
#if AIR32_HCLK > AIR32_SYSCLK_MAX
#error "AIR32_HCLK exceeding maximum frequency (AIR32_SYSCLK_MAX)"
#endif

/**
 * @brief   APB1 frequency.
 */
#if (AIR32_PPRE1 == AIR32_PPRE1_DIV1) || defined(__DOXYGEN__)
#define AIR32_PCLK1                 (AIR32_HCLK / 1)
#elif AIR32_PPRE1 == AIR32_PPRE1_DIV2
#define AIR32_PCLK1                 (AIR32_HCLK / 2)
#elif AIR32_PPRE1 == AIR32_PPRE1_DIV4
#define AIR32_PCLK1                 (AIR32_HCLK / 4)
#elif AIR32_PPRE1 == AIR32_PPRE1_DIV8
#define AIR32_PCLK1                 (AIR32_HCLK / 8)
#elif AIR32_PPRE1 == AIR32_PPRE1_DIV16
#define AIR32_PCLK1                 (AIR32_HCLK / 16)
#else
#error "invalid AIR32_PPRE1 value specified"
#endif

/* APB1 frequency check.*/
#if AIR32_PCLK1 > AIR32_PCLK1_MAX
#error "AIR32_PCLK1 exceeding maximum frequency (AIR32_PCLK1_MAX)"
#endif

/**
 * @brief   APB2 frequency.
 */
#if (AIR32_PPRE2 == AIR32_PPRE2_DIV1) || defined(__DOXYGEN__)
#define AIR32_PCLK2                 (AIR32_HCLK / 1)
#elif AIR32_PPRE2 == AIR32_PPRE2_DIV2
#define AIR32_PCLK2                 (AIR32_HCLK / 2)
#elif AIR32_PPRE2 == AIR32_PPRE2_DIV4
#define AIR32_PCLK2                 (AIR32_HCLK / 4)
#elif AIR32_PPRE2 == AIR32_PPRE2_DIV8
#define AIR32_PCLK2                 (AIR32_HCLK / 8)
#elif AIR32_PPRE2 == AIR32_PPRE2_DIV16
#define AIR32_PCLK2                 (AIR32_HCLK / 16)
#else
#error "invalid AIR32_PPRE2 value specified"
#endif

/* APB2 frequency check.*/
#if AIR32_PCLK2 > AIR32_PCLK2_MAX
#error "AIR32_PCLK2 exceeding maximum frequency (AIR32_PCLK2_MAX)"
#endif

/**
 * @brief   RTC clock.
 */
#if (AIR32_RTCSEL == AIR32_RTCSEL_NOCLOCK) || defined(__DOXYGEN__)
#define AIR32_RTCCLK                  0
#elif AIR32_RTCSEL == AIR32_RTCSEL_LSE
#define AIR32_RTCCLK                  AIR32_LSECLK
#elif AIR32_RTCSEL == AIR32_RTCSEL_LSI
#define AIR32_RTCCLK                  AIR32_LSICLK
#elif AIR32_RTCSEL == AIR32_RTCSEL_HSEDIV
#define AIR32_RTCCLK                  (AIR32_HSECLK / 128)
#else
#error "invalid AIR32_RTCSEL value specified"
#endif

/**
 * @brief   ADC frequency.
 */
#if (AIR32_ADCPRE == AIR32_ADCPRE_DIV2) || defined(__DOXYGEN__)
#define AIR32_ADCCLK                (AIR32_PCLK2 / 2)
#elif AIR32_ADCPRE == AIR32_ADCPRE_DIV4
#define AIR32_ADCCLK                (AIR32_PCLK2 / 4)
#elif AIR32_ADCPRE == AIR32_ADCPRE_DIV6
#define AIR32_ADCCLK                (AIR32_PCLK2 / 6)
#elif AIR32_ADCPRE == AIR32_ADCPRE_DIV8
#define AIR32_ADCCLK                (AIR32_PCLK2 / 8)
#elif AIR32_ADCPRE == AIR32_ADCPRE_DIV16
#define AIR32_ADCCLK                (AIR32_PCLK2 / 16)
#elif AIR32_ADCPRE == AIR32_ADCPRE_DIV32
#define AIR32_ADCCLK                (AIR32_PCLK2 / 32)
#elif AIR32_ADCPRE == AIR32_ADCPRE_DIV36
#define AIR32_ADCCLK                (AIR32_PCLK2 / 36)
#elif AIR32_ADCPRE == AIR32_ADCPRE_DIV48
#define AIR32_ADCCLK                (AIR32_PCLK2 / 48)
#elif AIR32_ADCPRE == AIR32_ADCPRE_DIV64
#define AIR32_ADCCLK                (AIR32_PCLK2 / 64)
#elif AIR32_ADCPRE == AIR32_ADCPRE_DIV72
#define AIR32_ADCCLK                (AIR32_PCLK2 / 72)
#elif AIR32_ADCPRE == AIR32_ADCPRE_DIV96
#define AIR32_ADCCLK                (AIR32_PCLK2 / 96)
#elif AIR32_ADCPRE == AIR32_ADCPRE_DIV120
#define AIR32_ADCCLK                (AIR32_PCLK2 / 120)
#elif AIR32_ADCPRE == AIR32_ADCPRE_DIV144
#define AIR32_ADCCLK                (AIR32_PCLK2 / 144)
#elif AIR32_ADCPRE == AIR32_ADCPRE_DIV168
#define AIR32_ADCCLK                (AIR32_PCLK2 / 168)
#elif AIR32_ADCPRE == AIR32_ADCPRE_DIV192
#define AIR32_ADCCLK                (AIR32_PCLK2 / 192)
#elif AIR32_ADCPRE == AIR32_ADCPRE_DIV216
#define AIR32_ADCCLK                (AIR32_PCLK2 / 216)
#else
#error "invalid AIR32_ADCPRE value specified"
#endif

/* ADC frequency check.*/
#if AIR32_ADCCLK > AIR32_ADCCLK_MAX
#error "AIR32_ADCCLK exceeding maximum frequency (AIR32_ADCCLK_MAX)"
#endif

/**
 * @brief   USB frequency.
 */
#if (AIR32_USBPRE == AIR32_USBPRE_DIV1P5) || defined(__DOXYGEN__)
#define AIR32_USBCLK                ((AIR32_PLLCLKOUT * 2) / 3)
#elif (AIR32_USBPRE == AIR32_USBPRE_DIV1)
#define AIR32_USBCLK                (AIR32_PLLCLKOUT / 1)
#elif (AIR32_USBPRE == AIR32_USBPRE_DIV2P5)
#define AIR32_USBCLK                ((AIR32_PLLCLKOUT * 2) / 5)
#elif (AIR32_USBPRE == AIR32_USBPRE_DIV2)
#define AIR32_USBCLK                (AIR32_PLLCLKOUT / 2)
#elif (AIR32_USBPRE == AIR32_USBPRE_DIV3P5)
#define AIR32_USBCLK                ((AIR32_PLLCLKOUT * 2) / 7)
#elif (AIR32_USBPRE == AIR32_USBPRE_DIV3)
#define AIR32_USBCLK                (AIR32_PLLCLKOUT / 3)
#elif (AIR32_USBPRE == AIR32_USBPRE_DIV4P5)
#define AIR32_USBCLK                ((AIR32_PLLCLKOUT * 2) / 9)
#elif (AIR32_USBPRE == AIR32_USBPRE_DIV4)
#define AIR32_USBCLK                (AIR32_PLLCLKOUT / 4)
#else
#error "invalid AIR32_USBPRE value specified"
#endif

/**
 * @brief   Timers 2, 3, 4, 5, 6, 7, 9 clock.
 */
#if (AIR32_PPRE1 == AIR32_PPRE1_DIV1) || defined(__DOXYGEN__)
#define AIR32_TIMCLK1               (AIR32_PCLK1 * 1)
#else
#define AIR32_TIMCLK1               (AIR32_PCLK1 * 2)
#endif

/**
 * @brief   Timers 1, 8 clock.
 */
#if (AIR32_PPRE2 == AIR32_PPRE2_DIV1) || defined(__DOXYGEN__)
#define AIR32_TIMCLK2               (AIR32_PCLK2 * 1)
#else
#define AIR32_TIMCLK2               (AIR32_PCLK2 * 2)
#endif

/**
 * @brief   Flash settings.
 */
#if (AIR32_HCLK <= 108000000) || defined(__DOXYGEN__)
#define AIR32_FLASHBITS             0x00000010
#else
#define AIR32_FLASHBITS             0x00000011
#endif

/* Various helpers.*/
#include "nvic.h"
#include "cache.h"
#include "mpu_v7m.h"
#include "air32_isr.h"
#include "air32_dma.h"
#include "air32_rcc.h"
#include "air32_tim.h"

#ifdef __cplusplus
extern "C" {
#endif
  void hal_lld_init(void);
  void air32_clock_init(void);
#ifdef __cplusplus
}
#endif

#endif /* HAL_LLD_H */
#endif
/** @} */
