/* Copyright 2022 ZhaQian
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

#define MATRIX_ROWS 5
#define MATRIX_COLS 14
#define MATRIX_ROW_PINS { C9, A8, A9, A11 ,A12}
#define MATRIX_COL_PINS { C13, C14, C0, C2, B9, B8 ,B7, B6, B5 ,B4, A4, B3, D2, C12 }

#define DYNAMIC_KEYMAP_LAYER_COUNT 10

#ifdef AW20216
#define AW_GLOBAL_CURRENT_MAX 255
#define AW_SCALING_MAX        255

#define DRIVER_1_CS B10
#define DRIVER_1_EN B11


#define DRIVER_COUNT       1
#define DRIVER_1_LED_TOTAL 61
#define DRIVER_LED_TOTAL   (DRIVER_1_LED_TOTAL)

#define AW_SPI_DIVISOR 8
#endif

// ============================================
#ifdef RGB_MATRIX_ENABLE
#define RGBLED_NUM                    61
#define RGB_MATRIX_LED_COUNT          RGBLED_NUM
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 200
//#define RGB_DISABLE_WHEN_USB_SUSPENDED

#define RGB_MATRIX_LED_PROCESS_LIMIT (RGB_MATRIX_LED_COUNT + 4) / 5 
#define RGB_MATRIX_LED_FLUSH_LIMIT 32 

#define RGB_MATRIX_ANIMATION
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES

#define SPI_DRIVER SPID1
#define SPI_SCK_PIN A5
#define SPI_MOSI_PIN A7
#define SPI_MISO_PIN A6


#endif

#ifdef DEBUG_CONFIG
#    define MATRIX_DEBUG_PIN A7
#    include "debug_config.h"
#endif


// #define MATRIX_ROWS 5
// #define MATRIX_COLS 14
// #define MATRIX_ROW_PINS { C9, A8, A9, A11 ,A12}
// #define MATRIX_COL_PINS { C13, C14, C0, C2, B9, B8 ,B7, B6, B5 ,B4, A4, B3, D2, C12 }

#ifdef MATRIX_IO_DELAY_ADAPTIVE_FAST
#    define MATRIX_IO_DELAY_PORTS A0, B0, C0, D0
//                                  fedcba9876543210    fedcba9876543210    fedcba9876543210    fedcba9876543210
#    define MATRIX_IO_DELAY_MASKS 0b0001101100010000, 0b0011001111111000, 0b0111000000000101, 0b0000000000000100
#endif

#define GPIO_SPEED_MODE_HIGHEST
