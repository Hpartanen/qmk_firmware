/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2013 Oleg Kostyuk <cub.uanic@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef ERGODOX_EZ_CONFIG_H
#define ERGODOX_EZ_CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x1307
#define DEVICE_VER      0x0001
#define MANUFACTURER    ErgoDox EZ
#define PRODUCT         ErgoDox EZ
#define DESCRIPTION     QMK keyboard firmware for Ergodox EZ

/* key matrix size */
#define MATRIX_ROWS 14
#define MATRIX_ROWS_PER_SIDE (MATRIX_ROWS / 2)
#define MATRIX_COLS 6

#define MOUSEKEY_INTERVAL       20
#define MOUSEKEY_DELAY          0
#define MOUSEKEY_TIME_TO_MAX    60
#define MOUSEKEY_MAX_SPEED      7
#define MOUSEKEY_WHEEL_DELAY 0

#define TAPPING_TOGGLE  1

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

#define TAPPING_TERM    200
#define IGNORE_MOD_TAP_INTERRUPT // this makes it possible to do rolling combos (zx) with keys that convert to other keys on hold (z becomes ctrl when you hold it, and when this option isn't enabled, z rapidly followed by x actually sends Ctrl-x. That's bad.)

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LCTL) | MOD_BIT(KC_RCTL)) || \
    keyboard_report->mods == (MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT)) \
)

/* number of backlight levels */
#define BACKLIGHT_LEVELS 3

#define LED_BRIGHTNESS_LO       15
#define LED_BRIGHTNESS_HI       255

/* ws2812 RGB LED */
#define RGB_DI_PIN D7
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 15     // Number of LEDs
#define RGBLIGHT_HUE_STEP 12
#define RGBLIGHT_SAT_STEP 255
#define RGBLIGHT_VAL_STEP 12

/* fix space cadet rollover issue */
#define DISABLE_SPACE_CADET_ROLLOVER

// #define RGB_MIDI
#define RGBW_BB_TWI

#define RGBW 1

/* "debounce" is measured in keyboard scans. Some users reported
 * needing values as high as 15, which was at the time around 50ms.
 * If you don't define it here, the matrix code will default to
 * 5, which is now closer to 10ms, but still plenty according to
 * manufacturer specs.
 *
 * Default is quite high, because of reports with some production
 * runs seeming to need it. This may change when configuration for
 * this is more directly exposed.
 */
#define DEBOUNCE    15

#define PREVENT_STUCK_MODIFIERS

#define USB_MAX_POWER_CONSUMPTION 500

// #define RGBLIGHT_COLOR_LAYER_0 0x00, 0x00, 0xFF
/* #define RGBLIGHT_COLOR_LAYER_1 0x00, 0x00, 0xFF */
/* #define RGBLIGHT_COLOR_LAYER_2 0xFF, 0x00, 0x00 */
/* #define RGBLIGHT_COLOR_LAYER_3 0x00, 0xFF, 0x00 */
/* #define RGBLIGHT_COLOR_LAYER_4 0xFF, 0xFF, 0x00 */
/* #define RGBLIGHT_COLOR_LAYER_5 0x00, 0xFF, 0xFF */
/* #define RGBLIGHT_COLOR_LAYER_6 0xFF, 0x00, 0xFF */
/* #define RGBLIGHT_COLOR_LAYER_7 0xFF, 0xFF, 0xFF */

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION
//#define DEBUG_MATRIX_SCAN_RATE

#endif
