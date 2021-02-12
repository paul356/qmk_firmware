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

#include "filco_tkl401.h"

void keyboard_post_init_user(void) {
    palSetLineMode(C13, PAL_MODE_OUTPUT_PUSHPULL);
    palClearLine(C13);
}

static bool keyState = false;
bool process_record_kb(uint16_t keycode, keyrecord_t *record)
{
    switch (keycode) {
    case CTRL_X_1:
        if (record->event.pressed) {
            SEND_STRING(SS_LCTL("x") "1");
        }
        break;
    case CTRL_X_2:
        if (record->event.pressed) {
            SEND_STRING(SS_LCTL("x") "2");
        }
        break;
    case CTRL_X_3:
        if (record->event.pressed) {
            SEND_STRING(SS_LCTL("x") "3");
        }
        break;
    case CTRL_X_0:
        if (record->event.pressed) {
            SEND_STRING(SS_LCTL("x") "0");
        }
        break;
    case CTRL_X_U:
        if (record->event.pressed) {
            SEND_STRING(SS_LCTL("x") "u");
        }
        break;
    case CTRL_X_O:
        if (record->event.pressed) {
            SEND_STRING(SS_LCTL("x") "o");
        }
        break;
    case CTRL_X_S:
        if (record->event.pressed) {
            SEND_STRING(SS_LCTL("x") "s");
        }
        break;
    case CTRL_X_Z:
        if (record->event.pressed) {
            SEND_STRING(SS_LCTL("x") "z");
        }
        break;
    case USER_M2:
        if (record->event.pressed) {
            SEND_STRING(SS_LCTL("k") SS_LCTL("_"));
        }
        break;
    case CTRL_X_B:
        if (record->event.pressed) {
            SEND_STRING(SS_LCTL("x") "b");
        }
        break;
    case CTRL_X_SPC:
        if (record->event.pressed) {
            SEND_STRING(SS_LCTL("x") " ");
        }
        break;
    case KC_CAPS:
        if (record->event.pressed) {
            keyState = !keyState;
            if (keyState) {
                palSetLine(C13);
            } else {
                palClearLine(C13);
            }
        }
        break;
    default:
        break;
    }
    return true;
}
