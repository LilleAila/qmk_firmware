// Code mostly taken from here
// https://github.com/qmk/qmk_firmware/blob/master/quantum/keymap_extras/keymap_swedish_mac_iso.h
// https://github.com/qmk/qmk_firmware/blob/master/quantum/keymap_extras/keymap_norwegian.h
// https://config.qmk.fm/

#pragma once
#include "keycodes.h"
// clang-format off

// Aliases
#define NO_0    KC_0                    // 0
#define NO_1    KC_1                    // 1
#define NO_2    KC_2                    // 2
#define NO_3    KC_3                    // 3
#define NO_4    KC_4                    // 4
#define NO_5    KC_5                    // 5
#define NO_6    KC_6                    // 6
#define NO_7    KC_7                    // 7
#define NO_8    KC_8                    // 8
#define NO_9    KC_9                    // 9

#define NO_A    KC_A                    // A
#define NO_B    KC_B                    // B
#define NO_C    KC_C                    // C
#define NO_D    KC_D                    // D
#define NO_E    KC_E                    // E
#define NO_F    KC_F                    // F
#define NO_G    KC_G                    // G
#define NO_H    KC_H                    // H
#define NO_I    KC_I                    // I
#define NO_J    KC_J                    // J
#define NO_K    KC_K                    // K
#define NO_L    KC_L                    // L
#define NO_M    KC_M                    // M
#define NO_N    KC_N                    // N
#define NO_O    KC_O                    // O
#define NO_P    KC_P                    // P
#define NO_Q    KC_Q                    // Q
#define NO_R    KC_R                    // R
#define NO_S    KC_S                    // S
#define NO_T    KC_T                    // T
#define NO_U    KC_U                    // U
#define NO_V    KC_V                    // V
#define NO_W    KC_W                    // W
#define NO_X    KC_X                    // X
#define NO_Y    KC_Y                    // Y
#define NO_Z    KC_Z                    // Z
#define NO_AE   KC_QUOT                 // Æ
#define NO_OSTR KC_SCLN                 // Ø
#define NO_ARNG KC_LBRC                 // Å

#define NO_PIPE ALGR(KC_7)              // |
#define NO_PLUS KC_MINS                 // +
#define NO_MINS KC_SLSH                 // -
#define NO_AT   KC_NUHS                 // @
#define NO_ASTR S(NO_AT)                // *
#define NO_SLSH S(NO_7)                 // /
#define NO_EQL  S(NO_0)                 // =
#define NO_APRX ALGR(NO_0)              // ≈
#define NO_NEQ  S(ALGR(NO_0))           // ≠
#define NO_PM   ALGR(NO_PLUS)           // ±
#define NO_SQRT ALGR(NO_J)              // √
#define NO_OMEG ALGR(NO_W)              // Ω
#define NO_BSLS ALGR(S(NO_7))           // (backslash)
#define NO_EXLM S(NO_1)                 // !
#define NO_QUES S(NO_PLUS)              // ?
#define NO_QUOT KC_NUBS                 // '
#define NO_COMM KC_COMM                 // ,
#define NO_DOT  KC_DOT                  // .
#define NO_SECT S(NO_QUOT)              // §
#define NO_SCLN S(NO_COMM)              // ;
#define NO_COLN S(NO_DOT)               // :
#define NO_DLR  S(NO_4)                 // $
#define NO_UNDS S(NO_MINS)              // _
#define NO_EURO ALGR(NO_4)              // €
#define NO_HASH S(NO_3)                 // #
#define NO_DQUO S(NO_2)                 // "
#define NO_MICR ALGR(NO_Y)              // µ
#define NO_PND  ALGR(NO_3)              // £
#define NO_PERC S(NO_5)                 // %
#define NO_AMPR S(NO_6)                 // &
#define NO_ACUT KC_EQL                  // ´ (dead)
#define NO_BTCK ALGR(NO_ACUT)           // `
#define NO_GRV  S(NO_ACUT)              // ` (dead)
#define NO_DIAE KC_RBRC                 // ¨ (dead)
#define NO_CIRC S(NO_DIAE)              // ^ (dead)
#define NO_TILD ALGR(NO_DIAE)           // ~ (dead)

#define NO_LPRN S(NO_8)                 // (
#define NO_RPRN S(NO_9)                 // )
#define NO_LBRC ALGR(NO_8)              // [
#define NO_RBRC ALGR(NO_9)              // ]
#define NO_LCBR ALGR(S(NO_8))           // {
#define NO_RCBR ALGR(S(NO_9))           // }
#define NO_LABK KC_GRV                  // <
#define NO_RABK S(NO_LABK)              // >
#define NO_LEQ  ALGR(NO_LABK)           // ≤
#define NO_GEQ  ALGR(NO_RABK)           // ≥

