
 /* Copyright 2021 Dane Evans
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
  // SOFLE RGB
#include <stdio.h>

#include QMK_KEYBOARD_H
#include "keymap_finnish.h"

#define HSV_OVERRIDE_HELP(h, s, v, Override) h, s , Override
#define HSV_OVERRIDE(hsv, Override) HSV_OVERRIDE_HELP(hsv,Override)

enum sofle_layers {
    _BASE = 0,
    _CLMK,
    _GAME,
    _GNUM,
    _SYM,
    _NAV,
    _FUN
};

#define MO_SYM  MO(_SYM)
#define MO_NAV  MO(_NAV)
#define MO_FUN  MO(_FUN)
#define MO_GNUM MO(_GNUM)
#define TG_CLMK TG(_CLMK)
#define TG_GAME TG(_GAME)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, TG_CLMK, TG_GAME,
  KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                            KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    FI_QUOT,
  KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                            KC_H,    KC_J,    KC_K,    KC_L,    FI_ODIA, FI_ADIA,
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_MUTE,       KC_MPLY, KC_N,    KC_M,    FI_COMM, FI_DOT,  FI_MINS, KC_RSFT,
                    KC_LGUI, KC_LALT, KC_LCTL, MO_SYM,  KC_SPC,        KC_ENT,  MO_NAV,  KC_RCTL, KC_RALT, KC_RGUI
),

[_GAME] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                         _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                         _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                         _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______, _______, _______,
                    _______, _______, _______, MO_GNUM, _______,       _______, _______, _______, _______, _______
),

[_GNUM] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                         _______, _______, _______, _______, _______, _______,
  _______, FI_9,    FI_8,    FI_7,    FI_6,    FI_5,                            _______, _______, _______, _______, _______, _______,
  _______, FI_0,    FI_1,    FI_2,    FI_3,    FI_4,                            _______, _______, _______, _______, _______, _______,
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______,       _______, _______, _______, _______, _______, _______, _______,
                    _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______
),

[_CLMK] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                         _______, _______, _______, _______, _______, _______,
  _______, KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                            KC_J,    KC_L,    KC_U,    KC_Y,    FI_ODIA, _______,
  _______, KC_A,    KC_R,    KC_S,    KC_T,    KC_G,                            KC_M,    KC_N,    KC_E,    KC_I,    FI_O,    FI_ADIA,
  _______, KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,    _______,       _______, KC_K,    KC_H,    FI_COMM, FI_DOT,  FI_MINS, _______,
                    _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______
),

[_SYM] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                         _______, _______, _______, _______, _______, _______,
  _______, XXXXXXX, FI_PERC, FI_DLR,  FI_EURO, XXXXXXX,                         XXXXXXX, FI_TILD, FI_CIRC, FI_DQUO,  FI_GRV, FI_QUOT,
  _______, FI_LABK, FI_LCBR, FI_LBRC, FI_LPRN, FI_BSLS,                         FI_SLSH, FI_RPRN, FI_RBRC, FI_RCBR, FI_RABK, XXXXXXX,
  _______, FI_EXLM, FI_AT,   FI_HASH, FI_AMPR, FI_PIPE, _______,       _______, FI_ASTR, FI_EQL,  FI_PLUS, FI_MINS, FI_QUES, _______,
                    _______, _______, _______, _______, _______,        KC_TAB, _______, _______, _______, _______
),

[_NAV] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                         _______, _______, _______, _______, _______, _______,
  _______, FI_COMM, FI_7,    FI_8,    FI_9,    FI_MINS,                         KC_PGUP, XXXXXXX, KC_UP,   KC_DEL,  KC_PSCR, XXXXXXX,
  _______, FI_DOT,  FI_4,    FI_5,    FI_6,    FI_PLUS,                         KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, XXXXXXX,
  _______, FI_0,    FI_1,    FI_2,    FI_3,    FI_EQL,  _______,       _______, KC_INS,  KC_HOME, XXXXXXX, KC_END,  XXXXXXX, _______,
                    _______, _______, _______, _______, KC_BSPC,       _______, _______, _______, _______, _______
),

[_FUN] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                         _______, _______, _______, _______, _______, _______,
  _______, XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX,                         XXXXXXX, KC_F7,   KC_F8,   KC_F9,   KC_F10,  XXXXXXX,
  _______, XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX,                         XXXXXXX, KC_F4,   KC_F5,   KC_F6,   KC_F11,  XXXXXXX,
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,       _______, XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F12,  _______,
                    _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______
  )
};

layer_state_t layer_state_set_user(layer_state_t state) {
   return update_tri_layer_state(state, _SYM, _NAV, _FUN);
}

#ifdef OLED_ENABLE

static void render_logo(void) {
    // Custom logo based on the PCB gecko
    static const char PROGMEM raw_logo[] = {
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,192,240,  8,  6,  2,  1,  0,  0,  0,  0,  0,  0,128,  0,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,224,248, 28,  6,  2,  3,  1,  1,  1,225,255, 62,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,224,120, 28,206,103, 59, 15,  0,  0,192,240,120, 28,207,127, 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  7, 63,120,240,192,128,128,  0, 64, 96,112,248,255,222,207, 78, 10,  0,  0,  0,128,192,192, 96,124,112,120, 32,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,129,  7, 15, 28, 60, 56,112,112,224,193,131,  1,  0,  0,  0,  0,128,128,  0,224,240, 16, 24,240, 96,  0,  0,128,224,248,191, 15, 13,  6,  3,  1,  0,128,224,252,223,103, 49, 12,  7,  1,192,224,112, 48, 24,152,248,112,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0, 80,112,112,240,120,252, 12, 28, 56,113,227,119,127, 62, 30, 31, 63, 63, 61,124,124,124,124,124,252,253,255,127,124,124,124,124,124, 56, 56, 16,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 62,255,255,193,128,  0,  0,  0,  0,  0,128,128,193,127, 63,  0,  0, 56,254,255,193, 64, 99, 55, 28, 30, 19, 16,232,252,127,  7,  3,255,  6, 12, 12,  4,  4,  4,127,255,193,192, 64, 32, 16,126,255,199,132,134,130,195, 65, 32, 48,  8,  4,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64, 63,255, 57,112, 16,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  3,  3,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,126,255,207, 96, 56, 15,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    };
    oled_write_raw_P(raw_logo, sizeof(raw_logo));
}


static void render_status(void) {
    // Print current layer
    oled_write_ln_P(PSTR("LAYER"), false);
    switch (get_highest_layer(layer_state)) {
        case _BASE:
            oled_write_P(PSTR("BASE\n"), false);
            break;
        case _CLMK:
            oled_write_P(PSTR("CLMK\n"), false);
            break;
        case _GAME:
            oled_write_P(PSTR("GAME\n"), false);
            break;
        case _GNUM:
            oled_write_P(PSTR("GNUM\n"), false);
            break;
        case _NAV:
            oled_write_P(PSTR("NAV\n"), false);
            break;
        case _SYM:
            oled_write_P(PSTR("SYM\n"), false);
            break;
        case _FUN:
            oled_write_P(PSTR("FUN\n"), false);
            break;
        default:
            oled_write_ln_P(PSTR("???\n"), false);
    }
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
        // return OLED_ROTATION_180;
    }
    return rotation;
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        render_status();
        // render_logo();
    } else {
        render_logo();
    }
    return false;
}

#endif

#ifdef ENCODER_ENABLE

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_BASE] = { ENCODER_CCW_CW(KC_VOLD,  KC_VOLU),       ENCODER_CCW_CW(KC_PGUP,  KC_PGDN) },
    [_GAME] = { ENCODER_CCW_CW(_______,  _______),       ENCODER_CCW_CW(_______,  _______) },
    [_GNUM] = { ENCODER_CCW_CW(_______,  _______),       ENCODER_CCW_CW(_______,  _______) },
    [_CLMK] = { ENCODER_CCW_CW(_______,  _______),       ENCODER_CCW_CW(_______,  _______) },
    [_SYM]  = { ENCODER_CCW_CW(_______,  _______),       ENCODER_CCW_CW(S(KC_TAB), KC_TAB) },
    [_NAV]  = { ENCODER_CCW_CW(LCTL(KC_Z), LCTL(KC_Y)),  ENCODER_CCW_CW(_______,  _______) },
    [_FUN]  = { ENCODER_CCW_CW(_______,  _______),       ENCODER_CCW_CW(_______,  _______) }
};
#endif

#endif
