/* Copyright 2015-2017 Jack Humbert
 * Copyright 2020 Daniel Reibl <janos.daniel.reibl@protonmail.com>
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

#include QMK_KEYBOARD_H

#define _______ KC_TRNS
#define KEYMAP LAYOUT_ansi

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum LayerEnum {
_BL = 0,
_FL,
_ML
};

// because MO(_FL) will deactivate _FL after it is released, MO(_FL) + TO(_FL) can't switch _FL actually :-P 

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BL] = KEYMAP(
  KC_ESC,           KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,    KC_PSCR, KC_SLCK, KC_PAUS, \
  KC_GRAVE,KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,   KC_INS,  KC_HOME, KC_PGUP, \
  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,   KC_DEL,  KC_END,  KC_PGDN, \
  KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,                               \
  KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,            KC_UP,            \
  KC_LCTL, MO(_FL), KC_LALT,                            KC_SPC,                             KC_LALT, KC_LGUI, KC_APP,  KC_RCTL,   KC_LEFT, KC_DOWN, KC_RGHT),
[_FL] = KEYMAP(
  DM_RSTP,          DM_PLY1, DM_PLY2, DM_REC1, DM_REC2, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, \
  _______, CTRL_X_1,CTRL_X_2,CTRL_X_3,_______, _______, _______, _______, _______, _______, CTRL_X_0,_______, _______, _______,   _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, CTRL_X_U,_______, CTRL_X_O,_______, _______, _______, _______,   _______, _______, _______, \
  _______, _______, CTRL_X_S,_______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,          _______,                              \
  _______,          CTRL_X_Z,_______, USER_M2, _______, CTRL_X_B,_______, _______, _______, _______, _______,          _______,            _______,          \
  _______, _______, _______,                            CTRL_X_SPC,                         _______, _______, _______, _______,   _______, _______, _______),
[_ML] = KEYMAP(
  _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, \
  _______, KC_ACL0, KC_ACL1, KC_ACL2, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, KC_MS_U, _______, _______, _______, _______, _______, _______,   _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, KC_MS_L, KC_MS_D, KC_MS_R, _______, _______, _______,          _______,                              \
  _______,          _______, _______, _______, _______, _______, KC_BTN2, KC_BTN3, _______, _______, _______,          _______,            KC_MS_U,          \
  _______, MO(_FL), _______,                            KC_BTN1,                            _______, _______, _______, _______,   KC_MS_L, KC_MS_D, KC_MS_R),
};
