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

// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

//     [_BASE] = LAYOUT(
//         KC_AUDIO_MUTE,
//         KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,          KC_5,    KC_6,    KC_7,          KC_8,    KC_9,    KC_0,     KC_BSPC,    KC_NLCK,    KC_SLSH,    KC_PAST,    KC_MINS,
//         KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,          KC_T,    KC_Y,    KC_U,          KC_I,    KC_O,    KC_P,     KC_DEL,     KC_P7,      KC_P8,      KC_P9,      KC_PPLS,
//         KC_CAPS,   KC_A,    KC_S,    KC_D,    KC_F,          KC_G,    KC_H,    KC_J,          KC_K,    KC_L,    KC_SCLN,  KC_QUOT,    KC_P4,      KC_P5,      KC_P6,      KC_EQL,
// 	       KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,          KC_B,    KC_N,    KC_M,          KC_COMM, KC_DOT,  KC_SLSH,  KC_ENT,     KC_P1,      KC_P2,      KC_P3,      KC_PENT,
//         KC_GRV,    KC_LCTL, KC_LALT, KC_LGUI, LT(1,KC_SPC),  KC_SPC,  KC_SPC,  LT(2,KC_SPC),  KC_LEFT, KC_DOWN, KC_UP,    KC_RGHT,    KC_P0,      KC_P0,      KC_PDOT,    KC_PENT),
//     [_FN] = LAYOUT(
//         KC_TRNS,
//         KC_GRV,    KC_F1,   KC_F2,   KC_F3,   KC_F4,         KC_F5,   KC_F6,   KC_F7,         KC_F8,   KC_LPRN, KC_RPRN,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    RESET,
//         KC_TRNS,   KC_F9,   KC_F10,  KC_F11,  KC_F12,        KC_TRNS, KC_TRNS, KC_MINS,       KC_EQL,  KC_LCBR, KC_RCBR,  KC_PIPE,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
//         KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
//         KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_HOME, KC_END,   KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
//         KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,       KC_MNXT, KC_VOLD, KC_VOLU,  KC_MPLY,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS),
//     [_L3] = LAYOUT(
//         KC_TRNS,
//         KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
//         KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
//         KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
//         KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_HOME, KC_END,   KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
//         KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,       KC_MNXT, KC_VOLD, KC_VOLU,  KC_MPLY,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS),
//     [_L4] = LAYOUT(
//         KC_TRNS,
//         KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
//         KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
//         KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
//         KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
//         KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS),
// };
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT(
        KC_ESC,
        KC_1,      KC_2,      KC_3,      KC_4,     KC_5,     KC_6,     KC_7,        KC_8,         KC_9,         KC_0,      KC_MINS,   KC_EQL,    KC_LBRC,   KC_RBRC,   KC_GRV,    KC_BSPC,
        KC_TAB,    KC_Q,      KC_W,      KC_E,     KC_R,     KC_T,     KC_P4,       KC_P5,        KC_P6,        KC_Y,      KC_U,      KC_I,      KC_O,      KC_P,      KC_BSLS,   KC_ENT,
        KC_CAPS,   KC_A,      KC_S,      KC_D,     KC_F,     KC_G,     KC_P1,       KC_P2,        KC_P3,        KC_H,      KC_J,      KC_K,      KC_L,      KC_SCLN,   KC_QUOT,   KC_ENT,
        KC_LSFT,   KC_Z,      KC_X,      KC_C,     KC_V,     KC_B,     KC_P0,       KC_P0,        KC_PDOT,      KC_N,      KC_M,      KC_COMM,   KC_DOT,    KC_SLSH,   KC_UP,     KC_RSFT,
        MO(1),     KC_LCTL,   KC_LALT,   KC_LGUI,  KC_SPC,   KC_SPC,   C(KC_LEFT),  LT(0,KC_NO),  C(KC_RGHT),   KC_SPC,    KC_SPC,    KC_RGUI,   KC_RCTL,   KC_LEFT,   KC_DOWN,   KC_RGHT
    ),
    [_FN] = LAYOUT(
        KC_MHEN,
        KC_F1,     KC_F2,     KC_F3,     KC_F4,    KC_F5,    KC_F6,    KC_F7,       KC_F8,        KC_F9,        KC_F10,    KC_F11,    KC_F12,    KC_F13,    RESET,     KC_F15,    KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,     KC_TRNS,      KC_TRNS,      KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,     KC_TRNS,      KC_TRNS,      KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_MPLY,   KC_F9,     KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,     KC_TRNS,      KC_TRNS,      KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS,   TO(2),     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,     KC_TRNS,      KC_TRNS,      KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS
    ),
    [_L3] = LAYOUT(
        KC_TRNS,
        KC_TRNS,  KC_TRNS,    KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_NLCK,  KC_P7,       KC_P8,        KC_P9,        KC_BSPC,   KC_PMNS,   KC_PPLS,   KC_LPRN,   KC_RPRN,   KC_TRNS,   KC_TRNS,
        KC_TRNS,  KC_TRNS,    KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,     KC_TRNS,      KC_TRNS,      KC_PPLS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_PSLS,   KC_TRNS,
        KC_TRNS,  KC_TRNS,    KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,     KC_TRNS,      KC_TRNS,      KC_PPLS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,  KC_TRNS,    KC_PAST,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,     KC_TRNS,      KC_TRNS,      KC_PPLS,   KC_TRNS,   KC_LPRN,   KC_RPRN,   KC_PSLS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,  KC_TRNS,    TO(0),     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_PMNS,     KC_PSLS,      KC_PAST,      KC_PENT,   KC_PENT,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS
    ),
    [_L4] = LAYOUT(
        KC_TRNS,
        KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS
    ),
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

bool led_update_kb(led_t led_state) {
    bool res = led_update_user(led_state);
    if(res) {
        writePin(B1, led_state.caps_lock);
    }
    return res;
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
