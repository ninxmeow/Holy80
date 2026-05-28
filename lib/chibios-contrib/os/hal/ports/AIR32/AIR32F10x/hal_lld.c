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
 * @file    AIR32F10x/hal_lld.c
 * @brief   AIR32F10x HAL subsystem low level driver source.
 *
 * @addtogroup HAL
 * @{
 */

#include "hal.h"

/*===========================================================================*/
/* Driver local definitions.                                                 */
/*===========================================================================*/

/*===========================================================================*/
/* Driver exported variables.                                                */
/*===========================================================================*/

/**
 * @brief   CMSIS system core clock variable.
 * @note    It is declared in system_AIR32f10x.h.
 */
uint32_t SystemCoreClock = AIR32_HCLK;

/*===========================================================================*/
/* Driver local variables and types.                                         */
/*===========================================================================*/

/*===========================================================================*/
/* Driver local functions.                                                   */
/*===========================================================================*/

/**
 * @brief   Initializes the backup domain.
 * @note    WARNING! Changing clock source impossible without resetting
 *          of the whole BKP domain.
 */
static void hal_lld_backup_domain_init(void) {

  /* Backup domain access enabled and left open.*/
  PWR->CR |= PWR_CR_DBP;

#if HAL_USE_RTC
  /* Reset BKP domain if different clock source selected.*/
  if ((RCC->BDCR & AIR32_RTCSEL_MASK) != AIR32_RTCSEL) {
    /* Backup domain reset.*/
    RCC->BDCR = RCC_BDCR_BDRST;
    RCC->BDCR = 0;
  }

  /* If enabled then the LSE is started.*/
#if AIR32_LSE_ENABLED
#if defined(AIR32_LSE_BYPASS)
  /* LSE Bypass.*/
  RCC->BDCR |= RCC_BDCR_LSEON | RCC_BDCR_LSEBYP;
#else
  /* No LSE Bypass.*/
  RCC->BDCR |= RCC_BDCR_LSEON;
#endif
  while ((RCC->BDCR & RCC_BDCR_LSERDY) == 0)
    ;                                     /* Waits until LSE is stable.   */
#endif /* AIR32_LSE_ENABLED */

#if AIR32_RTCSEL != AIR32_RTCSEL_NOCLOCK
  /* If the backup domain hasn't been initialized yet then proceed with
     initialization.*/
  if ((RCC->BDCR & RCC_BDCR_RTCEN) == 0) {
    /* Selects clock source.*/
    RCC->BDCR |= AIR32_RTCSEL;

    /* Prescaler value loaded in registers.*/
    rtc_lld_set_prescaler();

    /* RTC clock enabled.*/
    RCC->BDCR |= RCC_BDCR_RTCEN;
  }
#endif /* AIR32_RTCSEL != AIR32_RTCSEL_NOCLOCK */
#endif /* HAL_USE_RTC */
}

/*===========================================================================*/
/* Driver interrupt handlers.                                                */
/*===========================================================================*/

#if defined(AIR32_DMA_REQUIRED) || defined(__DOXYGEN__)
#if defined(AIR32_DMA2_CH45_HANDLER) || defined(__DOXYGEN__)
/**
 * @brief   DMA2 streams 4 and 5 shared ISR.
 *
 * @isr
 */
OSAL_IRQ_HANDLER(AIR32_DMA2_CH45_HANDLER) {

  OSAL_IRQ_PROLOGUE();

  /* Check on channel 4 of DMA2.*/
  dmaServeInterrupt(AIR32_DMA2_STREAM4);

  /* Check on channel 5 of DMA2.*/
  dmaServeInterrupt(AIR32_DMA2_STREAM5);

  OSAL_IRQ_EPILOGUE();
}
#endif /* defined(AIR32_DMA2_CH45_HANDLER) */
#endif /* defined(AIR32_DMA_REQUIRED) */

/*===========================================================================*/
/* Driver exported functions.                                                */
/*===========================================================================*/

/**
 * @brief   Low level HAL driver initialization.
 *
 * @notapi
 */
void hal_lld_init(void) {

  /* Reset of all peripherals.*/
  rccResetAPB1(0xFFFFFFFF);
  rccResetAPB2(0xFFFFFFFF);

  /* PWR and BD clocks enabled.*/
  rccEnablePWRInterface(true);
  rccEnableBKPInterface(true);

  /* Initializes the backup domain.*/
  hal_lld_backup_domain_init();

  /* DMA subsystems initialization.*/
#if defined(AIR32_DMA_REQUIRED)
  dmaInit();
#endif

  /* IRQ subsystem initialization.*/
  irqInit();

  /* Programmable voltage detector enable.*/
#if AIR32_PVD_ENABLE
  PWR->CR |= PWR_CR_PVDE | (AIR32_PLS & AIR32_PLS_MASK);
#endif /* AIR32_PVD_ENABLE */
}

/**
 * @brief   AIR32 clocks and PLL initialization.
 * @note    All the involved constants come from the file @p board.h.
 * @note    This function should be invoked just after the system reset.
 *
 * @special
 */
void air32_rcc_deinit(void)
{
  /* Set HSION bit */
  RCC->CR |= (uint32_t)0x00000001;

  /* Reset SW, HPRE, PPRE1, PPRE2, ADCPRE and MCO bits */
  RCC->CFGR &= (uint32_t)0xF8FF0000;
  
  /* Reset HSEON, CSSON and PLLON bits */
  RCC->CR &= (uint32_t)0xFEF6FFFF;

  /* Reset HSEBYP bit */
  RCC->CR &= (uint32_t)0xFFFBFFFF;

  /* Reset PLLSRC, PLLXTPRE, PLLMUL and USBPRE/OTGFSPRE bits */
  RCC->CFGR &= (uint32_t)0xFF80FFFF;

  /* Disable all interrupts and clear pending bits  */
  RCC->CIR = 0x009F0000;
}

/*
 * Clocks initialization for all sub-families except CL.
 */
void air32_clock_init(void) {
  air32_rcc_deinit();
#if !AIR32_NO_INIT
  /* HSI setup, it enforces the reset situation in order to handle possible
     problems with JTAG probes and re-initializations.*/
  RCC->CR |= RCC_CR_HSION;                  /* Make sure HSI is ON.         */
  while (!(RCC->CR & RCC_CR_HSIRDY))
    ;                                       /* Wait until HSI is stable.    */
  RCC->CR &= RCC_CR_HSITRIM | RCC_CR_HSION; /* CR Reset value.              */
  RCC->CFGR = 0;                            /* CFGR reset value.            */
  while ((RCC->CFGR & RCC_CFGR_SWS) != RCC_CFGR_SWS_HSI)
    ;                                       /* Waits until HSI is selected. */

#if AIR32_HSE_ENABLED
#if defined(AIR32_HSE_BYPASS)
  /* HSE Bypass.*/
  RCC->CR |= RCC_CR_HSEON | RCC_CR_HSEBYP;
#endif
  /* HSE activation.*/
  RCC->CR |= RCC_CR_HSEON;
  while (!(RCC->CR & RCC_CR_HSERDY));       /* Waits until HSE is stable.   */
#endif

#if AIR32_LSI_ENABLED
  /* LSI activation.*/
  RCC->CSR |= RCC_CSR_LSION;
  while ((RCC->CSR & RCC_CSR_LSIRDY) == 0); /* Waits until LSI is stable.   */
#endif

#if AIR32_ACTIVATE_PLL
  /* PLL activation.*/
#if AIR32_PLLCLKOUT > 120000000
  volatile uint32_t sramsize = 0;
  *(volatile uint32_t *)(0x400210F0) = 1;
	*(volatile uint32_t *)(0x40016C00) = 0xa7d93a86;
	*(volatile uint32_t *)(0x40016C00) = 0xab12dfcd;
	*(volatile uint32_t *)(0x40016C00) = 0xcded3526;
	sramsize = *(volatile uint32_t *)(0x40016C18);
	*(volatile uint32_t *)(0x40016C18) = 0x200183FF;
	*(volatile uint32_t *)(0x4002228C) = 0xa5a5a5a5;

	SYSFREQ_SET(AIR32_PLLMUL, 1, 0, 1);
	RCC->CFGR = (RCC->CFGR & ~0x00030000) | AIR32_PLLSRC | AIR32_PLLXTPRE;
	
	*(volatile uint32_t *)(0x40016C18) = sramsize;
	*(volatile uint32_t *)(0x400210F0) = 0;
	*(volatile uint32_t *)(0x40016C00) = ~0xa7d93a86;
	*(volatile uint32_t *)(0x40016C00) = ~0xab12dfcd;
	*(volatile uint32_t *)(0x40016C00) = ~0xcded3526;
	*(volatile uint32_t *)(0x4002228C) = ~0xa5a5a5a5;
#else
  RCC->CFGR |= AIR32_PLLMUL | AIR32_PLLXTPRE | AIR32_PLLSRC;
#endif
  RCC->CR   |= RCC_CR_PLLON;
  while (!(RCC->CR & RCC_CR_PLLRDY));       /* Waits until PLL is stable.   */
#endif

  /* Clock settings.*/
#if AIR32_HAS_USB
  RCC->CFGR = AIR32_MCOSEL | AIR32_USBPRE | AIR32_PLLMUL | AIR32_PLLXTPRE |
              AIR32_PLLSRC | AIR32_ADCPRE | AIR32_PPRE2  | AIR32_PPRE1    |
              AIR32_HPRE;
#else
  RCC->CFGR = AIR32_MCOSEL |                AIR32_PLLMUL | AIR32_PLLXTPRE |
              AIR32_PLLSRC | AIR32_ADCPRE | AIR32_PPRE2  | AIR32_PPRE1    |
              AIR32_HPRE;
#endif

  /* Flash setup and final clock selection.   */
  FLASH->ACR = AIR32_FLASHBITS;

  /* Switching to the configured clock source if it is different from HSI.*/
#if (AIR32_SW != AIR32_SW_HSI)
  /* Switches clock source.*/
  RCC->CFGR |= AIR32_SW;
  while ((RCC->CFGR & RCC_CFGR_SWS) != (AIR32_SW << 2)); /* Waits selection complete.    */
#endif

#if !AIR32_HSI_ENABLED
  RCC->CR &= ~RCC_CR_HSION;
#endif
#endif /* !AIR32_NO_INIT */
}
/** @} */
