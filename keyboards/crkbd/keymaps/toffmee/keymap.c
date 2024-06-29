/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include "keymap_finnish.h"

// Layer definitions
enum layers {
    _QWERTY,
    _SYMBOL,
    _NUMBER
};

// Keymap
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(
        KC_TAB,  FI_Q,    FI_W,    FI_E,    FI_R,    FI_T,                      FI_Y,    FI_U,    FI_I,     FI_O,    FI_P,    FI_ARNG,
        KC_LCTL, FI_A,    FI_S,    FI_D,    FI_F,    FI_G,                      FI_H,    FI_J,    FI_K,     FI_L,    FI_ODIA, FI_ADIA,
        KC_LSFT, FI_Z,    FI_X,    FI_C,    FI_V,    FI_B,                      FI_N,    FI_M,    FI_COMM,  FI_DOT,  FI_MINS, MT(MOD_RALT, KC_ESC),
                                   KC_LGUI, MO(_SYMBOL), KC_SPC,         KC_ENT, KC_BSPC, MO(_NUMBER)
    ),

    [_SYMBOL] = LAYOUT(
        FI_CIRC, LCTL(KC_A), KC_UP,   LCTL(KC_E), FI_LCBR, FI_RCBR,             FI_EXLM, FI_PERC, FI_DQUO,  FI_QUOT, FI_PIPE, FI_HASH,
        KC_LCTL, KC_LEFT,    KC_DOWN, KC_RIGHT,   FI_LPRN, FI_RPRN,             FI_QUES, FI_EQL,  FI_SLSH,  FI_AT,   FI_ASTR, FI_DLR,
        KC_LSFT, FI_LABK,    FI_RABK, FI_TILD,    FI_LBRC, FI_RBRC,             FI_GRV,  FI_PLUS, FI_BSLS,  FI_AMPR, FI_EURO, KC_LALT,
                                      KC_LGUI,    _______,  KC_SPC,      KC_ENT, _______, _______
    ),

    [_NUMBER] = LAYOUT(
        _______, FI_1,    FI_2,    FI_3,    FI_4,    FI_5,                      FI_6,    FI_7,    FI_8,     FI_9,    FI_0,    _______,
        _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
                                   KC_LGUI, _______, KC_SPC,             KC_ENT, KC_BSPC, _______
    )
};
