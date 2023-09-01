/*
 * Copyright 2022 Charly Delay <charly@codesink.dev> (@0xcharly)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

// wiring of each half
#define MATRIX_COL_PINS { C6, D7, E6, B4, B5 }
#define MATRIX_ROW_PINS { B1, B3, B2, B6 }

#define MATRIX_COL_PINS_RIGHT { C6, D7, E6, B4, B5 }
#define MATRIX_ROW_PINS_RIGHT { F5, F6, F7, B6 }

/* Handedness. */
// #define MASTER_RIGHT

#define USE_SERIAL
#define MASTER_RIGHT
//#define EE_HANDS

/* serial.c configuration (for split keyboard). */
#define SOFT_SERIAL_PIN D1

/* PMW3360 settings. */
#define POINTING_DEVICE_CS_PIN F4
#define NO_ACTION_ONESHOT

#undef PMW33XX_CS_PIN

#define PMW33XX_CS_PIN F4
#define PMW33XX_CS_PIN_RIGHT F4
#undef ROTATIONAL_TRANSFORM_ANGLE
#undef POINTING_DEVICE_INVERT_X
//define Wimads trackball configuration
#define CHARYBDIS_DRAGSCROLL_REVERSE_Y
#define CHARYBDIS_MINIMUM_SNIPING_DPI 200
#define CHARYBDIS_MINIMUM_DEFAULT_DPI 350
#define POINTING_DEVICE_INVERT_Y
#define ROTATIONAL_TRANSFORM_ANGLE 0

/*
 * Tap-or-Hold decision modes.
 *
 * Note that the following flags behave differently when combined (ie. when 2 or
 * more are enabled).
 *
 * See bit.ly/tap-or-hold for a visual explanation of the following tap-or-hold
 * decision modes.
 */

/**
 * Faster tap-hold trigger.
 *
 * Without `PERMISSIVE_HOLD`, within `TAPPING_TERM`:
 *   Mod(a)🠗 e🠗 e🠕 Mod(a)🠕 ➞ ae
 * With `PERMISSIVE_HOLD`, within `TAPPING_TERM`:
 *   Mod(a)🠗 e🠗 e🠕 Mod(a)🠕 ➞ Mod+e
 *
 * See docs.qmk.fm/using-qmk/software-features/tap_hold#permissive-hold
 */
#define PERMISSIVE_HOLD

/**
 * Prevent normal rollover on alphas from accidentally triggering mods.
 *
 * Ignores key presses that interrupt a mod-tap.  Must-have for Home Row mod.
 *
 * Without `IGNORE_MOD_TAP_INTERRUPT`, within `TAPPING_TERM`:
 *   Mod(a)🠗 e🠗 Mod(a)🠕 e🠕 ➞ Mod+e
 * With `IGNORE_MOD_TAP_INTERRUPT`, within `TAPPING_TERM`:
 *   Mod(a)🠗 e🠗 Mod(a)🠕 e🠕 ➞ ae
 *
 * See docs.qmk.fm/using-qmk/software-features/tap_hold#ignore-mod-tap-interrupt
 */
#define IGNORE_MOD_TAP_INTERRUPT
