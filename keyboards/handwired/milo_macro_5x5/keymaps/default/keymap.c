// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌─────┬───┬───┬───┬───┐
     * │ A   │ B │ C │ D │ E │
     * ├─────┼───┼───┼───┼───┤
     * │ TAB │ B │ W │ D │ E │
     * ├─────┼───┼───┼───┼───┤
     * │ A   │ A │ S │ D │ E │
     * ├─────┼───┼───┼───┼───┤
     * │ A   │ B │ C │ D │ E │
     * ├─────┼───┼───┼───┼───┤
     * │ A   │ B │ C │ D │ E │
     * └─────┴───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_5x5(
      KC_1,
      KC_2,
      KC_3,
      KC_4,
      KC_5,
      KC_TAB,
      KC_Q,
      KC_W,
      KC_E,
      KC_R,
      KC_LSFT,
      KC_A,
      KC_S,
      KC_D,
      KC_F,
      KC_LCTL,
      KC_Z,
      KC_X,
      KC_C,
      KC_V,
      LT(3,KC_A),
      KC_LGUI,
      KC_LALT,
      LT(2,KC_D),
      LT(1,KC_SPC)

    ),
    /*
     * ┌─────┬────┬────┬────┬────┐
     * │ A   │ B  │ C  │ D  │ E  │
     * ├─────┼────┼────┼────┼────┤
     * │ TAB │ B  │ F5 │ D  │ E  │
     * ├─────┼────┼────┼────┼────┤
     * │ F1  │ F2 │ F3 │ F4 │ E  │
     * ├─────┼────┼────┼────┼────┤
     * │ A   │ B  │ C  │ D  │ E  │
     * ├─────┼────┼────┼────┼────┤
     * │ A   │ B  │ C  │ D  │ E  │
     * └─────┴────┴────┴────┴────┘
     */
    [1] = LAYOUT_ortho_5x5(
        KC_A,    KC_B,    KC_C,    KC_D,    KC_E,
        KC_TAB,  KC_B,    KC_F5,   KC_D,    KC_E,
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_E,
        KC_A,    KC_B,    KC_C,    KC_D,    KC_E,
        KC_A,    KC_B,    KC_C,    KC_D,    LT(1,KC_SPC)
    ),
    /*
     * ┌─────┬────┬────┬────┬────┐
     * │ A   │ B  │ C  │ D  │ E  │
     * ├─────┼────┼────┼────┼────┤
     * │ TAB │ B  │ F5 │ D  │ E  │
     * ├─────┼────┼────┼────┼────┤
     * │ F1  │ F2 │ F3 │ F4 │ E  │
     * ├─────┼────┼────┼────┼────┤
     * │ A   │ B  │ C  │ D  │ E  │
     * ├─────┼────┼────┼────┼────┤
     * │ A   │ B  │ C  │ D  │ E  │
     * └─────┴────┴────┴────┴────┘
     */
    [2] = LAYOUT_ortho_5x5(
        KC_A,    KC_B,    KC_C,    KC_D,    KC_E,
        KC_TAB,  KC_B,    KC_F5,   KC_D,    KC_E,
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_E,
        KC_A,    KC_B,    KC_C,    KC_D,    KC_E,
        KC_A,    KC_B,    KC_C,    KC_D,    LT(1,KC_SPC)
    ),
    /*
     * ┌─────┬────┬────┬────┬────┐
     * │ A   │ B  │ C  │ D  │ E  │
     * ├─────┼────┼────┼────┼────┤
     * │ TAB │ B  │ F5 │ D  │ E  │
     * ├─────┼────┼────┼────┼────┤
     * │ F1  │ F2 │ F3 │ F4 │ E  │
     * ├─────┼────┼────┼────┼────┤
     * │ A   │ B  │ C  │ D  │ E  │
     * ├─────┼────┼────┼────┼────┤
     * │ A   │ B  │ C  │ D  │ E  │
     * └─────┴────┴────┴────┴────┘
     */
    [3] = LAYOUT_ortho_5x5(
      KC_A,
      KC_B,
      KC_C,
      KC_D,
      RESET,
      KC_TAB,
      KC_B,
      KC_F5,
      KC_D,
      RGB_SPI,
      KC_F1,
      KC_F2,
      KC_F3,
      RGB_M_SN,
      RGB_SPD,
      KC_A,
      RGB_MOD,
      RGB_HUI,
      RGB_M_K,
      RGB_SAI,
      KC_A,
      RGB_TOG,
      RGB_HUD,
      RGB_M_B,
      RGB_SAD

    )
};
