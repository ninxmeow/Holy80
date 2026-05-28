#pragma once
// clang-format off

#if defined(__AVR__)
typedef uint8_t     port_data_t;

#define readPort(port)                 PINx_ADDRESS(port)

#define setPortBitInput(port, bit)     (DDRx_ADDRESS(port) &= ~_BV((bit)&0xF), PORTx_ADDRESS(port) &= ~_BV((bit)&0xF))
#define setPortBitInputHigh(port, bit) (DDRx_ADDRESS(port) &= ~_BV((bit)&0xF), PORTx_ADDRESS(port) |= _BV((bit)&0xF))
#define setPortBitOutput(port, bit)    (DDRx_ADDRESS(port) |= _BV((bit)&0xF))

#define writePortBitLow(port, bit)     (PORTx_ADDRESS(port) &= ~_BV((bit)&0xF))
#define writePortBitHigh(port, bit)    (PORTx_ADDRESS(port) |= _BV((bit)&0xF))

#else

#include "chibios_config.h"

#ifdef GPIO_SPEED_MODE_HIGHEST
#    define PAL_SPEED_MODE PAL_OUTPUT_SPEED_HIGHEST
#else
#    define PAL_SPEED_MODE 0
#endif

typedef uint16_t     port_data_t;

#define readPort(qmk_pin)                 palReadPort(PAL_PORT(qmk_pin))

#define setPortBitInput(qmk_pin, bit)     palSetPadMode(PAL_PORT(qmk_pin), bit, PAL_MODE_INPUT | PAL_SPEED_MODE)
#define setPortBitInputHigh(qmk_pin, bit) palSetPadMode(PAL_PORT(qmk_pin), bit, PAL_MODE_INPUT_PULLUP | PAL_SPEED_MODE)
#define setPortBitInputLow(qmk_pin, bit)  palSetPadMode(PAL_PORT(qmk_pin), bit, PAL_MODE_INPUT_PULLDOWN | PAL_SPEED_MODE)
#define setPortBitOutput(qmk_pin, bit)    palSetPadMode(PAL_PORT(qmk_pin), bit, PAL_MODE_OUTPUT_PUSHPULL | PAL_SPEED_MODE)

#define writePortBitLow(qmk_pin, bit)     palClearLine(PAL_LINE(PAL_PORT(qmk_pin), bit))
#define writePortBitHigh(qmk_pin, bit)    palSetLine(PAL_LINE(PAL_PORT(qmk_pin), bit))
#endif
