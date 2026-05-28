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

#ifdef VIA_ENABLE
#define DYNAMIC_KEYMAP_LAYER_COUNT 6
#endif


#ifdef RGB_MATRIX_ENABLE
#    define WS2812_PWM_DRIVER PWMD1
#    define WS2812_PWM_CHANNEL 3
#    define WS2812_PWM_PAL_MODE 1
#    define WS2812_DMA_STREAM AT32_DMA1_STREAM1
#    define WS2812_DMAMUX_ID AT32_DMAMUX_TMR1_OVERFLOW

#define RGB_MATRIX_LED_COUNT 67
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 128
#define RGB_DISABLE_WHEN_USB_SUSPENDED

#define RGB_MATRIX_ANIMATION
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES

#ifdef RGB_MATRIX_CUSTOM_KB
#define RGB_MATRIX_CUSTOM_ANIMATION
#endif
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


#define WS2812_PWM_TARGET_PERIOD 800000

#define DEBUG_UART
#define USER_PRINT

