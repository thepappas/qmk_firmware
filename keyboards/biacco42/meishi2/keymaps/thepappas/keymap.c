/* Copyright 2019 Biacco42
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
#include "thepappas.h"

enum layer_names {
    Base,
    Macro,
    FN,
    Nav,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [Base] = LAYOUT( /* Base */
    KVM1, KVM2, KC_WAKE, KC_SLEP
  ),
  [Macro] = LAYOUT(
    LCTL(KC_Z),  LCTL(KC_X),  LCTL(KC_C), LCTL(KC_V)
  ),
  [FN] = LAYOUT(
    KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS
  ),
  [Nav] = LAYOUT(
    KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS
  ),
};
