#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _SYMB 1

// Shortcut to make keymap more readable
#define SYM_L   MO(_SYMB)

#define KC_ALES LALT_T(KC_ESC)
#define KC_ALSP LALT_T(KC_SPC)

#define KC_RGENT MT(KC_RGUI, KC_ENT)
#define KC_LGSPC GUI_T(KC_SPC)
#define KC_LGESC GUI_T(KC_ESC)
#define KC_LGDOT GUI_T(KC_DOT)

#define KC_LAENT LT(_SYMB, KC_ENT)
#define KC_LAESC LT(_SYMB, KC_ESC)
#define KC_LAMIN LT(_SYMB, KC_MINS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐                ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GESC ,KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5    ,KC_6    ,                 KC_GRV  ,KC_7    ,KC_8    ,KC_9    ,KC_0    ,KC_MINS ,KC_BSPC ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB  ,KC_Q    ,KC_W    ,KC_E    ,KC_R    ,KC_T    ,KC_LAMIN,                 KC_Y    ,KC_U    ,KC_I    ,KC_O    ,KC_P    ,KC_LBRC ,KC_RBRC ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┘                └────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL ,KC_A    ,KC_S    ,KC_D    ,KC_F    ,KC_G    ,                                   KC_H    ,KC_J    ,KC_K    ,KC_L    ,KC_QUOT ,KC_ENT  ,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                                  ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT ,KC_Z    ,KC_X    ,KC_C    ,KC_V    ,KC_B    ,                                   KC_BSPC ,KC_N    ,KC_M    ,KC_COMM ,KC_DOT  ,KC_BSLS ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                ┌────────┼────────┼────────┴────────┼────────┼────────┼────────┤
     KC_LAESC,KC_GRV  ,KC_LALT ,KC_LGUI ,KC_LGDOT,KC_ALSP ,KC_SLSH ,                 KC_SCLN ,KC_EQL  ,KC_LAENT,KC_LEFT ,KC_UP,   KC_DOWN ,KC_RGHT
  //└────────┴────────┴────────┴────────┴────────┴────────┴────────┘                └────────┴────────┴────────┴────────┴────────┴────────┴────────┘
  ),

  [_SYMB] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐                ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRV  ,KC_F1   ,KC_F2   ,KC_F3   ,KC_F4   ,KC_F5   ,KC_F6   ,                 _______ ,KC_F7   ,KC_F8   ,KC_F9   ,KC_F10  ,KC_F11  ,KC_F12  ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,KC_DQUO ,KC_UP   ,KC_GRV  ,KC_ASTR ,KC_PLUS ,_______ ,                 KC_LPRN ,KC_RPRN ,KC_PIPE ,KC_ASTR ,KC_TILD ,KC_CIRC ,KC_JYEN ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┘                └────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,KC_LEFT ,KC_DOWN ,KC_RGHT ,KC_LANG2,KC_MINS ,                                   KC_LBRC ,KC_LANG1,KC_DOT  ,KC_SLSH ,KC_MINS ,_______ ,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                                  ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,XXXXXXX ,XXXXXXX ,XXXXXXX ,KC_DOT  ,KC_SLSH ,                                   KC_DEL  ,KC_LCBR ,KC_RCBR ,KC_LPRN ,KC_RPRN ,_______ ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                ┌────────┼────────┼────────┴────────┼────────┼────────┼────────┤
     _______ ,_______ ,_______ ,_______ ,_______ ,KC_SPC  ,KC_ENT  ,                 KC_UP   ,KC_DOWN ,_______ ,KC_HOME ,KC_PGUP ,KC_PGDN ,KC_END
  //└────────┴────────┴────────┴────────┴────────┴────────┴────────┘                └────────┴────────┴────────┴────────┴────────┴────────┴────────┘
  )
};
