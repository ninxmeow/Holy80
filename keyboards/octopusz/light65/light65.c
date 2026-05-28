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

#include QMK_KEYBOARD_H


#include "usb_util.h"
#include "usb_main.h"
#include "print.h"
#include "at32f402_5xx.h"

#include "at32f402_405_gpio.h"
#include "at32f402_405_crm.h"
#include "hal.h"


typedef union {
  uint32_t raw;
  struct {
    uint8_t     pollingInterva :8;
  };
} user_config_t;

user_config_t user_config;


#ifdef RGB_MATRIX_ENABLE

led_config_t g_led_config = {
    {
        {  0,  1,  2,      3,      4,  5,      6,      7,  8,  9, 10, 11,     12, 13, 14 },
        { 15, 16, 17,     18,     19, 20,     21,     22, 23, 24, 25, 26,     27, 28, 29 },
        { 30, 31, 32,     33,     34, 35,     36,     37, 38, 39, 40, 41, 42, NO_LED, 43 },
        { 44, 45, 46,     47,     48, 49,     50,     51, 52, 53, 54, NO_LED, 55,  56, 57 },
        { 58, 59, 60, NO_LED, NO_LED, 61, NO_LED, NO_LED, NO_LED, 62, 63, NO_LED, 64, 65, 66 }
    }, {
        {   0,   0 }, {  15,   0 }, {  30,   0 }, {  45,   0 }, {  60,   0 }, {  75,   0 }, {  90,   0 }, { 105,   0 }, { 120,   0 }, { 135,   0 }, { 150,   0 }, { 165,   0 }, { 180,   0 }, { 203,   0 }, { 224,   0 },
        {   4,  16 }, {  23,  16 }, {  38,  16 }, {  53,  16 }, {  68,  16 }, {  83,  16 }, {  98,  16 }, { 113,  16 }, { 128,  16 }, { 143,  16 }, { 158,  16 }, { 173,  16 }, { 188,  16 }, { 206,  16 }, { 224,  16 },
        {   6,  32 }, {  26,  32 }, {  41,  32 }, {  56,  32 }, {  71,  32 }, {  86,  32 }, { 101,  32 }, { 116,  32 }, { 131,  32 }, { 146,  32 }, { 161,  32 }, { 176,  32 },               { 201,  32 }, { 224,  32 },
        {   9,  48 },               {  34,  48 }, {  49,  48 }, {  64,  48 }, {  79,  48 }, {  94,  48 }, { 109,  48 }, { 124,  48 }, { 139,  48 }, { 154,  48 }, { 169,  48 }, { 189,  48 }, { 210,  48 }, { 224,  48 },
        {   2,  64 }, {  21,  64 }, {  39,  64 },                                           {  96,  64 },                                           { 152,  64 },  { 170,  64 }, { 195,  64 }, { 210,  64 }, { 224,  64 }
    }, {
        1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1,
        1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1,
        1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    4, 1,
        1,    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1,
        1, 1, 1,          4,          1, 1, 1, 1, 1
    }
};

bool rgb_matrix_indicators_kb(void) {

    if (!rgb_matrix_indicators_user()) {
        return false;
    }
    if (host_keyboard_led_state().caps_lock) {
        rgb_matrix_set_color(30, 0xFF, 0xFF, 0xFF);

    }
    return true;
}

#endif


void eeconfig_init_user(void) {  // EEPROM is getting reset!
  user_config.raw = 0;
  user_config.pollingInterva = 1;
  eeconfig_update_user(user_config.raw); // Write default value to EEPROM now
}
void keyboard_post_init_user(void) {
    // Read the user config from EEPROM
    user_config.raw = eeconfig_read_user();
    //usb_set_pollingInterva(user_config.pollingInterva);
    rgb_matrix_disable_noeeprom();
}

// just for testing
bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
    switch (keycode) {
        // case KC_Q:
        //     if (record->event.pressed) {
        //        user_config.pollingInterva = 1;
        //        eeconfig_update_user(user_config.raw);
        //        usb_disconnect();
        //        usb_set_pollingInterva(1);
        //        wait_ms(1000);
        //        restart_usb_driver(&USB_DRIVER);
        //     }
        //     return false;
        // case KC_W:
        //     if (record->event.pressed) {
        //        user_config.pollingInterva = 2;
        //        eeconfig_update_user(user_config.raw);
        //        usb_disconnect();
        //        usb_set_pollingInterva(2);
        //        wait_ms(1000);
        //        restart_usb_driver(&USB_DRIVER);
        //     }
        //     return false;
        case KC_W:
            if (record->event.pressed) {


            }
            return false;
        default:
            return true;
    }
}



void housekeeping_task_kb(void) {
    // uprintf("software_trigger_repeat \r\n");

}
