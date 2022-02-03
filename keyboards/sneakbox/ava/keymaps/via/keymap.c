/*
Copyright 2021 Bryan Ong

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

#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN,
    _L3,
    _L4
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT_ava_split_bs(
        KC_ESC,    KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,            KC_7,    KC_8,    KC_9,    KC_0,       KC_MINS,   KC_EQL,     KC_BSPC,    KC_BSPC,
        KC_PGUP,   KC_TAB,             KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,            KC_Y,    KC_U,    KC_I,    KC_O,       KC_P,      KC_LBRC,    KC_RBRC,    KC_BSLS,
        KC_PGDN,   KC_CAPS,            KC_A,    KC_S,    KC_D,    KC_F,    KC_G,            KC_H,    KC_J,    KC_K,    KC_L,       KC_SCLN,   KC_QUOT,                KC_ENT,
        KC_END,    KC_LSFT,            KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,            KC_B,    KC_N,    KC_M,    KC_COMM,    KC_DOT,    KC_SLSH,    KC_UP,      KC_DEL,
                   KC_LCTL,   KC_LGUI,                            KC_LALT, KC_SPC,          KC_SPC,  LT(_FN, KC_SPC),                         KC_LEFT,    KC_DOWN,    KC_RGHT),
    [_FN] = LAYOUT_ava_split_bs(
        KC_TRNS,   KC_TRNS,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,       KC_F8,   KC_F9,   KC_F10,  KC_F11,     KC_F12,                KC_TRNS,    KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS, KC_UP,   KC_TRNS, KC_TRNS, KC_TRNS,                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,   RGB_RMOD,   RGB_MOD,    RGB_TOG,
        KC_TRNS,   KC_TRNS,   KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS,                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    RGB_VAD,   RGB_VAI,                KC_TRNS,
        RESET,     KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    RGB_SAD,   RGB_SAI,    KC_TRNS,    RGB_HUI,
                   KC_TRNS,   KC_TRNS,                   KC_TRNS, KC_TRNS,                       KC_TRNS, KC_TRNS,                                 KC_TRNS,    KC_TRNS,    KC_TRNS),
    [_L3] = LAYOUT_ava_split_bs(
        KC_TRNS,   KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,               KC_TRNS,    KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,   KC_TRNS,                KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,
                   KC_TRNS,   KC_TRNS,                   KC_TRNS, KC_TRNS,                       KC_TRNS, KC_TRNS,                                 KC_TRNS,    KC_TRNS,    KC_TRNS),
    [_L4] = LAYOUT_ava_split_bs(
        KC_TRNS,   KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,               KC_TRNS,    KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,   KC_TRNS,                KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,
                   KC_TRNS,   KC_TRNS,                   KC_TRNS, KC_TRNS,                       KC_TRNS, KC_TRNS,                                 KC_TRNS,    KC_TRNS,    KC_TRNS),
};

static const uint16_t ENCODER_TOGGLE_KEY = KC_MHEN;
static const uint16_t ALFRED_MOD_KEY = LT(0, KC_NO);
// static const uint16_t UC_SHRG = LT(4, KC_NO);

enum Mode {
    SCROLL,
    WINDOW,
    APPS,

    _NUM_MODES,
};

static enum Mode cur_mode = SCROLL;
static enum Mode throttle = SCROLL;


bool encoder_update_user(uint8_t index, bool clockwise) {
    switch (cur_mode) {
        case SCROLL:
            tap_code(clockwise ? KC_MS_WH_DOWN : KC_MS_WH_UP);
            break;

        case WINDOW:
            if(throttle == 0 ) {
                tap_code16(clockwise ? LGUI(KC_GRV) : LSG(KC_GRV));
            }
            throttle = (throttle + 1) % 8;
            break;
        case APPS:
            if(throttle == 0 ) {
                tap_code16(clockwise ? LSG(KC_TAB) : LGUI(KC_TAB));
            }
            throttle = (throttle + 1) % 8;
            break;

        default:
            break;
    }
    return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch( keycode ) {
        case ALFRED_MOD_KEY:
            if (record->tap.count && record->event.pressed) {
                tap_code16(C(KC_SPC));
            } else if (record->event.pressed) {
                register_code(KC_LCTL);
                register_code(KC_LALT);
            } else {
                unregister_code(KC_LCTL);
                unregister_code(KC_LALT);
            }
        return false;
        case ENCODER_TOGGLE_KEY:
            if (record->event.pressed) {
                cur_mode = (cur_mode + 1) % _NUM_MODES;
            }
        return false;
        // case UC_SHRG:  // ¯\_(ツ)_/¯
        //     if (record->event.pressed) {
        //         send_unicode_hex_string("175 92 95 40 12484 41 95 47 175");
        //     }
        // return false;

    }
    return true;
}
//send_unicode_hex_string("175 92 95 40 12484 41 95 47 175");

static uint8_t top = 1;
static uint8_t left = 1;
static uint8_t right = 1;

void keyboard_pre_init_user(void) {
  setPinOutput(D4);
  setPinOutput(D6);
  setPinOutput(D7);
}

layer_state_t layer_state_set_user(layer_state_t state) {
  switch (get_highest_layer(state)) {
  case _FN:
    top = 0;
    break;
  case _L3:
    left = 0;
    break;
  case _L4:
    right = 0;
    break;
  default:
    top = 1;
    left = 1;
    right = 1;
    break;
  }

  return state;
}

bool led_update_user(led_t usb_led) {
  writePin(D4, !right);
  writePin(D6, !left);
  writePin(D7, !top);
  return false;
}
