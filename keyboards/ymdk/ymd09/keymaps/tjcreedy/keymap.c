#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT(KC_KP_7,        KC_KP_8,        KC_KP_9,
               LT(2, KC_KP_4), LT(1, KC_KP_5), KC_KP_6,
               KC_KP_1,        LT(3, KC_KP_2), KC_KP_3),

  [1] = LAYOUT(RGB_RMOD, RGB_VAI, RGB_MOD,
               RGB_HUI,  KC_TRNS, RGB_SAI,
               RGB_HUD,  RGB_VAD, RGB_SAD),

  [2] = LAYOUT(XXXXXXX, XXXXXXX,             XXXXXXX,
               KC_TRNS, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK,
               XXXXXXX, XXXXXXX,             KC_MEDIA_PREV_TRACK),

  [3] = LAYOUT(XXXXXXX,           XXXXXXX, XXXXXXX,
               XXXXXXX,           XXXXXXX, XXXXXXX,
               KC_AUDIO_VOL_DOWN, KC_TRNS, KC_AUDIO_VOL_UP)

};
