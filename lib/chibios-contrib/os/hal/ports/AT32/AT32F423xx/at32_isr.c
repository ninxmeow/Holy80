/*
    Copyright (C) Zhaqian

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
 * @file    AT32F423xx/at32_isr.c
 * @brief   AT32F423xx ISR handler code.
 *
 * @addtogroup AT32F423xx_ISR
 * @{
 */

#include "hal.h"

/*===========================================================================*/
/* Driver local definitions.                                                 */
/*===========================================================================*/

/*===========================================================================*/
/* Driver exported variables.                                                */
/*===========================================================================*/

/*===========================================================================*/
/* Driver local variables.                                                   */
/*===========================================================================*/

/*===========================================================================*/
/* Driver local functions.                                                   */
/*===========================================================================*/

#define exti_serve_irq(intsts, channel) {                                       \
                                                                            \
  if ((intsts) & (1U << (channel))) {                                           \
    _pal_isr_code(channel);                                                 \
  }                                                                         \
}

/*===========================================================================*/
/* Driver interrupt handlers.                                                */
/*===========================================================================*/

#if (HAL_USE_PAL && (PAL_USE_WAIT || PAL_USE_CALLBACKS)) || defined(__DOXYGEN__)
#if !defined(AT32_DISABLE_EXINT0_HANDLER)
/**
 * @brief   EXINT[0] interrupt handler.
 *
 * @isr
 */
OSAL_IRQ_HANDLER(AT32_EXINT0_HANDLER) {
  uint32_t intsts;

  OSAL_IRQ_PROLOGUE();

  intsts = EXINT->INTSTS & (1U << 0);
  EXINT->INTSTS = intsts;

  exti_serve_irq(intsts, 0);

  OSAL_IRQ_EPILOGUE();
}
#endif

#if !defined(AT32_DISABLE_EXINT1_HANDLER)
/**
 * @brief   EXINT[1] interrupt handler.
 *
 * @isr
 */
OSAL_IRQ_HANDLER(AT32_EXINT1_HANDLER) {
  uint32_t intsts;

  OSAL_IRQ_PROLOGUE();

  intsts = EXINT->INTSTS & (1U << 1);
  EXINT->INTSTS = intsts;

  exti_serve_irq(intsts, 1);

  OSAL_IRQ_EPILOGUE();
}
#endif

#if !defined(AT32_DISABLE_EXINT2_HANDLER)
/**
 * @brief   EXINT[2] interrupt handler.
 *
 * @isr
 */
OSAL_IRQ_HANDLER(AT32_EXINT2_HANDLER) {
  uint32_t intsts;

  OSAL_IRQ_PROLOGUE();

  intsts = EXINT->INTSTS & (1U << 2);
  EXINT->INTSTS = intsts;

  exti_serve_irq(intsts, 2);

  OSAL_IRQ_EPILOGUE();
}
#endif

#if !defined(AT32_DISABLE_EXINT3_HANDLER)
/**
 * @brief   EXINT[3] interrupt handler.
 *
 * @isr
 */
OSAL_IRQ_HANDLER(AT32_EXINT3_HANDLER) {
  uint32_t intsts;

  OSAL_IRQ_PROLOGUE();

  intsts = EXINT->INTSTS & (1U << 3);
  EXINT->INTSTS = intsts;

  exti_serve_irq(intsts, 3);

  OSAL_IRQ_EPILOGUE();
}
#endif

#if !defined(AT32_DISABLE_EXINT4_HANDLER)
/**
 * @brief   EXINT[4] interrupt handler.
 *
 * @isr
 */
OSAL_IRQ_HANDLER(AT32_EXINT4_HANDLER) {
  uint32_t intsts;

  OSAL_IRQ_PROLOGUE();

  intsts = EXINT->INTSTS & (1U << 4);
  EXINT->INTSTS = intsts;

  exti_serve_irq(intsts, 4);

  OSAL_IRQ_EPILOGUE();
}
#endif

#if !defined(AT32_DISABLE_EXINT5_9_HANDLER)
/**
 * @brief   EXINT[5]...EXINT[9] interrupt handler.
 *
 * @isr
 */
