/**
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

#ifdef VIA_ENABLE
/* VIA configuration. */
#define DYNAMIC_KEYMAP_LAYER_COUNT 7

#ifdef VIAL_ENABLE
/** Vial configuration. */
#define VIAL_KEYBOARD_UID \
  { 0x86, 0xA6, 0x20, 0x70, 0x08, 0xB1, 0x6F, 0x80 }
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }

#endif  // VIAL_ENABLE

/* Disable action features. */
#define NO_ACTION_MACRO     // Disable old-style macro handling.
#define NO_ACTION_FUNCTION  // Disable old-style function handling.
#endif                      // VIA_ENABLE


