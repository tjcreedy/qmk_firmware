#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT(LCTL(1), W, LCTL(2),
               A, LT(1, LCTL(8)), D,
               Z, X, C),

  [1] = LAYOUT(RGB_RMOD, RGB_VAI, RGB_MOD,
               RGB_HUI, KC_TRNS, RGB_SAI,
               RGB_HUD, RGB_VAD, RGB_SAD),

};
