/* Copyright 2023 shantanu mahajan
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


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_Q,         KC_W,     KC_F,       KC_P,       KC_G,               KC_J,     KC_L,       KC_U,     KC_Y,    KC_QUOT,
    KC_A,         KC_R,     KC_S,       KC_T,       KC_D,               KC_H,     KC_N,       KC_E,     KC_I,    KC_O,
    KC_Z,         KC_X,     KC_C,       KC_V,       KC_B,               KC_K,     KC_M,       KC_COMM,  KC_DOT,  KC_SLSH,
    KC_LCTL,      KC_LGUI,  KC_ESC,     KC_BSPC,    KC_TAB,             KC_ENT,   KC_SPC,     KC_DEL,   KC_LALT, QK_BOOT
  )
};

#define LED1 D7
#define LED2 B0
void keyboard_post_init_user(void) {
  // Call the post init code.
  writePinHigh(LED1);
  writePinHigh(LED2);
}
