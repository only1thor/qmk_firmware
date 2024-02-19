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
         LT(1,KC_A),    KC_B,    LCTL(LALT(KC_L)),
        LT(2,KC_D),    LT(2,KC_E),    KC_F,
        LCTL(LALT(LSFT(KC_T))),    LCTL(LSFT(KC_SLSH)),    KC_RSFT
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
        KC_6,   RGB_HUI,  RGB_MOD,
        RGB_TOG,   RGB_HUD, RGB_RMOD,
        RGB_M_B,   RGB_M_T,   QK_BOOT
    ),
    [2] = LAYOUT_ortho_3x3(
        KC_6,   RGB_SPI,  RGB_MOD,
        RGB_TOG,   RGB_SPD, RGB_RMOD,
        RGB_M_B,   RGB_M_T,  KC_P3
    )
};
