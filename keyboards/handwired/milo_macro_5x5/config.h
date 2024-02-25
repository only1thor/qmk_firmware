// Copyright 2024 thor (@Only1Thor)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define WS2812_DI_PIN F4
#ifdef WS2812_DI_PIN
#define RGBLED_NUM  6 // Replace with the actual number of LEDs in your strip
#define RGBLIGHT_HUE_STEP  20
#define RGBLIGHT_SAT_STEP  20
#define RGBLIGHT_VAL_STEP  20
/*
#define RGBLIGHT_SLEEP
#define RGBLIGHT_EFFECT_KNIGHT_LENGTH  3
#define RGBLIGHT_EFFECT_SNAKE_LENGTH  2
*/
#endif
/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
