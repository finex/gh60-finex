#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

// Layer names
#define _QW 0
#define _FL 1

// Custom keys
#define KC_CESC LCTL_T(KC_ESC)        // Esc / Left Ctrl
#define KC_CENT RCTL_T(KC_ENT)        // Enter / Right Ctrl
#define KC_LSGR MT(MOD_LSFT, KC_GRAVE)        // ◌̀ / Left ctrl
#define KC_RSQU MT(MOD_RSFT, KC_QUOTE) // ◌́ / Right shift


#define KC_RALE RALT_T(KC_LEFT) // Right Alt / Left
#define KC_FLDO LT(_FL, KC_DOWN) // Function Layer / Down
#define KC_RGUP RGUI_T(KC_UP) // Right Gui / Up
#define KC_RCRI RCTL_T(KC_RIGHT) // Right Ctrl / Right

// Define layers keycodes
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /*
   * _QW: Qwerty Layer
   */
  [_QW] = LAYOUT_60_ansi(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
    KC_CESC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_CENT ,
    KC_LSGR, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,                   KC_RSQU,
    KC_LCTL, KC_LGUI, KC_LALT,                   KC_SPC,                                      KC_RALE, KC_FLDO, KC_GRUP, KC_RCTL
  ),

  /*
   * _FL: Function Layer
   */
  [_FL] = LAYOUT_60_ansi(
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL ,
    _______, KC_PGUP, KC_UP,   KC_PGDN, KC_HOME, _______, _______, _______, _______, _______, _______, _______, _______, KC_PSCR,
    _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,  _______, _______, _______, _______, _______, _______, _______,          _______,
    KC_CAPS, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   _______,
    _______, _______, _______,                   _______,                                     _______, _______, _______, _______
  ),

};
