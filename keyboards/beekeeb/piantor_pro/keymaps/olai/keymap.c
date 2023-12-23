// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
// #include "keymap_norwegian.h"
#include "keymap_mac_norwegian.h"

// Docs
// https://github.com/qmk/qmk_firmware/blob/master/docs/keycodes_basic.md
// https://github.com/qmk/qmk_firmware/blob/master/docs/feature_advanced_keycodes.md
// https://github.com/qmk/qmk_firmware/blob/master/docs/feature_layers.md

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
            KC_LSFT, KC_Z,        KC_X,        KC_C,        KC_D,        KC_V, /**/ KC_K, KC_H,        KC_COMM,     KC_DOT,      NO_MINS,    XXXXXXX,
            //
            KC_TAB, LT(4, KC_ENT), KC_DEL, /**/ KC_BSPC, LT(3, KC_SPC), KC_ESC
            ),


    [1] = LAYOUT_split_3x6_3( // Gaming (almost qwerty)
            KC_ESC,  XXXXXXX, KC_Q,    KC_W,    KC_E,    XXXXXXX, /**/ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
            KC_TAB,  XXXXXXX, KC_A,    KC_S,    KC_D,    XXXXXXX, /**/ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
            KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, /**/ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
            //
            KC_LCTL, LT(4, KC_ENT), KC_DEL, /**/ KC_BSPC, LT(3, KC_SPC), KC_ESC
            ),

    [2] = LAYOUT_split_3x6_3( // Plover
            XXXXXXX, STN_N1,  STN_TL,  STN_PL,  STN_HL,  STN_ST1, /**/ STN_ST3, STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR,
            XXXXXXX, STN_S2,  STN_KL,  STN_WL,  STN_RL,  STN_ST2, /**/ STN_ST4, STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR,
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, STN_N1,  /**/ STN_N1,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, MO(5),
            //
            XXXXXXX, STN_A, STN_O, /**/ STN_E, STN_U, XXXXXXX
            ),

    [3] = LAYOUT_split_3x6_3( // Num and nav
            NO_NEQ,  NO_ASTR, KC_7, KC_8, KC_9, NO_PLUS, /**/ _______, _______, KC_PGUP, _______, _______,  _______,
            NO_APRX, KC_0,    KC_4, KC_5, KC_6, NO_EQL,  /**/ _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, _______,
            NO_NEQ,  NO_SLSH, KC_1, KC_2, KC_3, NO_MINS, /**/ _______, _______, KC_PGDN, _______, _______,  _______,
            //
            _______, MO(3), _______, /**/ _______, _______, _______
            ),

    [4] = LAYOUT_split_3x6_3( // Sym
            NO_PM,   NO_PERC, NO_GRV,  NO_TILD, NO_LEQ,  NO_GEQ,  /**/ NO_LPRN, NO_RPRN, NO_EXLM, NO_COLN, NO_DLR,  _______,
            NO_OMEG, NO_AMPR, NO_ACUT, NO_BTCK, NO_LABK, NO_RABK, /**/ NO_LBRC, NO_RBRC, NO_DQUO, NO_QUOT, NO_SLSH, _______,
            NO_CIRC, NO_SQRT, NO_AT,   NO_UNDS, NO_PIPE, NO_HASH, /**/ NO_LCBR, NO_RCBR, NO_QUES, NO_SCLN, NO_BSLS, _______,
            //
            _______, _______, _______, /**/ _______, MO(5), _______
            ),

    [5] = LAYOUT_split_3x6_3( // Function
            QK_BOOT, DF(0),   DF(1),   DF(2),   _______, _______, /**/ KC_MPRV, KC_MNXT, KC_VOLU, KC_BRIU, _______, KC_SLEP,
            _______, _______, _______, _______, _______, _______, /**/ KC_MSTP, KC_MPLY, KC_VOLD, KC_BRID, _______, _______,
            _______, _______, _______, _______, _______, _______, /**/ _______, _______, KC_MUTE, _______, _______, _______,
            //
            _______, _______, _______, /**/ _______, _______, _______
            )
};
