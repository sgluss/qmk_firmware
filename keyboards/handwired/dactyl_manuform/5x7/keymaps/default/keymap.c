#include QMK_KEYBOARD_H


// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _DVORAK 0
#define _FN     1

// Some basic macros
#define TASK    LCTL(LSFT(KC_ESC))
#define TAB_R   LCTL(KC_TAB)
#define TAB_L   LCTL(LSFT(KC_TAB))
#define TAB_RO  LCTL(LSFT(KC_T))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_DVORAK] = LAYOUT_5x7(
  // left hand
   KC_ESC,    KC_F1,         KC_F2,    KC_F3,    KC_F4,   KC_F5,  KC_F6,
   KC_ESC,    KC_EQL,        KC_1,     KC_2,     KC_3,    KC_4,   KC_5,
   KC_TAB,    MO(1),         KC_QUOT,  KC_COMM,  KC_DOT,  KC_P,   KC_Y,
   KC_CAPS,   KC_LSHIFT,     KC_A,     KC_O,     KC_E,    KC_U,   KC_I,
   BL_TOGG,   KC_GRV,        KC_SCLN,  KC_Q,     KC_J,    KC_K,   KC_X,
                                       KC_LEFT,  KC_RIGHT,
                                                          KC_BSPC, KC_DEL,
                                                          KC_LCTL, KC_HOME,
                                                          KC_LALT, KC_END,
    // right hand
    KC_F7,    KC_F8,    KC_F9,    KC_F10,     KC_F11,   KC_F12,         KC_PSCR,
    KC_6,     KC_7,     KC_8,     KC_9,       KC_0,     KC_MINS,        KC_LGUI,
    KC_F,     KC_G,     KC_C,     KC_R,       KC_L,     KC_PAUS,        KC_SLSH,
    KC_D,     KC_H,     KC_T,     KC_N,       KC_S,     KC_RSHIFT,      KC_BSLS,
    KC_B,     KC_M,     KC_W,     KC_V,       KC_Z,     KC_LBRC,        KC_RBRC,
                        KC_UP,    KC_DOWN,
    KC_ENT, KC_SPC,
    KC_LCTL, KC_LGUI,
    KC_PGUP, KC_PGDN),

[_FN] = LAYOUT_5x7(
  // left hand
   _______,   _______,   _______,    _______,  _______,   _______,  _______,
   _______,   _______,   _______,    _______,  _______,   _______,  _______,
   _______,   _______,   _______,    _______,  _______,   _______,  _______,
   _______,   _______,   _______,    _______,  _______,   _______,  _______,
   _______,   _______,   _______,    _______,  _______,   _______,  _______,
                                     KC_MPRV,  KC_MNXT,
                                                           _______, _______,
                                                           _______, _______,
                                                           _______, _______,
        // right hand
  _______,   _______,   _______,   _______,   _______,   _______,   _______,
  _______,   _______,   _______,   _______,   _______,   _______,   _______,
  _______,   _______,   _______,   _______,   _______,   _______,   _______,
  _______,   _______,   _______,   _______,   _______,   _______,   _______,
  _______,   _______,   _______,   _______,   _______,   _______,   _______,
                        KC_VOLU,   KC_VOLD,
  _______, KC_MPLY,
  _______, _______,
  _______, _______),

};
