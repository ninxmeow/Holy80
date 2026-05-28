/* Copyright 2023 OctopusZ
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

#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE

#ifdef RGB_MATRIX_ENABLE
#define RGB_MATRIX_LED_COUNT 87
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 128
#define RGB_DISABLE_WHEN_USB_SUSPENDED

#define RGB_MATRIX_ANIMATION
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES

#ifdef RGB_MATRIX_CUSTOM_KB
#define RGB_MATRIX_CUSTOM_ANIMATION
#endif
#endif

#ifdef UNDERGLOW_RGB_MATRIX_ENABLE
#define UG_RGB_MATRIX_ANIMATIONS
#endif

#ifdef DYNAMIC_RGB_INDICATORS_ENABLE
#define ENABLE_RGB_INDICATORS_ANIMATIONS
#endif

#ifdef VIA_ENABLE
#define DYNAMIC_KEYMAP_LAYER_COUNT 10
#endif

#ifdef OPENRGB_ENABLE
#define OPENRGB_DIRECT_MODE_USE_UNIVERSAL_BRIGHTNESS
#endif

#ifdef DYNAMIC_TAP_DANCE_ENABLE
#define DYNAMIC_TAP_DANCE_ENTRIES 10
#endif

#ifdef DYNAMIC_COMBOS_ENABLE
#define DYNAMIC_COMBOS_ENTRIES 10
#endif


#ifdef RGB_MATRIX_ENABLE
#    define WS2812_PWM_DRIVER PWMD1
#    define WS2812_PWM_CHANNEL 3
#    define WS2812_PWM_PAL_MODE 1
#    define WS2812_DMA_STREAM AT32_DMA1_STREAM1
#    define WS2812_DMAMUX_ID AT32_DMAMUX_TMR1_OVERFLOW
#endif

#define WEAR_LEVELING_LOGICAL_SIZE 8192
#define WEAR_LEVELING_BACKING_SIZE 16384

#ifdef QMK_USB_SUPPORT_HS
#    define USB_DRIVER USBD2
// #define HIDRGB_EPSIZE 1024
#    define USB_POLLING_INTERVAL_MS 1 // 8kHz
// #define USB_POLLING_INTERVAL_MS 2  // 4kHz
// #define USB_POLLING_INTERVAL_MS 3  // 2kHz
// #define USB_POLLING_INTERVAL_MS 4  // 1kHz
// #define USB_POLLING_INTERVAL_MS 7  // 125Hz
#else
#    define USB_POLLING_INTERVAL_MS 4 // 1kHz
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

//#ifdef MATRIX_IO_DELAY_ADAPTIVE_FAST
//#    define MATRIX_IO_DELAY_PORTS A0, B0, C0
//                                  fedcba9876543210    fedcba9876543210
//#    define MATRIX_IO_DELAY_MASKS 0b0000000011111111, 0b0011000010000011, 0b00000000000000000
//#endif

#define HE_VIERSION_CODE 1
#define HE_VIERSION {'2','5','0','5','1','4','0','a'}

#define EECONFIG_MAGIC_NUMBER (uint16_t)0x0002 // When changing, decrement this value to avoid future re-init issues
#define USB_SUSPEND_WAKEUP_DELAY 500

#define WS2812_PWM_TARGET_PERIOD 800000
