// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
// #include "keymap_norwegian.h"
#include "keymap_norwegian.h" // Prefix: NO_
// Some parts of these files depend on code from "keymap_norwegian.h"

enum layers {
    _MAIN,
    _GAME, // QWERTY
    _NUM_NAV,
    _SYM,
    _STENO,
    _MOUSE,
    _FN,
    _FUNC,
};


// Docs
// https://github.com/qmk/qmk_firmware/blob/master/docs/keycodes_basic.md
// https://github.com/qmk/qmk_firmware/blob/master/docs/feature_advanced_keycodes.md
// https://github.com/qmk/qmk_firmware/blob/master/docs/feature_layers.md
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Most often, only master half needs lto be flashed after first flash
    // mini.align: select lines and run gA,<ret>
    // Home row mods with mod-tap: MT(MOD_LGUI, KC_A), or shorter: GUI_T(KC_A)
    // Switch to layer 1: MO(1)
    // No action:   XXXXXXX (7) or KC_NO
    // Transparent: _______ (7) or KC_TRNS
    // Using mods CTRL, OPTION, CMD, SHIFT
    // CMD = GUI
    // Using left-alt on right side because right-alt is actually alt gr and not recognized in sway keybindings as alt

    //********************//
    [_MAIN] = LAYOUT_split_3x6_3(
            KC_DEL,  KC_Q,        KC_W,        KC_F,        KC_P,        KC_B, /**/ KC_J, KC_L,        KC_U,        KC_Y,        NO_OSTR,     NO_AE,
            KC_TAB,  GUI_T(KC_A), ALT_T(KC_R), CTL_T(KC_S), SFT_T(KC_T), KC_G, /**/ KC_M, RSFT_T(KC_N), RCTL_T(KC_E), ALT_T(KC_I), RGUI_T(KC_O), NO_ARNG,
            KC_LSFT, KC_Z,        KC_X,        KC_C,        KC_D,        KC_V, /**/ KC_K, KC_H,        KC_COMM,     KC_DOT,      NO_MINS,     XXXXXXX,
            //
            KC_TAB, LT(_FN, KC_ENT), LT(_SYM, KC_SPC), /**/ LT(_NUM_NAV, KC_SPC), LT(_MOUSE, KC_BSPC), KC_ESC
            ),


    //********************//
    [_GAME] = LAYOUT_split_3x6_3( // QWERTY (gaming) -- Mods on bottom row because w a s and d will be held down (could be done with tap dance??)
            KC_LCMD, KC_Q, KC_W, KC_E, KC_R, KC_T, /**/ KC_Y, KC_U,         KC_I,         KC_O,         KC_P,            NO_ARNG,
            KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, /**/ KC_H, RSFT_T(KC_J), RCTL_T(KC_K), ALT_T(KC_L), RGUI_T(NO_OSTR), NO_AE,
            KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, /**/ KC_N, KC_M,         KC_COMM,      KC_DOT,       NO_MINS,         XXXXXXX,
            //
            KC_LOPT, KC_SPC, LT(_SYM, KC_TAB), /**/ LT(_NUM_NAV, KC_ENT), LT(_MOUSE, KC_BSPC), KC_ESC
            ),

    //********************//
    [_STENO] = LAYOUT_split_3x6_3( // Plover
            XXXXXXX,    STN_N1,  STN_TL,  STN_PL,  STN_HL,  STN_ST1, /**/ STN_ST3, STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR,
            XXXXXXX,    STN_S2,  STN_KL,  STN_WL,  STN_RL,  STN_ST2, /**/ STN_ST4, STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR,
            MO(_MOUSE), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, STN_N1,  /**/ STN_N1,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, MO(_FUNC),
            //
            XXXXXXX, STN_A, STN_O, /**/ STN_E, STN_U, XXXXXXX
            ),

    //********************//
    [_NUM_NAV] = LAYOUT_split_3x6_3( // Num and nav
            _______, NO_ASTR, KC_7, KC_8, KC_9, NO_PLUS, /**/ _______, KC_H,    KC_J,    KC_K,    KC_L,     _______,
            _______, KC_0,    KC_4, KC_5, KC_6, NO_EQL,  /**/ _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, _______,
            _______, NO_SLSH, KC_1, KC_2, KC_3, NO_MINS, /**/ _______, _______, KC_PGDN, KC_PGUP, _______,  _______,
            //
            _______, _______, MO(_FUNC), /**/ _______, _______, _______
            ),

    //********************//
    [_SYM] = LAYOUT_split_3x6_3( // Sym
            NO_PM,  NO_ACUT, NO_COLN, NO_TILD, NO_PIPE, NO_HASH, /**/ NO_EXLM, NO_LARR, NO_DARR, NO_UARR, NO_RARR, NO_OE,
            NO_PI,  NO_CIRC, NO_PERC, NO_AMPR, NO_LABK, NO_RABK, /**/ NO_LPRN, NO_RPRN, NO_DQUO, NO_QUOT, NO_SLSH, NO_DLR,
            NO_GRV, NO_DEGS, NO_AT,   NO_UNDS, NO_LBRC, NO_RBRC, /**/ NO_LCBR, NO_RCBR, NO_QUES, NO_SCLN, NO_BSLS, XXXXXXX,
            //
            _______, _______, _______, /**/ MO(_FUNC), _______, _______
            ),

    //********************//
    [_MOUSE] = LAYOUT_split_3x6_3( // Mouse
            _______, _______, _______, _______, _______, _______, /**/ _______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_ACL2,
            _______, _______, KC_BTN1, KC_BTN3, KC_BTN2, _______, /**/ _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_ACL1,
            _______, _______, _______, _______, _______, _______, /**/ _______, _______, _______, _______, _______, KC_ACL0,
            //
            _______, _______, _______, /**/ _______, _______, _______
            ),

    //********************//
    [_FN] = LAYOUT_split_3x6_3(
            _______, _______, _______, _______, _______, _______, /**/ KC_MPRV, KC_MNXT, KC_VOLU, KC_BRIU, _______, KC_SLEP,
            KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   /**/ KC_MSTP, KC_MPLY, KC_VOLD, KC_BRID, _______, _______,
            KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  /**/ _______, _______, KC_MUTE, _______, _______, _______,
            //
            _______, _______, _______,  /**/ _______, _______, _______
            ),

    //********************//
    [_FUNC] = LAYOUT_split_3x6_3( // Function
            QK_BOOT, _______, DF(_MAIN), DF(_GAME), DF(_STENO), _______, /**/ _______, _______, _______, _______, _______, _______,
            _______, _______, _______,         _______,   _______,    _______, /**/ _______, _______, _______, _______, _______, _______,
            _______, _______, _______,         _______,   _______,    _______, /**/ _______, _______, _______, _______, _______, _______,
            //
            _______, _______, _______, /**/ _______, _______, _______
            )
};
