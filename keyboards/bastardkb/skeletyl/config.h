/*
 * Copyright 2021 Quentin LEBASTARD <qlebastard@gmail.com>
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

#include "config_common.h"

/* Key matrix configuration. */
#define MATRIX_ROWS 8 // Rows are doubled-up.
#define MATRIX_COLS 5

#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed. */
#define DEBOUNCE 5

// Enable use of pointing device on slave split.
#define SPLIT_POINTING_ENABLE

// Pointing device is on the right split.
#define POINTING_DEVICE_RIGHT

// Invert X axis on mouse reports.
#define POINTING_DEVICE_INVERT_X

#ifdef POINTING_DEVICE_ENABLE
// Enable pointer acceleration, which increases the speed by ~2x for large
// displacement, while maintaining 1x speed for slow movements.  See also:
// - `CHARYBDIS_POINTER_ACCELERATION_FACTOR`
#define CHARYBDIS_POINTER_ACCELERATION_ENABLE

// Automatically enable the pointer layer when moving the trackball.  See also:
// - `CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_TIMEOUT_MS`
// - `CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_THRESHOLD`
#define CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_ENABLE
#endif  // POINTING_DEVICE_ENABLE

