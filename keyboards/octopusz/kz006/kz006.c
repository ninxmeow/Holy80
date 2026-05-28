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
#ifdef RGB_MATRIX_ENABLE

typedef union {
  uint32_t raw;
  struct {
    uint8_t     pollingInterva :8;
  };
} user_config_t;

user_config_t user_config;


led_config_t g_led_config = {
    {
        { 0,      1,      2,      3,      4,      5,      6,      7,      8,      9,      10,     11,     12,     13,     14     },
        { 15,     16,     17,     18,     19,     20,     21,     22,     23,     24,     25,     26,     27,     28,     29     },
        { 30,     31,     32,     33,     34,     35,     36,     37,     38,     39,     40,     41,     42,     43,     44     },
        { 45,     46,     47,     48,     49,     50,     51,     52,     53,     54,     55,     56,     57,     58,     NO_LED },
        { 59,     60,     61,     62,     63,     64,     65,     66,     67,     68,     69,     70,     71,     72,     NO_LED  },
        { 73,     74,     75,     NO_LED, NO_LED, 76,     NO_LED, NO_LED, 77,     78,     79,     80,     81,     82,     NO_LED  }
    },
    {
        {0, 0},     {21, 0}, {36, 0}, {51, 0}, {66, 0}, {81, 0}, { 96,  0}, {111,  0}, {126,  0}, {141,  0}, {156,  0}, {171,  0}, {186,  0},        {209,  0}, {223,  0},
        {0,12}, {14,12}, {29,12}, {44,12}, {59,12}, {74,12}, { 89, 12}, {104, 12}, {119, 12}, {134, 12}, {149, 12}, {164, 12}, {179, 12}, {201, 12},            {223, 12},
        {3,25}, {22,25}, {37,25}, {52,25}, {67,25}, {82,25}, { 97, 25}, {112, 25}, {126, 25}, {141, 25}, {156, 25}, {171, 25}, {186, 25}, {205, 25},            {223, 25},
        {5,38}, {26,38}, {41,38}, {55,38}, {70,38}, {85,38}, {100, 38}, {115, 38}, {130, 38}, {145, 38}, {160, 38}, {175, 38},            {199, 38},            {223, 38},
        {9,51},          {33,51}, {48,51}, {63,51}, {78,51}, { 93, 51}, {108, 51}, {123, 51}, {138, 51}, {153, 51}, {168, 51},            {188, 51}, {209, 51}, {223, 51},
        {1,64}, {20,64}, {39,64},                            { 95, 64},                                  {149, 64}, {164, 64}, {179, 64}, {194, 64}, {209, 64}, {223, 64},
        {195, 0},{195, 3},{195, 6},{195, 9},{195, 12},
        {10, 0},{10, 3},{10, 6},{10, 9},{10, 12},

    },
    {
        4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,
        4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,        4,
        4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,        4,
        4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,   4,        4,        4,
        4,        4,   4,   4,   4,   4,   4,   4,   4,   4,   4,        4,   4,   4,
        4,   4,   4,                  4,                  4,   4,   4,   4,   4,   4,

        4,4,4,4,4,
        4,4,4,4,4,

    }
};

uint8_t pi_A = 1;
uint8_t pi_B = 1;

bool rgb_matrix_indicators_kb(void) {
    if (!rgb_matrix_indicators_user()) {
        return false;
    }
    if (host_keyboard_led_state().caps_lock) {
        rgb_matrix_set_color(45, 0xFF, 0xFF, 0xFF);
    }

    return true;
}

#endif


bool dip_switch_update_kb(uint8_t index, bool active)
{
    switch (index) {
        case 0:
            if (active) // run once when tirggle
            {
                layer_on(3);
            } else {
                layer_off(3);
            }
            break;
        case 1:
            if (active) // run once when tirggle
            {
                pi_A = 1;
            } else {
                pi_A = 0;
            }
            break;
        case 2:
            if (active) // run once when tirggle
            {
                pi_B = 1;
            } else {
                pi_B = 0;
            }
            break;
    }
    uint8_t pr = 1;
    if (pi_A == 0 && pi_B == 0 )
    {
        pr = 2;
    }
    if  (pi_A == 1 && pi_B == 0 )
    {
         pr = 1;
    }
    if (pi_A == 0 && pi_B == 1 )
    {
        pr = 3;
    }
    if (pr != user_config.pollingInterva)
    {
        user_config.pollingInterva = pr;
        eeconfig_update_user(user_config.raw);
        //usb_disconnect();
        //usb_set_pollingInterva(2);
        //wait_ms(2000);
        //restart_usb_driver(&USB_DRIVER);
        //wait_ms(2000);
        ///soft_reset_keyboard();
    }

    return true;
}


void eeconfig_init_user(void) {  // EEPROM is getting reset!
  user_config.raw = 0;
  user_config.pollingInterva = 1;
  eeconfig_update_user(user_config.raw); // Write default value to EEPROM now
}
void keyboard_post_init_user(void) {
  // Read the user config from EEPROM

  user_config.raw = eeconfig_read_user();
  usb_set_pollingInterva(user_config.pollingInterva);
}
