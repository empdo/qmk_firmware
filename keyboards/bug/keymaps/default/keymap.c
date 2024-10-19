// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┬───┐    
      * │Tab│ Q │ W │ E │ R │ T │    
      * ├───┼───┼───┼───┼───┼───┤    
      * │Ctl│ A │ S │ D │ F │ G │    
      * ├───┼───┼───┼───┼───┼───┤    
      * │Sft│ Z │ X │ C │ V │ B │    
      * └───┴───┴───┴───┴───┴───┘    
      *               ┌───┐         
      *               │GUI├───┐     
      *               └───┤Bsp├───┐ 
      *                   └───┤   │
      *                       └───┘  
      */
    [0] = LAYOUT (
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,  
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,  
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,  
        KC_NO,   KC_NO,   KC_NO, KC_LGUI, KC_BSPC, KC_SPC, KC_SPC,   KC_SPC,   KC_SPC,   KC_NO,   KC_NO,   KC_NO
    ),
};