OSAL_IRQ_HANDLER(AT32_EXINT5_9_HANDLER) {
  uint32_t intsts;

  OSAL_IRQ_PROLOGUE();

  intsts = EXINT->INTSTS & ((1U << 5) | (1U << 6) | (1U << 7) | (1U << 8) | (1U << 9));
  EXINT->INTSTS = intsts;

  exti_serve_irq(intsts, 5);
  exti_serve_irq(intsts, 6);
  exti_serve_irq(intsts, 7);
  exti_serve_irq(intsts, 8);
  exti_serve_irq(intsts, 9);

  OSAL_IRQ_EPILOGUE();
}
#endif

#if !defined(AT32_DISABLE_EXINT10_15_HANDLER)
/**
 * @brief   EXINT[10]...EXINT[15] interrupt handler.
 *
 * @isr
 */
OSAL_IRQ_HANDLER(AT32_EXINT10_15_HANDLER) {
  uint32_t intsts;

  OSAL_IRQ_PROLOGUE();

  intsts = EXINT->INTSTS & ((1U << 10) | (1U << 11) | (1U << 12) | (1U << 13) | (1U << 14) | (1U << 15));
  EXINT->INTSTS = intsts;

  exti_serve_irq(intsts, 10);
  exti_serve_irq(intsts, 11);
  exti_serve_irq(intsts, 12);
  exti_serve_irq(intsts, 13);
  exti_serve_irq(intsts, 14);
  exti_serve_irq(intsts, 15);

  OSAL_IRQ_EPILOGUE();
}
#endif

#if !defined(AT32_DISABLE_EXINT16_HANDLER)
/**
 * @brief   EXINT[16] interrupt handler.
 *
 * @isr
 */
OSAL_IRQ_HANDLER(AT32_EXINT16_HANDLER) {
  uint32_t intsts;

  OSAL_IRQ_PROLOGUE();

  intsts = EXINT->INTSTS & (1U << 16);
  EXINT->INTSTS = intsts;

  exti_serve_irq(intsts, 16);

  OSAL_IRQ_EPILOGUE();
}
#endif

#if !defined(AT32_DISABLE_EXINT17_HANDLER)
/**
 * @brief   EXINT[17] interrupt handler.
 *
 * @isr
 */
OSAL_IRQ_HANDLER(AT32_EXINT17_HANDLER) {
  uint32_t intsts;

  OSAL_IRQ_PROLOGUE();

  intsts = EXINT->INTSTS & (1U << 17);
  EXINT->INTSTS = intsts;

  exti_serve_irq(intsts, 17);

  OSAL_IRQ_EPILOGUE();
}
#endif

#if !defined(AT32_DISABLE_EXINT18_HANDLER)
/**
 * @brief   EXINT[18] interrupt handler.
 *
 * @isr
 */
OSAL_IRQ_HANDLER(AT32_EXINT18_HANDLER) {
  uint32_t intsts;

  OSAL_IRQ_PROLOGUE();

  intsts = EXINT->INTSTS & (1U << 18);
  EXINT->INTSTS = intsts;

  exti_serve_irq(intsts, 18);

  OSAL_IRQ_EPILOGUE();
}
#endif


#if !defined(AT32_DISABLE_EXINT21_HANDLER)
/**
 * @brief   EXINT[21] interrupt handler.
 *
 * @isr
 */
OSAL_IRQ_HANDLER(AT32_EXINT21_HANDLER) {
  uint32_t intsts;

  OSAL_IRQ_PROLOGUE();

  intsts = EXINT->INTSTS & (1U << 21);
  EXINT->INTSTS = intsts;

  exti_serve_irq(intsts, 21);

  OSAL_IRQ_EPILOGUE();
}
#endif

#if !defined(AT32_DISABLE_EXINT22_HANDLER)
/**
 * @brief   EXINT[22] interrupt handler.
 *
 * @isr
 */
OSAL_IRQ_HANDLER(AT32_EXINT22_HANDLER) {
  uint32_t intsts;

  OSAL_IRQ_PROLOGUE();

  intsts = EXINT->INTSTS & (1U << 22);
  EXINT->INTSTS = intsts;

  exti_serve_irq(intsts, 22);

  OSAL_IRQ_EPILOGUE();
}
#endif

#endif

#include "at32_tmr1_9_10_11.inc"
#include "at32_tmr2.inc"
#include "at32_tmr3.inc"
#include "at32_tmr4.inc"
#include "at32_tmr6.inc"
#include "at32_tmr7.inc"
#include "at32_tmr12.inc"
#include "at32_tmr13.inc"
#include "at32_tmr14.inc"

