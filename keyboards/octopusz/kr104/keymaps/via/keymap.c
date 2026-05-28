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

#define vvvvvvv KC_NO

#define KC_DESK G(KC_TAB)
#define KC_ALRM G(KC_A)
#define KC_CLIB G(KC_V)
#define KC_SCCP SGUI(KC_S)
#define KC_LKSC G(KC_L)

#define KC_MDSK G(KC_M)
#define KC_FIND G(KC_N)
#define KC_MSCP SGUI(KC_3)
#define KC_MLKS (QK_LCTL | QK_LGUI | (KC_Q))

#define KC_HAEN KC_LANGUAGE_2
#define KC_HANJ KC_LANGUAGE_1
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT(
        KC_P0  , KC_P2  , KC_P5  , KC_P9  , KC_PPLS, KC_PMNS, KC_PSLS, KC_PAUS,
		KC_PDOT, KC_PENT, KC_P3  , KC_P6  , KC_VOLU, KC_MUTE, KC_PAST, KC_VOLD,
        KC_RGHT, KC_P1  , KC_P4  , KC_P8  , KC_P7  , KC_PGUP, KC_NUM , KC_SCRL,
        KC_LEFT, KC_DOWN, KC_END , KC_HOME, KC_PGDN, KC_INS , KC_PSCR, KC_F12 ,
        KC_RCTL, KC_RSFT, KC_UP  , KC_DEL , KC_BSPC, KC_F11 , KC_BSLS, KC_F10 ,
        KC_APP , vvvvvvv, KC_QUOT, KC_ENT , KC_RBRC, vvvvvvv, KC_EQL , KC_F9  ,
        KC_RALT, MO(2)  , KC_SLSH, KC_QUOT, KC_LBRC, KC_P   , KC_MINS, KC_F8  ,
        KC_DOT , vvvvvvv, KC_L   , KC_SCLN, KC_O   , KC_0   , KC_F7  , KC_F6  ,
        vvvvvvv, KC_COMM, KC_K   , KC_U   , KC_I   , KC_9   , KC_8   , KC_F5  ,
        KC_N   , KC_M   , KC_J   , KC_H   , KC_Y   , KC_6   , KC_7   , KC_F4  ,
        KC_V   , KC_B   , KC_G   , KC_T   , KC_R   , KC_5   , KC_F2  , KC_F3  ,
        vvvvvvv, KC_C   , KC_F   , KC_E   , KC_W   , KC_3   , KC_4   , KC_F1  ,
        KC_HANJ, KC_SPC , KC_X   , KC_D   , KC_S   , KC_A   , KC_Q   , KC_1   ,
        vvvvvvv, KC_HAEN, KC_LALT, KC_Z   , vvvvvvv, KC_CAPS, KC_TAB , KC_2   ,
        vvvvvvv, vvvvvvv, vvvvvvv, KC_LGUI, KC_LCTL, KC_LSFT, KC_GRV , KC_ESC ,
        PR_8K  , vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv
	),

	[1] = LAYOUT(
        KC_P0  , KC_P2  , KC_P5  , KC_P9  , KC_PPLS, KC_PMNS, KC_PSLS, KC_PAUS,
		KC_PDOT, KC_PENT, KC_P3  , KC_P6  , KC_VOLU, KC_MUTE, KC_PAST, KC_VOLD,
        KC_RGHT, KC_P1  , KC_P4  , KC_P8  , KC_P7  , KC_PGUP, KC_NUM , KC_SCRL,
        KC_LEFT, KC_DOWN, KC_END , KC_HOME, KC_PGDN, KC_INS , KC_PSCR, KC_F12 ,
        KC_RCTL, KC_RSFT, KC_UP  , KC_DEL , KC_BSPC, KC_F11 , KC_BSLS, KC_F10 ,
        KC_APP , vvvvvvv, KC_QUOT, KC_ENT , KC_RBRC, vvvvvvv, KC_EQL , KC_F9  ,
        KC_RALT, MO(2)  , KC_SLSH, KC_QUOT, KC_LBRC, KC_P   , KC_MINS, KC_F8  ,
        KC_DOT , vvvvvvv, KC_L   , KC_SCLN, KC_O   , KC_0   , KC_F7  , KC_F6  ,
        vvvvvvv, KC_COMM, KC_K   , KC_U   , KC_I   , KC_9   , KC_8   , KC_F5  ,
        KC_N   , KC_M   , KC_J   , KC_H   , KC_Y   , KC_6   , KC_7   , KC_F4  ,
        KC_V   , KC_B   , KC_G   , KC_T   , KC_R   , KC_5   , KC_F2  , KC_F3  ,
        vvvvvvv, KC_C   , KC_F   , KC_E   , KC_W   , KC_3   , KC_4   , KC_F1  ,
        KC_HANJ, KC_SPC , KC_X   , KC_D   , KC_S   , KC_A   , KC_Q   , KC_1   ,
        vvvvvvv, KC_HAEN, KC_LALT, KC_Z   , vvvvvvv, KC_CAPS, KC_TAB , KC_2   ,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, KC_LCTL, KC_LSFT, KC_GRV , KC_ESC ,
        PR_8K  , vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv
	),

	[2] = LAYOUT(
		vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, KC_LKSC,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, KC_SCCP, vvvvvvv, KC_CALC,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, KC_MNXT,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, KC_MPLY,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, KC_MPRV, KC_ALRM,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, KC_CLIB,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, KC_MYCM,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, KC_BRIU, KC_DESK,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, OS_W   , vvvvvvv, vvvvvvv, KC_BRID,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, OS_M   , vvvvvvv, vvvvvvv,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv,
        vvvvvvv, vvvvvvv, vvvvvvv, OS_WLOK, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv
	),

	[3] = LAYOUT(
        KC_P0  , KC_P2  , KC_P5  , KC_P9  , KC_PPLS, KC_PMNS, KC_PSLS, KC_PAUS,
		KC_PDOT, KC_PENT, KC_P3  , KC_P6  , KC_VOLU, KC_MUTE, KC_PAST, KC_VOLD,
        KC_RGHT, KC_P1  , KC_P4  , KC_P8  , KC_P7  , KC_PGUP, KC_NUM , KC_SCRL,
        KC_LEFT, KC_DOWN, KC_END , KC_HOME, KC_PGDN, KC_INS , KC_PSCR, KC_F12 ,
        KC_RCTL, KC_RSFT, KC_UP  , KC_DEL , KC_BSPC, KC_F11 , KC_BSLS, KC_F10 ,
        KC_APP , vvvvvvv, KC_QUOT, KC_ENT , KC_RBRC, vvvvvvv, KC_EQL , KC_F9  ,
        KC_RGUI, MO(4)  , KC_SLSH, KC_QUOT, KC_LBRC, KC_P   , KC_MINS, KC_F8  ,
        KC_DOT , vvvvvvv, KC_L   , KC_SCLN, KC_O   , KC_0   , KC_F7  , KC_F6  ,
        vvvvvvv, KC_COMM, KC_K   , KC_U   , KC_I   , KC_9   , KC_8   , KC_F5  ,
        KC_N   , KC_M   , KC_J   , KC_H   , KC_Y   , KC_6   , KC_7   , KC_F4  ,
        KC_V   , KC_B   , KC_G   , KC_T   , KC_R   , KC_5   , KC_F2  , KC_F3  ,
        vvvvvvv, KC_C   , KC_F   , KC_E   , KC_W   , KC_3   , KC_4   , KC_F1  ,
        KC_HANJ, KC_SPC , KC_X   , KC_D   , KC_S   , KC_A   , KC_Q   , KC_2   ,
        vvvvvvv, KC_HAEN, KC_LGUI, KC_Z   , vvvvvvv, KC_CAPS, KC_TAB , KC_1   ,
        vvvvvvv, vvvvvvv, vvvvvvv, KC_LALT, KC_LCTL, KC_LSFT, KC_GRV , KC_ESC ,
        PR_8K  , vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv
	),

	[4] = LAYOUT(
		vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, KC_MLKS,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, KC_MSCP, vvvvvvv, KC_MCAL,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, KC_MNXT,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, KC_MPLY,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, KC_MPRV, KC_DND ,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, KC_SIRI,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, KC_FIND,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, KC_BRMU, KC_MDSK,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, OS_W   , vvvvvvv, vvvvvvv, KC_BRMD,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, OS_M   , vvvvvvv, vvvvvvv,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv
	),

	[5] = LAYOUT(
		vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv,
        vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv, vvvvvvv
	),
};
