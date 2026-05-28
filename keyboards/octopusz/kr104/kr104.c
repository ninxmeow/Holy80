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
#include "gpio.h"

typedef union {
  uint32_t raw;
  struct {
    uint8_t     pollingInterva :8; //1 for 8k; 4 for 1k
    uint8_t     os :8; // 0 for win ;1 for mac
    uint8_t     winlock :8; // 0 for normal; 1 for win lock
  };
} user_config_t;

user_config_t user_config;

uint8_t OS_switched = 0;
uint8_t OS_switched_counter = 0;
uint16_t OS_switched_timer;

// just for Polling Interva changeing testing
bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
    switch (keycode) {
        case PR_8K:
            if (record->event.pressed) {
                if(user_config.pollingInterva == 1)
                {
                    user_config.pollingInterva = 4;
                    eeconfig_update_user(user_config.raw);
                    usb_disconnect();
                    usb_set_pollingInterva(user_config.pollingInterva);
                    writePinLow(B12);
                    wait_ms(500);
                    writePinHigh(B12);
                    wait_ms(500);
                    writePinLow(B12);
                    wait_ms(500);
                    writePinHigh(B12);
                    wait_ms(500);
                    restart_usb_driver(&USB_DRIVER);
                }
                else
                {
                    user_config.pollingInterva = 1;
                    eeconfig_update_user(user_config.raw);
                    usb_disconnect();
                    usb_set_pollingInterva(user_config.pollingInterva);
                    writePinLow(B12);
                    wait_ms(250);
                    writePinHigh(B12);
                    wait_ms(250);
                    writePinLow(B12);
                    wait_ms(250);
                    writePinHigh(B12);
                    wait_ms(250);
                    writePinLow(B12);
                    wait_ms(250);
                    writePinHigh(B12);
                    wait_ms(250);
                    writePinLow(B12);
                    wait_ms(250);
                    restart_usb_driver(&USB_DRIVER);
                }
            }
            return false;
        case OS_W:
            if (record->event.pressed) {

                if (OS_switched == 0 )
                {
                    OS_switched_timer = timer_read();
                    OS_switched = 1;
                }

            }
            else
            {
                OS_switched = 0;
            }
                return false;
        case OS_M:
            if (record->event.pressed) {

                if (OS_switched == 0 )
                {
                    OS_switched_timer = timer_read();
                    OS_switched = 2;
                }
            }
            else
            {
                OS_switched = 0;
            }

            return false;
         case OS_WLOK:
            if (record->event.pressed) {
                    togglePin(C11);
                    wait_ms(250);
                    togglePin(C11);
                    wait_ms(250);
                    togglePin(C11);
                    wait_ms(250);
                    togglePin(C11);
                    wait_ms(250);
                    if(user_config.winlock != 0)
                    {
                        user_config.winlock = 0;
                        eeconfig_update_user(user_config.raw);
                        layer_off(1);

                    }
                    else
                    {
                        user_config.winlock = 1;
                        eeconfig_update_user(user_config.raw);
                        layer_on(1);
                    }
            }
                return false;
        case KC_SIRI:
            if (record->event.pressed) {
                host_consumer_send(0x00CF);
            } else {
                host_consumer_send(0);
            }
            return false;
        case KC_DND:
            if (record->event.pressed) {
                host_system_send(0x009B);
            } else {
                host_system_send(0);
            }
            return false;
            case KC_MCAL:
            if (record->event.pressed) {
                register_code(KC_LGUI);
                register_code(KC_SPACE);

                unregister_code(KC_LGUI);
                unregister_code(KC_SPACE);
                wait_ms(50);
                SEND_STRING("calc\n");
            }
            return false;
        default:
            return true;
    }
}

void eeconfig_init_user(void) {  // EEPROM is getting reset!
  user_config.raw = 0;
  user_config.pollingInterva = 1;
  user_config.os = 0;
  user_config.winlock = 0;
  eeconfig_update_user(user_config.raw); // Write default value to EEPROM now
}
void keyboard_post_init_user(void) {
  // Read the user config from EEPROM
    user_config.raw = eeconfig_read_user();
    usb_set_pollingInterva(user_config.pollingInterva);

    setPinOutput(C11);
    setPinOutput(C10);
    setPinOutput(A15);
    setPinOutput(B12);

    writePinHigh(C11);
    writePinHigh(C10);
    writePinHigh(A15);

    if(user_config.pollingInterva == 1)
    {
        writePinLow(B12);
    }
    else
    {
        writePinHigh(B12);
    }

    if(user_config.os == 1)
    {

        layer_on(3);
        togglePin(A15);
        wait_ms(250);
        togglePin(A15);
        wait_ms(250);
        togglePin(A15);
        wait_ms(250);
        togglePin(A15);
        wait_ms(250);

        writePinLow(A15);
    }
    else
    {

        layer_off(3);
        togglePin(C10);
        wait_ms(250);
        togglePin(C10);
        wait_ms(250);
        togglePin(C10);
        wait_ms(250);
        togglePin(C10);
        wait_ms(250);

        writePinHigh(A15);
    }
    if(user_config.winlock != 0)
    {
        layer_on(1);
    }
    else
    {
        layer_off(1);
    }
}
void os_switch_win(void)
{
    user_config.os = 0;
    eeconfig_update_user(user_config.raw);
    layer_off(3);
    togglePin(C10);togglePin(C11);togglePin(A15);
    wait_ms(250);
    togglePin(C10);togglePin(C11);togglePin(A15);
    wait_ms(250);
    togglePin(C10);togglePin(C11);togglePin(A15);
    wait_ms(250);
    togglePin(C10);togglePin(C11);togglePin(A15);
    wait_ms(250);

    writePinHigh(A15);
}
void os_switch_mac(void)
{
    user_config.os = 1;
    eeconfig_update_user(user_config.raw);
    layer_on(3);
    togglePin(C10);togglePin(C11);togglePin(A15);
    wait_ms(250);
    togglePin(C10);togglePin(C11);togglePin(A15);
    wait_ms(250);
    togglePin(C10);togglePin(C11);togglePin(A15);
    wait_ms(250);
    togglePin(C10);togglePin(C11);togglePin(A15);
    wait_ms(250);

    writePinLow(A15);
}

void housekeeping_task_kb(void) {  // runs frequently to update info
    if (OS_switched != 0)
    {
        if (timer_elapsed(OS_switched_timer) > 3000) {
            OS_switched_timer = timer_read();
            if (OS_switched == 1)
            {
                os_switch_win();
                OS_switched = 0;
            }
            if (OS_switched == 2)
            {
                os_switch_mac();
                OS_switched = 0;
            }
        }
    }


}
