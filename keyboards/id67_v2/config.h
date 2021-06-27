/*
Copyright 2021 Logan Walls

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

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0x6964
#define PRODUCT_ID   0x0067
#define DEVICE_VER   0x0002
#define MANUFACTURER IDOBAO
#define PRODUCT      IDOBAO ID67 V2

/* key matrix size */
#define MATRIX_ROWS 15
#define MATRIX_COLS 5

/* Keyboard Matrix Assignments */
#define MATRIX_ROW_PINS { C7, F6, F5, F4, F1, B7, D5, D1, D2, D3, D4, D0, D6, D7, B4 }
#define MATRIX_COL_PINS { B0, B1, B2, B3, F7 }
#define UNUSED_PINS
#define DIODE_DIRECTION ROW2COL

/* RGB */
#ifdef RGB_MATRIX_ENABLE
#    define RGB_DI_PIN F0
#    define DRIVER_LED_TOTAL 77
#endif

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
