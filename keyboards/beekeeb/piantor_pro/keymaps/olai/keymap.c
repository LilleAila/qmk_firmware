// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
// #include "keymap_norwegian.h"
// TODO: move aliases for both into a separate file
#include "keymap_norwegian.h"       // Prefix: NO_
#include "keymap_mac_norwegian.h"   // Prefix: NM_
#include "keymap_linux_norwegian.h" // Prefux: NL_

enum layers {
    _MAIN_MAC, // Colamek-dh
    _MAIN_LINUX,
    _GAME, // QWERTY
    _NUM_NAV,
    _SYM_MAC,
    _SYM_LINUX,
    _STENO_MAC,
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

    //********************//
    [_MAIN_MAC] = LAYOUT_split_3x6_3( // Colemak-dh
            KC_DEL,  KC_Q,        KC_W,        KC_F,        KC_P,        KC_B, /**/ KC_J, KC_L,        KC_U,        KC_Y,        NO_OSTR,     NO_AE,
            KC_TAB,  CTL_T(KC_A), OPT_T(KC_R), GUI_T(KC_S), SFT_T(KC_T), KC_G, /**/ KC_M, SFT_T(KC_N), GUI_T(KC_E), OPT_T(KC_I), CTL_T(KC_O), NO_ARNG,
            KC_LSFT, KC_Z,        KC_X,        KC_C,        KC_D,        KC_V, /**/ KC_K, KC_H,        KC_COMM,     KC_DOT,      NO_MINS,     XXXXXXX,
            //
            KC_TAB, LT(_FN, KC_ENT), LT(_SYM_MAC, KC_SPC), /**/ LT(_NUM_NAV, KC_SPC), LT(_MOUSE, KC_BSPC), KC_ESC
            ),

    [_MAIN_LINUX] = LAYOUT_split_3x6_3(
            KC_DEL,  KC_Q,        KC_W,        KC_F,        KC_P,        KC_B, /**/ KC_J, KC_L,        KC_U,        KC_Y,        NO_OSTR,     NO_AE,
            KC_TAB,  GUI_T(KC_A), OPT_T(KC_R), CTL_T(KC_S), SFT_T(KC_T), KC_G, /**/ KC_M, SFT_T(KC_N), CTL_T(KC_E), OPT_T(KC_I), GUI_T(KC_O), NO_ARNG,
            KC_LSFT, KC_Z,        KC_X,        KC_C,        KC_D,        KC_V, /**/ KC_K, KC_H,        KC_COMM,     KC_DOT,      NO_MINS,     XXXXXXX,
            //
            KC_TAB, LT(_FN, KC_ENT), LT(_SYM_LINUX, KC_SPC), /**/ LT(_NUM_NAV, KC_SPC), LT(_MOUSE, KC_BSPC), KC_ESC
            ),


    //********************//
    [_GAME] = LAYOUT_split_3x6_3( // QWERTY (gaming) -- Mods on bottom row because w a s and d will be held down (could be done with tap dance??)
            KC_LCMD,  KC_Q,        KC_W,        KC_E,        KC_R,        KC_T, /**/ KC_Y, KC_U,        KC_I,        KC_O,        KC_P,           NO_ARNG,
            KC_LSFT,  KC_A,        KC_S,        KC_D,        KC_F,        KC_G, /**/ KC_H, SFT_T(KC_J), CMD_T(KC_K), OPT_T(KC_L), CTL_T(NO_OSTR), NO_AE,
            KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, /**/ KC_N, KC_M,        KC_COMM,     KC_DOT,      NO_MINS,        XXXXXXX,
            //
            KC_LOPT, KC_SPC, LT(_SYM_MAC, KC_TAB), /**/ LT(_NUM_NAV, KC_ENT), LT(_MOUSE, KC_BSPC), KC_ESC
            ),

    //********************//
    [_STENO_MAC] = LAYOUT_split_3x6_3( // Plover
            XXXXXXX, STN_N1,  STN_TL,  STN_PL,  STN_HL,  STN_ST1, /**/ STN_ST3, STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR,
            XXXXXXX, STN_S2,  STN_KL,  STN_WL,  STN_RL,  STN_ST2, /**/ STN_ST4, STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR,
            MO(_MOUSE),   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, STN_N1,  /**/ STN_N1,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, MO(_FUNC),
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
    [_SYM_MAC] = LAYOUT_split_3x6_3( // Sym
            NO_PM,   NM_PERC, NM_GRV,  NO_TILD, NM_LEQ,  NM_GEQ,  /**/ NO_LPRN, NO_RPRN, NO_EXLM, NO_COLN, NM_DLR,  NM_NEQ,
            NM_OMEG, NM_AMPR, NM_ACUT, NM_BTCK, NO_LABK, NO_RABK, /**/ NO_LBRC, NO_RBRC, NO_DQUO, NM_QUOT, NO_SLSH, NM_APRX,
            NO_CIRC, NM_SQRT, NM_AT,   NO_UNDS, NM_PIPE, NO_HASH, /**/ NM_LCBR, NM_RCBR, NO_QUES, NO_SCLN, NM_BSLS, _______,
            //
            _______, _______, _______, /**/ MO(_FUNC), _______, _______
            ),

    [_SYM_LINUX] = LAYOUT_split_3x6_3( // Sym
            NO_PM,   NL_PERC, NL_GRV,  NO_TILD, _______, _______, /**/ NO_LPRN, NO_RPRN, NO_EXLM, NO_COLN, NL_DLR,  _______,
            NL_OMEG, NL_AMPR, NL_ACUT, NL_BTCK, NO_LABK, NO_RABK, /**/ NO_LBRC, NO_RBRC, NO_DQUO, NL_QUOT, NO_SLSH, _______,
            NO_CIRC, _______, NL_AT,   NO_UNDS, NL_PIPE, NO_HASH, /**/ NL_LCBR, NL_RCBR, NO_QUES, NO_SCLN, NL_BSLS, _______,
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
            _______, _______, _______, _______,  _______, _______, /**/ KC_MPRV, KC_MNXT, KC_VOLU, KC_BRIU, _______, KC_SLEP,
            KC_F1,   KC_F2,   KC_F3,    KC_F4,    KC_F5,   KC_F6,   /**/ KC_MSTP, KC_MPLY, KC_VOLD, KC_BRID, _______, _______,
            KC_F7,   KC_F8,   KC_F9,    KC_F10,   KC_F11,  KC_F12,  /**/ _______, _______, KC_MUTE, _______, _______, _______,
            //
            _______, _______, _______,  /**/ _______, _______, _______
            ),

    //********************//
    [_FUNC] = LAYOUT_split_3x6_3( // Function
            QK_BOOT, DF(_MAIN_MAC), DF(_MAIN_LINUX), DF(_GAME), DF(_STENO_MAC), _______, /**/ _______, _______, _______, _______, _______, _______,
            _______, _______,       _______,   _______,        _______, _______, /**/ _______, _______, _______, _______, _______, _______,
            _______, _______,       _______,   _______,        _______, _______, /**/ _______, _______, _______, _______, _______, _______,
            //
            _______, _______, _______, /**/ _______, _______, _______
            )
};
