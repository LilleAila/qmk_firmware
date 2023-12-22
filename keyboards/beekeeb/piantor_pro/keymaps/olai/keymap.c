// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_norwegian.h"

// https://github.com/qmk/qmk_firmware/blob/master/docs/keycodes_basic.md
// https://github.com/qmk/qmk_firmware/blob/master/quantum/keymap_extras/keymap_norwegian.h

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Most often, only master half needs lto be flashed after first flash
    // mini.aligh: select lines and run gA,<ret>
    // Home row mods with mod-tap: MT(MOD_LGUI, KC_A), or shorter: GUI_T(KC_A)
    // Switch to layer 1: MO(1)
    // No action:   XXXXXXX (7) or KC_NO
    // Transparent: _______ (7) or KC_TRNS
    // Using mods CTRL, OPTION, CMD, SHIFT
    [0] = LAYOUT_split_3x6_3(
            KC_ESC,  KC_Q,        KC_W,        KC_F,        KC_P,        KC_B, /**/ KC_J, KC_L,        KC_U,        KC_Y,        NO_OSTR,     NO_AE,
            XXXXXXX, CTL_T(KC_A), OPT_T(KC_R), CMD_T(KC_S), SFT_T(KC_T), KC_G, /**/ KC_M, SFT_T(KC_N), CMD_T(KC_E), OPT_T(KC_I), CTL_T(KC_O), NO_ARNG,
            KC_LSFT, KC_Z,        KC_X,        KC_C,        KC_D,        KC_V, /**/ KC_K, KC_H,        KC_COMM,     KC_DOT,      KC_MINUS,    XXXXXXX,
            // Thumb keys (align separately)
            KC_TAB, KC_BSPC, LT(2, KC_ENT), /**/ LT(1, KC_SPC), KC_DEL, KC_ESC
            ),

    [1] = LAYOUT_split_3x6_3( // Num and nav
            _______, NO_ASTR, KC_7, KC_8, KC_9, NO_PLUS, /**/ _______, _______, _______, _______, _______,  _______,
            _______, KC_0,    KC_4, KC_5, KC_6, NO_EQL,  /**/ _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, _______,
            _______, NO_SLSH, KC_1, KC_2, KC_3, NO_MINS, /**/ _______, _______, _______, _______, _______,  _______,
            //
            _______, MO(3), _______, /**/ _______, _______, _______
            ),

    [2] = LAYOUT_split_3x6_3( // Sym
            _______, _______, _______, _______, _______, _______, /**/ _______, _______, _______, _______, _______, _______,
            _______, _______, _______, _______, _______, _______, /**/ _______, _______, _______, _______, _______, _______,
            _______, _______, _______, _______, _______, _______, /**/ _______, _______, _______, _______, _______, _______,
            //
            _______, _______, _______, /**/ _______, MO(3), _______
            ),

    [3] = LAYOUT_split_3x6_3( // Other, for example toggle to gaming layer. Gaming layer will use the same thumb keys with the same layers, but slightly modified qwerty
            QK_BOOT, _______, _______, _______, _______, _______, /**/ _______, _______, _______, _______, _______, _______,
            _______, _______, _______, _______, _______, _______, /**/ _______, _______, _______, _______, _______, _______,
            _______, _______, _______, _______, _______, _______, /**/ _______, _______, _______, _______, _______, _______,
            //
            _______, _______, _______, /**/ _______, _______, _______
            )
};
