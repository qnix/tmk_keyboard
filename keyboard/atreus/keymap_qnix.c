#include "keymap_common.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* 0: qwerty */
  KEYMAP(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, \
         KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, \
         KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_ENT, \
         KC_ESC, KC_TAB, KC_FN18, KC_FN20, KC_FN1, \
         KC_FN11, KC_FN10, \
         KC_SPC, KC_RSFT, KC_FN19, KC_LBRC, KC_FN17), \
  /* 1: fn */
  KEYMAP(SHIFT(KC_1), SHIFT(KC_2), SHIFT(KC_5), SHIFT(KC_SLSH), SHIFT(KC_QUOT), \
            KC_KP_PLUS, KC_7, KC_8, KC_9, KC_KP_MINUS, \
         SHIFT(KC_3), SHIFT(KC_4), SHIFT(KC_9), SHIFT(KC_0), KC_QUOT, \
            KC_KP_ASTERISK, KC_4, KC_5, KC_6, KC_KP_SLASH, \
         KC_GRAVE, SHIFT(KC_7), SHIFT(KC_BSLS), SHIFT(KC_6), SHIFT(KC_GRAVE), \
            KC_EQUAL, KC_1, KC_2, KC_3, KC_ENT, \
         KC_FN2, KC_TAB, KC_FN18, KC_FN21, KC_FN1, \
            KC_TRNS, KC_TRNS, \
         KC_BSPC, KC_0, KC_DOT, KC_BSLS, CTRL(KC_W)),   \
  /* 2: L2 arrows and function keys */
  KEYMAP(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,         KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, \
         KC_INS, KC_NO, KC_NO, KC_PGUP, KC_HOME,    KC_PGUP, KC_NO, KC_UP, KC_NO, KC_F11, \
         KC_DEL, KC_NO, KC_NO, KC_PGDN, KC_END,     KC_PGDN, KC_LEFT, KC_DOWN, KC_RIGHT, KC_F12, \
         KC_FN3, KC_FN4, KC_FN18, KC_FN22, KC_FN1, \
         KC_TRNS, KC_TRNS, \
         KC_LGUI, KC_RSFT, KC_NO, KC_FN9, KC_FN17), \
  /* 3: hard dvorak */
  KEYMAP(KC_COMM, KC_H, KC_M, KC_F, KC_K,   KC_Z, KC_P, KC_C, KC_L, KC_SCLN, \
         KC_R, KC_O, KC_T, KC_A, KC_G,      KC_U, KC_I, KC_S, KC_N, KC_E, \
         KC_DOT, KC_Q, KC_M, KC_J, KC_V,    KC_Y, KC_B, KC_D, KC_X, KC_ENT, \
         KC_ESC, KC_TAB, KC_FN18, KC_FN23, KC_FN6, \
         KC_TRNS, KC_TRNS, \
         KC_SPC, KC_RSFT, KC_FN19, KC_LBRC, KC_RBRC), \
  /* 4: hard dvorak fn */
  KEYMAP(SHIFT(KC_1), SHIFT(KC_2), SHIFT(KC_5), SHIFT(KC_SLSH), SHIFT(KC_QUOT), \
            SHIFT(KC_EQUAL), KC_7, KC_8, KC_9, KC_MINS, \
         SHIFT(KC_3), SHIFT(KC_4), SHIFT(KC_9), SHIFT(KC_0), KC_QUOT, \
            SHIFT(KC_8), KC_4, KC_5, KC_6, KC_SLSH, \
         KC_GRAVE, SHIFT(KC_7), SHIFT(KC_BSLS), SHIFT(KC_6), SHIFT(KC_GRAVE), \
            KC_EQUAL, KC_1, KC_2, KC_3, KC_ENT, \
         KC_FN7, KC_FN5, KC_LGUI, KC_4, KC_FN6, \
            KC_TRNS, KC_TRNS, \
         KC_BSPC, KC_0, KC_DOT, KC_BSLS, CTRL(KC_W)),   \
  /* 5: hard dvorak L2 */
  KEYMAP(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,             KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, \
         KC_INS, KC_LBRC, KC_UP, KC_RBRC, KC_HOME,      KC_PGUP, KC_LBRC, KC_UP, KC_RBRC, KC_F11, \
         KC_DEL, KC_LEFT, KC_DOWN, KC_RIGHT, KC_END,    KC_PGDN, KC_LEFT, KC_DOWN, KC_RIGHT, KC_F12, \
         KC_FN8, KC_FN5, KC_NO, KC_5, KC_FN6, \
         KC_TRNS, KC_TRNS, \
         KC_LGUI, KC_NO, KC_NO, KC_NO, KC_NO), \
  /* 6: bootloader */
  KEYMAP(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
         KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
         KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
         KC_FN0, KC_NO, KC_NO, KC_6, KC_NO, \
         KC_TRNS, KC_TRNS, \
         KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)

};

