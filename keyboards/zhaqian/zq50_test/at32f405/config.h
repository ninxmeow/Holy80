/* Copyright 2023 ZhaQian
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#ifdef RGB_MATRIX_ENABLE
#    define WS2812_PWM_DRIVER PWMD1
#    define WS2812_PWM_CHANNEL 3
#    define WS2812_PWM_PAL_MODE 1
#    define WS2812_DMA_STREAM AT32_DMA1_STREAM1
#    define WS2812_DMAMUX_ID AT32_DMAMUX_TMR1_OVERFLOW
#endif

#define WEAR_LEVELING_LOGICAL_SIZE 2048
#define WEAR_LEVELING_BACKING_SIZE 4096

#ifdef QMK_USB_SUPPORT_HS
#    define USB_DRIVER USBD2
// #define HIDRGB_EPSIZE 1024
#    define USB_POLLING_INTERVAL_MS 1 // 8kHz
// #define USB_POLLING_INTERVAL_MS 2  // 4kHz
// #define USB_POLLING_INTERVAL_MS 3  // 2kHz
// #define USB_POLLING_INTERVAL_MS 4  // 1kHz
// #define USB_POLLING_INTERVAL_MS 7  // 125Hz
#else
#    define USB_POLLING_INTERVAL_MS 1 // 1kHz
#    define USB_DRIVER USBD1
#endif

#ifdef DEBUG_CONFIG
#    define MATRIX_DEBUG_PIN A9
#    include "../debug_config.h"
#endif

// #define MATRIX_ROWS 4
// #define MATRIX_COLS 14
// #define MATRIX_ROW_PINS { B3, B4, B9, B8}
// #define MATRIX_COL_PINS { B13, B12, B10, B0, A7, A6, A5, A4, A3, A2, A1, A0, B1, B7}

#ifdef MATRIX_IO_DELAY_ADAPTIVE_FAST
#    define MATRIX_IO_DELAY_PORTS A0, B0, C0
//                                  fedcba9876543210    fedcba9876543210
#    define MATRIX_IO_DELAY_MASKS 0b0000000011111111, 0b0011000010000011, 0b00000000000000000
#endif

#define WS2812_PWM_TARGET_PERIOD 800000