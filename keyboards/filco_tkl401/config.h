/* Copyright 2020 Daniel Reibl <janos.daniel.reibl@protonmail.com>
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

#define VENDOR_ID 0xFEED
#define PRODUCT_ID 0x002A
#define DEVICE_VER 0x0001
#define MANUFACTURER paul356
#define PRODUCT filco tkl gen2

#define MATRIX_ROWS 18
#define MATRIX_COLS 8

//                        25, 5,  16, 7,  8,  9,  10, 11, 12, 13, 27,  28, 32, 14, 23, 15, 20, 6
#define MATRIX_ROW_PINS { A0, A1, A2, A3, A4, A5, A6, A7, B0, B1, A15, B3, B4, B5, B6, B7, B8, B9 }
//                        29   31   26   30   19   21   24   22
#define MATRIX_COL_PINS { A13, A14, A10, B10, B12, B13, B14, B15 }
#define UNUSED_PINS

#define DIODE_DIRECTION COL2ROW

//#define BACKLIGHT_PIN           A15
//#define BACKLIGHT_LEVELS         5

#define MOUSEKEY_INTERVAL 32

#define TAPPING_TERM 175