#include "at32_usart1.inc"
#include "at32_usart2.inc"
#include "at32_usart3.inc"
#include "at32_usart4.inc"
#include "at32_usart5.inc"
#include "at32_usart6.inc"
#include "at32_usart7.inc"
#include "at32_usart8.inc"

/*===========================================================================*/
/* Driver exported functions.                                                */
/*===========================================================================*/

/**
 * @brief   Enables IRQ sources.
 *
 * @notapi
 */
void irqInit(void) {

#if HAL_USE_PAL
  nvicEnableVector(AT32_EXINT0_NUMBER, AT32_IRQ_EXINT0_PRIORITY);
  nvicEnableVector(AT32_EXINT1_NUMBER, AT32_IRQ_EXINT1_PRIORITY);
  nvicEnableVector(AT32_EXINT2_NUMBER, AT32_IRQ_EXINT2_PRIORITY);
  nvicEnableVector(AT32_EXINT3_NUMBER, AT32_IRQ_EXINT3_PRIORITY);
  nvicEnableVector(AT32_EXINT4_NUMBER, AT32_IRQ_EXINT4_PRIORITY);
  nvicEnableVector(AT32_EXINT5_9_NUMBER, AT32_IRQ_EXINT5_9_PRIORITY);
  nvicEnableVector(AT32_EXINT10_15_NUMBER, AT32_IRQ_EXINT10_15_PRIORITY);
  nvicEnableVector(AT32_EXINT16_NUMBER, AT32_IRQ_EXINT16_PRIORITY);
  nvicEnableVector(AT32_EXINT17_NUMBER, AT32_IRQ_EXINT17_PRIORITY);
  nvicEnableVector(AT32_EXINT18_NUMBER, AT32_IRQ_EXINT18_PRIORITY);
  nvicEnableVector(AT32_EXINT21_NUMBER, AT32_IRQ_EXINT21_PRIORITY);
  nvicEnableVector(AT32_EXINT22_NUMBER, AT32_IRQ_EXINT22_PRIORITY);
#endif

  tmr1_tmr9_tmr10_tmr11_irq_init();
  tmr2_irq_init();
  tmr3_irq_init();
  tmr4_irq_init();
  tmr6_irq_init();
  tmr7_irq_init();
  tmr12_irq_init();
  tmr13_irq_init();
  tmr14_irq_init();

  usart1_irq_init();
  usart2_irq_init();
  usart3_irq_init();
  usart4_irq_init();
  usart5_irq_init();
  usart6_irq_init();
  usart7_irq_init();
  usart8_irq_init();
}

/**
 * @brief   Disables IRQ sources.
 *
 * @notapi
 */
void irqDeinit(void) {

#if HAL_USE_PAL
  nvicDisableVector(AT32_EXINT0_NUMBER);
  nvicDisableVector(AT32_EXINT1_NUMBER);
  nvicDisableVector(AT32_EXINT2_NUMBER);
  nvicDisableVector(AT32_EXINT3_NUMBER);
  nvicDisableVector(AT32_EXINT4_NUMBER);
  nvicDisableVector(AT32_EXINT5_9_NUMBER);
  nvicDisableVector(AT32_EXINT10_15_NUMBER);
  nvicDisableVector(AT32_EXINT16_NUMBER);
  nvicDisableVector(AT32_EXINT17_NUMBER);
  nvicDisableVector(AT32_EXINT18_NUMBER);
  nvicDisableVector(AT32_EXINT21_NUMBER);
  nvicDisableVector(AT32_EXINT22_NUMBER);
#endif

  tmr1_tmr9_tmr10_tmr11_irq_deinit();
  tmr2_irq_deinit();
  tmr3_irq_deinit();
  tmr4_irq_deinit();
  tmr6_irq_deinit();
  tmr7_irq_deinit();
  tmr12_irq_deinit();
  tmr13_irq_deinit();
  tmr14_irq_deinit();

  usart1_irq_deinit();
  usart2_irq_deinit();
  usart3_irq_deinit();
  usart4_irq_deinit();
  usart5_irq_deinit();
  usart6_irq_deinit();
  usart7_irq_deinit();
  usart8_irq_deinit();
}

/** @} */
