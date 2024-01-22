// Code mostly taken from here
// https://github.com/qmk/qmk_firmware/blob/master/quantum/keymap_extras/keymap_swedish_mac_iso.h
// https://github.com/qmk/qmk_firmware/blob/master/quantum/keymap_extras/keymap_norwegian.h
// https://config.qmk.fm/

#pragma once
#include "keycodes.h"
// clang-format off

// Aliases
#define NM_PIPE ALGR(KC_7)               // |
#define NM_AT   KC_NUHS                  // @
#define NM_APRX ALGR(KC_0)               // ≈
#define NM_NEQ  S(ALGR(KC_0))            // ≠
#define NM_SQRT ALGR(KC_J)               // √
#define NM_BSLS ALGR(S(KC_7))            // (backslash)
#define NM_QUOT KC_NUBS                  // '
#define NM_SECT S(NM_QUOT)               // §
#define NM_DLR  S(KC_4)                  // $
#define NM_EURO ALGR(NM_4)               // €
#define NM_MICR ALGR(KC_Y)               // µ
#define NM_PND  ALGR(KC_3)               // £
#define NM_PERC S(KC_5)                  // %
#define NM_AMPR S(KC_6)                  // &
#define NM_ACUT KC_EQL                   // ´ (dead)
#define NM_BTCK ALGR(NM_ACUT)            // `
#define NM_GRV  S(NM_ACUT)               // ` (dead)

#define NM_OMEG ALGR(KC_W)               // Ω
#define NM_BETA ALGR(KC_S)               // ß
#define NM_SIGM ALGR(S(KC_S))            // ∑
#define NM_DELT ALGR(S(KC_D))            // ∆
#define NM_CDOT ALGR(KC_Q)               // •
#define NM_DEGS ALGR(S(KC_Q))            // °
#define NM_MICR ALGR(KC_Y)               // µ

#define NM_FRC  ALGR(KC_C)               // ç
#define NM_ACTE ALGR(KC_E)               // é

#define NM_LCBR ALGR(S(KC_8))            // {
#define NM_RCBR ALGR(S(KC_9))            // }
#define NM_LEQ  ALGR(KC_LABK)            // ≤
#define NM_GEQ  ALGR(KC_RABK)            // ≥
