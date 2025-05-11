// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_norwegian.h"

enum layers {
    _QWERTY,
    _COLEMAK, // colemak dh
};

enum {
    TD_LAYER_CYCLE
};

enum combos {
    // Qwerty combos
    Q_START,
    Q_A,
    Q_S,
    Q_D,
    Q_F,
    Q_G,
    Q_H,
    Q_J,
    Q_K,
    Q_L,
    Q_OE,
    Q_LSFT,
    Q_RSFT,
    Q_END,
    // Colemak combos
    C_START,
    C_END,
};

const uint16_t PROGMEM qwerty_A[] = {KC_Q, KC_Z, COMBO_END};
const uint16_t PROGMEM qwerty_S[] = {KC_W, KC_X, COMBO_END};
const uint16_t PROGMEM qwerty_D[] = {KC_E, KC_C, COMBO_END};
const uint16_t PROGMEM qwerty_F[] = {KC_R, KC_V, COMBO_END};
const uint16_t PROGMEM qwerty_G[] = {KC_T, KC_B, COMBO_END};
const uint16_t PROGMEM qwerty_H[] = {KC_Y, KC_N, COMBO_END};
const uint16_t PROGMEM qwerty_J[] = {KC_U, KC_M, COMBO_END};
const uint16_t PROGMEM qwerty_K[] = {KC_I, KC_COMM, COMBO_END};
const uint16_t PROGMEM qwerty_L[] = {KC_O, KC_DOT, COMBO_END};
const uint16_t PROGMEM qwerty_OE[] = {KC_P, NO_MINS, COMBO_END};
const uint16_t PROGMEM qwerty_LSFT[] = {KC_R, KC_T, KC_V, KC_B, COMBO_END};
const uint16_t PROGMEM qwerty_RSFT[] = {KC_Y, KC_U, KC_N, KC_M, COMBO_END};

combo_t key_combos[] = {
    [Q_A] = COMBO(qwerty_A, KC_A),
    [Q_S] = COMBO(qwerty_S, KC_S),
    [Q_D] = COMBO(qwerty_D, KC_D),
    [Q_F] = COMBO(qwerty_F, KC_F),
    [Q_G] = COMBO(qwerty_G, KC_G),
    [Q_H] = COMBO(qwerty_H, KC_H),
    [Q_J] = COMBO(qwerty_J, KC_J),
    [Q_K] = COMBO(qwerty_K, KC_K),
    [Q_L] = COMBO(qwerty_L, KC_L),
    [Q_OE] = COMBO(qwerty_OE, NO_OE),
    [Q_LSFT] = COMBO(qwerty_LSFT, KC_LSFT),
    [Q_RSFT] = COMBO(qwerty_RSFT, KC_RSFT),
};

bool combo_should_trigger(uint16_t combo_index, combo_t *combo, uint16_t keycode, keyrecord_t *record) {
    if (combo_index > Q_START && combo_index < Q_END) {
        if (layer_state_is(_QWERTY)) {
            return true;
        } else {
            return false;
        }
    }

    return true;
}

void layer_cycle(tap_dance_state_t *state, void *user_data) {
    switch (state->count) {
        case 1:
            layer_move(_QWERTY);
            break;
        case 2:
            layer_move(_COLEMAK);
            break;
    }
}

tap_dance_action_t tap_dance_actions[] = {
    [TD_LAYER_CYCLE] = ACTION_TAP_DANCE_FN(layer_cycle),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_2x12_4(
        TD(TD_LAYER_CYCLE), KC_Q, KC_W, KC_E, KC_R, KC_T, /**/ KC_Y, KC_U, KC_I,    KC_O,   KC_P,    NO_AA,
        QK_BOOT,            KC_Z, KC_X, KC_C, KC_V, KC_B, /**/ KC_N, KC_M, KC_COMM, KC_DOT, NO_MINS, NO_AE,
        KC_ENT, KC_SPC, /**/ KC_SPC, KC_BSPC
    ),
    [_COLEMAK] = LAYOUT_2x12_4(
        TD(TD_LAYER_CYCLE), KC_Q, KC_W, KC_F, KC_P, KC_B, /**/ KC_J, KC_L, KC_U,    KC_Y,   NO_OE,   NO_AE,
        QK_BOOT,            KC_Z, KC_X, KC_C, KC_D, KC_V, /**/ KC_K, KC_H, KC_COMM, KC_DOT, NO_MINS, XXXXXXX,
        KC_ENT, KC_SPC, /**/ KC_SPC, KC_BSPC
    )
};