const uint16_t PROGMEM fn_actions[] = {
  [0] = ACTION_FUNCTION(BOOTLOADER),	// KC_FN0: BOOTLOADER
  /* Base QWERTY layers */
  [1] = ACTION_LAYER_MOMENTARY(1),  	// KC_FN1: to Fn overlay (layer 1)
  [2] = ACTION_LAYER_ON(2, 1),      	// KC_FN2: switch to layer 2
  [3] = ACTION_LAYER_OFF(2, 1),     	// KC_FN3: switch back to layer 0
  /* Customized 'Dvorak' layers */
  [4] = ACTION_LAYER_ON(3, 1),      	// KC_FN4: to Dvorak
  [5] = ACTION_LAYER_OFF(3, 1),     	// KC_FN5: switch back to layer 0 hard
  [6] = ACTION_LAYER_MOMENTARY(4),  	// KC_FN6: to Dvorak's Fn overlay (layer 4)
  [7] = ACTION_LAYER_ON(5, 1),      	// KC_FN7: switch to Dvorak's layer 2 hard
  [8] = ACTION_LAYER_OFF(5, 1),     	// KC_FN8: to Fn overlay
  /* BOOTLOADER layers */
  [9] = ACTION_LAYER_MOMENTARY(6),  	// KC_FN9: to BOOTLOADER layer
  /* Customized keys */
  [10] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ESC),		// KC_FN10: tap for ESC, hold down for CTRL
  [11] = ACTION_MODS_TAP_KEY(MOD_LALT, KC_GRAVE),	// KC_FN11: tap for GRAVE, hold down for ALT

  /* NOT USED */
  [12] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_Z),		// KC_FN12: tap for Z, hold down for LCTL
  [13] = ACTION_MODS_TAP_KEY(MOD_LALT, KC_X),		// KC_FN13: tap for X, hold down for LALT
  [14] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_C),		// KC_FN14: tap for C, hold down for CTRL
  [15] = ACTION_MODS_TAP_KEY(MOD_RCTL, KC_COMM),	// KC_FN15: tap for COMM, hold down for CTRL
  [16] = ACTION_MODS_TAP_KEY(MOD_RALT, KC_DOT),		// KC_FN16: tap for DOT, hold down for ALT

  [17] = ACTION_LAYER_TAP_KEY(2, KC_RBRC),          // KC_FN17: tab RBRC, hold for layer 2
  [18] = ACTION_MODS_TAP_KEY(MOD_LGUI, KC_TAB),		// KC_FN18: tap for TAB, hold down for LGUI
  [19] = ACTION_MODS_TAP_KEY(MOD_RGUI, KC_MINS),	// KC_FN19: tap for MINUS, hold down for RGUI
  [20] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_0),		// KC_FN20: tap for 0 (to confirm I am on layer 0), hold down for LSFT
  [21] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_1),		// KC_FN21: tap for 1 (to confirm I am on layer 1), hold down for LSFT
  [22] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_2),		// KC_FN22: tap for 2 (to confirm I am on layer 2), hold down for LSFT
  [23] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_3),		// KC_FN23: tap for 3 (to confirm I am on layer 3), hold down for LSFT
  [24] = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_TAB),		// KC_FN24: tap for TAB hold down for RSFT
  [25] = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_SPC),		// KC_FN25: tap for SPC hold down for RSFT
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  if (id == BOOTLOADER) {
    bootloader();
  }
}
