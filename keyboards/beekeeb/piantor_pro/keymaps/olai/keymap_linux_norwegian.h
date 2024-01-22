// Code mostly taken from here
// https://github.com/qmk/qmk_firmware/blob/master/quantum/keymap_extras/keymap_swedish_mac_iso.h
// https://github.com/qmk/qmk_firmware/blob/master/quantum/keymap_extras/keymap_norwegian.h
// https://config.qmk.fm/

#pragma once
#include "keycodes.h"
// clang-format off

// Aliases
#define NL_PIPE KC_NUBS                        // |
#define NL_AT   ALGR(KC_2)                     // @
#define NL_BSLS KC_EQL                         // (backslash)
#define NL_QUOT KC_NUHS                        // '
#define NL_SECT S(NL_PIPE)                     // §
#define NL_DLR  ALGR(KC_4)                     // $
#define NL_EURO ALGR(KC_E)                     // €
#define NL_MICR ALGR(KC_M)                     // µ
#define NL_PND  ALGR(KC_3)                     // £
#define NL_PERC S(KC_5)                        // %
#define NL_AMPR S(KC_6)                        // &
#define NL_ACUT ALGR(KC_EQL)                   // ´ (dead)
#define NL_BTCK S(NL_ACUT)                     // `
#define NL_GRV  S(NL_ACUT)                     // ` (dead)

#define NL_OMEG ALGR(S(KC_Q))                  // Ω
#define NL_BETA ALGR(KC_S)                     // ß
#define NL_DEGS ALGR(S(KC_0))                  // °
#define NL_MICR ALGR(KC_M)                     // µ

#define NL_LCBR ALGR(KC_7)                     // {
#define NL_RCBR ALGR(KC_0)                     // }
#define NL_LEQ  ALGR(NL_LABK)                  // ≤
#define NL_GEQ  ALGR(NL_RABK)                  // ≥
