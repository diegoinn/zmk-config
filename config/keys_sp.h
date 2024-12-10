/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */
#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>
#pragma once
// clang-format off

// Aliases
#define ES_N1 N1                // 1
#define ES_N2 N2                // 2
#define ES_N3 N3                // 3
#define ES_N4 N4                // 4
#define ES_N5 N5                // 5
#define ES_N6 N6                // 6
#define ES_N7 N7                // 7
#define ES_N8 N8                // 8
#define ES_N9 N9                // 9
#define ES_N0 N0                // 0

#define ES_A A                  // A
#define ES_B B                  // B
#define ES_C C                  // C
#define ES_D D                  // D
#define ES_E E                  // E
#define ES_F F                  // F
#define ES_G G                  // G
#define ES_H H                  // H
#define ES_I I                  // I
#define ES_J J                  // J
#define ES_K K                  // K
#define ES_L L                  // L
#define ES_M M                  // M
#define ES_N N                  // N
#define ES_NTIL SEMI            // Ñ
#define ES_O O                  // O
#define ES_P P                  // P
#define ES_Q Q                  // Q
#define ES_R R                  // R
#define ES_S S                  // S
#define ES_T T                  // T
#define ES_U U                  // U
#define ES_V V                  // V
#define ES_W W                  // W
#define ES_X X                  // X
#define ES_Y Y                  // Y
#define ES_Z Z                  // Z

#define ES_PIPE GRAVE           // |
#define ES_ACUT LEFT_BRACKET    // ´ (dead)
#define ES_COMM COMMA           // ,
#define ES_DOT DOT              // .
#define ES_IQUE KC_EQL          // ¿
#define ES_LABK BSLH            // <
#define ES_LCBR SQT             // {
#define ES_MINS SLASH           // -
#define ES_PLUS RIGHT_BRACKET   // +
#define ES_RCBR NUHS            // }
#define ES_SQT MINS             // '


#define ES_AMPR LS(ES_6)        // &
#define ES_ASTR LS(ES_PLUS)     // *
#define ES_COLN LS(ES_DOT)      // :
#define ES_DIAE LS(ES_ACUT)     // ¨ (dead)
#define ES_DLR LS(ES_4)         // $
#define ES_DQUO LS(ES_2)        // "
#define ES_EQL LS(ES_0)         // =
#define ES_EXLM LS(ES_1)        // !
#define ES_IEXL LS(ES_IQUE)     // ¡
#define ES_LBRC LS(ES_LCBR)     // [
#define ES_LPRN LS(ES_8)        // (
#define ES_MORD LS(ES_PIPE)     // °
#define ES_NUMB LS(ES_3)        // #
#define ES_PERC LS(ES_5)        // %
#define ES_QUES LS(ES_QUOT)     // ?
#define ES_RABK LS(ES_LABK)     // >
#define ES_RBRC LS(ES_RCBR)     // ]
#define ES_RPRN LS(ES_9)        // )
#define ES_SCLN LS(ES_COMM)     // ;
#define ES_SLSH LS(ES_7)        // /
#define ES_UNDS LS(ES_MINS)     // _


#define ES_AT RA(ES_Q)          // @
#define ES_BSLS RA(ES_QUOT)     // (backslash)
#define ES_CIRC RA(ES_LCBR)     // ^
#define ES_GRV RA(KC_NUHS)      // `
#define ES_NOT RA(ES_PIPE)      // ¬
#define ES_TILD RA(ES_PLUS)     // ~
