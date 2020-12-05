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
}

static bool keyState = false;
bool process_record_kb(uint16_t keycode, keyrecord_t *record)
{
    switch (keycode) {
    case USER_M1:
        if (record->event.pressed) {
            SEND_STRING("#include <stdio.h>\n" \
                        "#include <stdlib.h>\n" \
                        "int main(int argc, char* argv[])\n"  \
                        "{\n" \
                        "    printf(\"Hello world\\n\");\n" \
                        "}\n");
        }
        break;
    case USER_M2:
        if (record->event.pressed) {
            SEND_STRING(SS_LCTL("k") SS_LCTL("_"));
        }
        break;
    case USER_M3:
        if (record->event.pressed) {
            SEND_STRING("I am MACRO3. How do you do?\n");
        }
        break;
    default:
        if (record->event.pressed) {
            keyState = !keyState;
            if (keyState) {
                palSetLine(C13);
            } else {
                palClearLine(C13);
            }
        }
        break;
    }
    return true;
}
