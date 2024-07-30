// Code mostly taken from here
// https://github.com/qmk/qmk_firmware/blob/master/quantum/keymap_extras/keymap_swedish_mac_iso.h
// https://github.com/qmk/qmk_firmware/blob/master/quantum/keymap_extras/keymap_norwegian.h
// https://config.qmk.fm/

#pragma once
#include "keycodes.h"
// clang-format off

// Aliases
#define NO_A    KC_A                           // a
#define NO_B    KC_B                           // b
#define NO_C    KC_C                           // c
#define NO_D    KC_D                           // d
#define NO_E    KC_E                           // e
#define NO_F    KC_F                           // f
#define NO_G    KC_G                           // g
#define NO_H    KC_H                           // h
#define NO_I    KC_I                           // i
#define NO_J    KC_J                           // j
#define NO_K    KC_K                           // k
#define NO_L    KC_L                           // l
#define NO_M    KC_M                           // m
#define NO_N    KC_N                           // n
#define NO_O    KC_O                           // o
#define NO_P    KC_P                           // p
#define NO_Q    KC_Q                           // q
#define NO_R    KC_R                           // r
#define NO_S    KC_S                           // s
#define NO_T    KC_T                           // t
#define NO_U    KC_U                           // u
#define NO_V    KC_V                           // v
#define NO_W    KC_W                           // w
#define NO_X    KC_X                           // x
#define NO_Y    KC_Y                           // y
#define NO_Z    KC_Z                           // z
#define NO_AE   KC_QUOT                        // Æ
#define NO_OSTR KC_SCLN                        // Ø
#define NO_ARNG KC_LBRC                        // Å

#define NO_PLUS KC_MINS                        // +
#define NO_MINS KC_SLSH                        // -
#define NO_ASTR S(KC_NUHS)                     // *
#define NO_SLSH S(KC_7)                        // /
#define NO_EQL  S(KC_0)                        // =
#define NO_PM   ALGR(NO_PLUS)                  // ±
#define NO_EXLM S(KC_1)                        // !
#define NO_QUES S(NO_PLUS)                     // ?
#define NO_COMM KC_COMM                        // ,
#define NO_DOT  KC_DOT                         // .
#define NO_SCLN S(NO_COMM)                     // ;
#define NO_COLN S(NO_DOT)                      // :
#define NO_UNDS S(NO_MINS)                     // _
#define NO_HASH S(KC_3)                        // #
#define NO_DQUO S(KC_2)                        // "
#define NO_DIAE KC_RBRC                        // ¨ (dead)
#define NO_CIRC S(NO_DIAE)                     // ^ (dead)
#define NO_TILD ALGR(NO_DIAE)                  // ~ (dead)
#define NO_PI   ALGR(KC_P)                     // π
#define NO_OE   ALGR(KC_O)                     // œ

#define NO_LPRN S(KC_8)                        // (
#define NO_RPRN S(KC_9)                        // )
#define NO_LBRC ALGR(KC_8)                     // [
#define NO_RBRC ALGR(KC_9)                     // ]
#define NO_LCBR ALGR(KC_7)                     // {
#define NO_RCBR ALGR(KC_0)                     // }
#define NO_LABK KC_NUBS                        // <
#define NO_RABK S(NO_LABK)                     // >

#define NO_LARR ALGR(KC_Y)                     // ←
#define NO_DARR ALGR(KC_U)                     // ↓
#define NO_UARR S(ALGR(KC_U))                  // ↑
#define NO_RARR ALGR(KC_I)                     // →

#define NO_PIPE KC_GRV                         // |
#define NO_AT   ALGR(KC_2)                     // @
#define NO_BSLS KC_EQL                         // (backslash)
#define NO_QUOT KC_NUHS                        // '
#define NO_SECT S(NO_PIPE)                     // §
#define NO_DLR  ALGR(KC_4)                     // $
#define NO_EURO ALGR(KC_E)                     // €
#define NO_MICR ALGR(KC_M)                     // µ
#define NO_PND  ALGR(KC_3)                     // £
#define NO_PERC S(KC_5)                        // %
#define NO_AMPR S(KC_6)                        // &
#define NO_ACUT ALGR(NO_BSLS)                  // ´ (dead)
#define NO_BTCK S(NO_BSLS)                     // ` (dead)
#define NO_GRV  S(NO_BSLS)                     // ` (dead)

#define NO_OMEG ALGR(S(KC_Q))                  // Ω
#define NO_BETA ALGR(KC_S)                     // ß
#define NO_DEGS ALGR(S(KC_0))                  // °
#define NO_MICR ALGR(KC_M)                     // µ

