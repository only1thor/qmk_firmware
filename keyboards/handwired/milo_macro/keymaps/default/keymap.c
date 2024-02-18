// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┐
     * │ A │ B │ C │
     * ├───┼───┼───┤
     * │ D │ E │ F │
     * ├───┼───┼───┤
     * │ G │ H │ I │
     * └───┴───┴───┘
     */
    [0] = LAYOUT_ortho_3x3(
         LT(1,KC_A),    KC_B,    KC_C,
        KC_D,    KC_E,    KC_F,
        KC_G,    KC_H,    KC_I
    ),
    /*
     * ┌───┬───┬────────────┐
     * │ A │ B │ C          │
     * ├───┼───┼────────────┤
     * │ D │ E │ F          │
     * ├───┼───┼────────────┤
     * │ G │ H │ reprogram  │
     * └───┴───┴────────────┘
     */
    [1] = LAYOUT_ortho_3x3(
        KC_6,   LT(1,KC_7),  KC_8,
        KC_3,   LT(1,KC_4), KC_5,
        KC_0,   KC_1,   QK_BOOT
    )
};
