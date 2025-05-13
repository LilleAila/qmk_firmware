// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_norwegian.h"

enum layers {
    _PLOVER,
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
    Q_LCTL,
    Q_LGUI,
    Q_LALT,
    Q_RSFT,
    Q_RCTL,
    Q_RGUI,
    Q_RALT,
    Q_END,
    // Colemak combos
    C_START,
    C_A,
    C_R,
    C_S,
    C_T,
    C_G,
    C_M,
    C_N,
    C_E,
    C_I,
    C_O,
    C_LSFT,
    C_LCTL,
    C_LGUI,
    C_LALT,
    C_RSFT,
    C_RCTL,
    C_RGUI,
    C_RALT,
    C_END,
};

// qwerty
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
const uint16_t PROGMEM qwerty_LSFT[] = {KC_R, KC_T, COMBO_END};
const uint16_t PROGMEM qwerty_LCTL[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM qwerty_LGUI[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM qwerty_LALT[] = {KC_V, KC_B, COMBO_END};
const uint16_t PROGMEM qwerty_RSFT[] = {KC_Y, KC_U, COMBO_END};
const uint16_t PROGMEM qwerty_RCTL[] = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM qwerty_RGUI[] = {KC_M, KC_COMM, COMBO_END};
const uint16_t PROGMEM qwerty_RALT[] = {KC_N, KC_M, COMBO_END};
// colemak
const uint16_t PROGMEM colemak_A[] = {KC_Q, KC_Z, COMBO_END};
const uint16_t PROGMEM colemak_R[] = {KC_W, KC_X, COMBO_END};
const uint16_t PROGMEM colemak_S[] = {KC_F, KC_C, COMBO_END};
const uint16_t PROGMEM colemak_T[] = {KC_P, KC_D, COMBO_END};
const uint16_t PROGMEM colemak_G[] = {KC_B, KC_V, COMBO_END};
const uint16_t PROGMEM colemak_M[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM colemak_N[] = {KC_L, KC_H, COMBO_END};
const uint16_t PROGMEM colemak_E[] = {KC_U, KC_COMM, COMBO_END};
const uint16_t PROGMEM colemak_I[] = {KC_Y, KC_DOT, COMBO_END};
const uint16_t PROGMEM colemak_O[] = {NO_OE, NO_MINS, COMBO_END};
const uint16_t PROGMEM colemak_LSFT[] = {KC_P, KC_B, COMBO_END};
const uint16_t PROGMEM colemak_LCTL[] = {KC_F, KC_P, COMBO_END};
const uint16_t PROGMEM colemak_LGUI[] = {KC_S, KC_T, COMBO_END};
const uint16_t PROGMEM colemak_LALT[] = {KC_T, KC_G, COMBO_END};
const uint16_t PROGMEM colemak_RSFT[] = {KC_J, KC_L, COMBO_END};
const uint16_t PROGMEM colemak_RCTL[] = {KC_L, KC_U, COMBO_END};
const uint16_t PROGMEM colemak_RGUI[] = {KC_H, KC_COMM, COMBO_END};
const uint16_t PROGMEM colemak_RALT[] = {KC_K, KC_H, COMBO_END};

combo_t key_combos[] = {
    // qwerty
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
    [Q_LCTL] = COMBO(qwerty_LCTL, KC_LCTL),
    [Q_LGUI] = COMBO(qwerty_LGUI, KC_LGUI),
    [Q_LALT] = COMBO(qwerty_LALT, KC_LALT),
    [Q_RSFT] = COMBO(qwerty_RSFT, KC_RSFT),
    [Q_RCTL] = COMBO(qwerty_RCTL, KC_RCTL),
    [Q_RGUI] = COMBO(qwerty_RGUI, KC_RGUI),
    [Q_RALT] = COMBO(qwerty_RALT, KC_RALT),
    // colemak
    [C_A] = COMBO(colemak_A, KC_A),
    [C_R] = COMBO(colemak_R, KC_R),
    [C_S] = COMBO(colemak_S, KC_S),
    [C_T] = COMBO(colemak_T, KC_T),
    [C_G] = COMBO(colemak_G, KC_G),
    [C_M] = COMBO(colemak_M, KC_M),
    [C_N] = COMBO(colemak_N, KC_N),
    [C_E] = COMBO(colemak_E, KC_E),
    [C_I] = COMBO(colemak_I, KC_I),
    [C_O] = COMBO(colemak_O, KC_O),
    [C_LSFT] = COMBO(colemak_LSFT, KC_LSFT),
    [C_LCTL] = COMBO(colemak_LCTL, KC_LCTL),
    [C_LGUI] = COMBO(colemak_LGUI, KC_LGUI),
    [C_LALT] = COMBO(colemak_LALT, KC_LALT),
    [C_RSFT] = COMBO(colemak_RSFT, KC_RSFT),
    [C_RCTL] = COMBO(colemak_RCTL, KC_RCTL),
    [C_RGUI] = COMBO(colemak_RGUI, KC_RGUI),
    [C_RALT] = COMBO(colemak_RALT, KC_RALT),
};

bool combo_should_trigger(uint16_t combo_index, combo_t *combo, uint16_t keycode, keyrecord_t *record) {
    uint8_t current_layer = get_highest_layer(layer_state);
    if (combo_index > Q_START && combo_index < Q_END) {
        return current_layer == _QWERTY;
    }
    else if (combo_index > C_START && combo_index < C_END) {
        return current_layer == _COLEMAK;
    }

    return true;
}

void layer_cycle(tap_dance_state_t *state, void *user_data) {
    switch (state->count) {
        case 1:
            layer_move(_PLOVER);
            break;
        case 2:
            layer_move(_QWERTY);
            break;
        case 3:
            layer_move(_COLEMAK);
            break;
    }
}

tap_dance_action_t tap_dance_actions[] = {
    [TD_LAYER_CYCLE] = ACTION_TAP_DANCE_FN(layer_cycle),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_PLOVER] = LAYOUT_2x12_4(
        TD(TD_LAYER_CYCLE), STN_N1, STN_TL, STN_PL, STN_HL, STN_ST1, /**/ STN_ST3, STN_FR, STN_PR, STN_LR, STN_TR, STN_DR,
        QK_BOOT,            STN_S2, STN_KL, STN_WL, STN_RL, STN_ST2, /**/ STN_ST4, STN_RR, STN_BR, STN_GR, STN_SR, STN_ZR,
        STN_A, STN_O, /**/ STN_E, STN_U
    ),
    [_QWERTY] = LAYOUT_2x12_4(
        TD(TD_LAYER_CYCLE), KC_Q, KC_W, KC_E, KC_R, KC_T, /**/ KC_Y, KC_U, KC_I,    KC_O,   KC_P,    NO_AA,
        QK_BOOT,            KC_Z, KC_X, KC_C, KC_V, KC_B, /**/ KC_N, KC_M, KC_COMM, KC_DOT, NO_MINS, NO_AE,
        KC_ENT, KC_SPC, /**/ KC_SPC, KC_BSPC
    ),
    [_COLEMAK] = LAYOUT_2x12_4(
        TD(TD_LAYER_CYCLE), KC_Q, KC_W, KC_F, KC_P, KC_B, /**/ KC_J, KC_L, KC_U,    KC_Y,   NO_OE,   NO_AE,
        QK_BOOT,            KC_Z, KC_X, KC_C, KC_D, KC_V, /**/ KC_K, KC_H, KC_COMM, KC_DOT, NO_MINS, NO_AA,
        KC_ENT, KC_SPC, /**/ KC_SPC, KC_BSPC
    )
};
