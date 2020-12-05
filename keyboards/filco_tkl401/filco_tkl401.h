/*
Copyright 2020 QMK Community, Janos Daniel Reibl <janos.daniel.reibl@protonmail.com> @riblee

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

#include "quantum.h"

enum CustomKeyCode {
    USER_M1 = SAFE_RANGE,
    USER_M2,
    USER_M3
};

#define LAYOUT_ansi( \
    KESC,       K0F1, K0F2, K0F3, K0F4, K0F5, K0F6, K0F7, K0F8, K0F9, KF10, KF11, KF12,    KPRS, KSLK, KBRK, \
    KGRV, K001, K002, K003, K004, K005, K006, K007, K008, K009, K000, KMIN, KEQL, BSPS,    INST, HOME, PGUP, \
    KTAB, K00Q, K00W, K00E, K00R, K00T, K00Y, K00U, K00I, K00O, K00P, LBRC, RBRC, BSLS,    KDEL, KEND, PGDN, \
    CAPL, K00A, K00S, K00D, K00F, K00G, K00H, K00J, K00K, K00L, SCLN, QUOT,       KENT,                      \
    LSHT,       K00Z, K00X, K00C, K00V, K00B, K00N, K00M, COMA, KDOT, SLSH,       RSHT,          K0UP,       \
    LCTL, LGUI, LALT,                   SPAC,                   RALT, RGUI, KAPP, RCTL,    LEFT, KDWN, RGHT  \
) \
{ \
    { KC_NO, RCTL , KC_NO, KC_NO, LCTL , KBRK , KC_NO, K0F5  }, \
    { KF12 , KENT , BSPS , BSLS , K0F9 , KC_NO, KF11 , KF10  }, \
    { KC_NO, KC_NO, KC_NO, RALT , KC_NO, KSLK , LALT , KPRS  }, \
    { KAPP , KDOT , K0F7 , K00L , K0F8 , K00O , KC_NO, K009  }, \
    { KC_NO, COMA , RBRC , K00K , KEQL , K00I , K0F6 , K008  }, \
    { K00N , K00M , K00Y , K00J , K006 , K00U , K00H , K007  }, \
    { K00B , K00V , K00T , K00F , K005 , K00R , K00G , K004  }, \
    { KC_NO, K00C , K0F3 , K00D , K0F2 , K00E , K0F4 , K003  }, \
    { KC_NO, K00X , CAPL , K00S , K0F1 , K00W , KC_NO, K002  }, \
    { KC_NO, K00Z , KTAB , K00A , KGRV , K00Q , KESC , K001  }, \
    { KDWN , KC_NO, KC_NO, KC_NO, KDEL , KC_NO, SPAC , KC_NO }, \
    { RGHT , KC_NO, KC_NO, KC_NO, INST , KC_NO, KC_NO, KC_NO }, \
    { KC_NO, KC_NO, KC_NO, RGUI , KC_NO, KC_NO, KC_NO, KC_NO }, \
    { KC_NO, KC_NO, LSHT , RSHT , KC_NO, KC_NO, KC_NO, KC_NO }, \
    { LEFT , KC_NO, KC_NO, KC_NO, HOME , KC_NO, K0UP , KEND  }, \
    { KC_NO, KC_NO, LGUI , KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, PGUP , KC_NO, KC_NO, PGDN  }, \
    { SLSH , KC_NO, LBRC , SCLN , KMIN , K00P , QUOT , K000  }, \
}
