#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BASE 0
#define _FN1 1
#define _FN2 2

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
    KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_DEL,  KC_BSPC, \
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, \
    KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT, \
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_UP, KC_RSFT, \
    MO(_FN1), KC_RCTL, KC_LALT, KC_LGUI, KC_SPC,           KC_SPC,KC_RGUI, KC_RALT, MO(_FN2), KC_LEFT, KC_DOWN, KC_RGHT
  ),

  [_FN1] = LAYOUT(
    KC_GRAVE, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_BSPC, \
    _______, _______, KC_UP,   _______, _______, _______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, _______, _______, _______, _______, \
    _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______, _______, _______,\
    _______, _______, _______, _______, _______, _______, KC_ACL2, KC_ACL1, KC_ACL0, _______, _______, KC_PGUP, _______, \
    XXXXXXX, _______, _______, _______, KC_ESC,          _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_END
  ),

  [_FN2] = LAYOUT(
    XXXXXXX, KC_SCROLLLOCK, KC_PAUSE, KC_MUTE, KC_VOLD, KC_VOLU, KC_PSCR, KC_F7,   KC_BRID, KC_BRIU, KC__MUTE, KC__VOLUP, KC__VOLDOWN, KC_DEL, KC_BSPC, \
    XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, \
    XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, \
    _______,  XXXXXXX, XXXXXXX, XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  KC_PGUP, XXXXXXX, \
    XXXXXXX,  _______, _______, _______,       XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX, _______, KC_HOME,  KC_PGDN, KC_END
  )
};
