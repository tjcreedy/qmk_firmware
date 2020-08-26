#include QMK_KEYBOARD_H

/*void keyboard_post_init_user(void) {*/
/*  // Customise these values to desired behaviour*/
/*  debug_enable=true;*/
/*  debug_matrix=true;*/
/*  debug_keyboard=true;*/
/*  //debug_mouse=true;*/
/*}*/

/*bool process_record_user(uint16_t keycode, keyrecord_t *record) {*/
/*  // If console is enabled, it will print the matrix position and status of each key pressed*/
/*#ifdef CONSOLE_ENABLE*/
/*    uprintf("KL: kc: %u, col: %u, row: %u, pressed: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed);*/
/*#endif */
/*  return true;*/
/*}*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ortho_4x4(
		KC_KP_PLUS,         KC_KP_7,     KC_KP_8,   KC_KP_9, \
		KC_KP_ASTERISK,     KC_KP_4,     KC_KP_5,   KC_KP_6, \
		LT(4, KC_KP_MINUS), KC_KP_1,     KC_KP_2,   KC_KP_3, \
		LT(3, KC_KP_SLASH), KC_KP_EQUAL, KC_KP_DOT, KC_KP_0  \
	),
	[1] = LAYOUT_ortho_4x4(
		KC_BSPACE,    _______,     _______, _______, \
		KC_TAB,       _______,     _______, _______, \
		_______,      _______,     _______, _______, \
		LT(3, KC_F2), KC_KP_ENTER, _______, _______ \
	),
	[2] = LAYOUT_ortho_4x4(
		KC_INSERT,    KC_BSPACE,  KC_PGUP,   KC_DELETE, \
		KC_TAB,       KC_HOME,    KC_UP,     KC_END,    \
		KC_LSHIFT,    KC_LEFT,    KC_DOWN,   KC_RIGHT,  \
		LT(3, KC_F2), KC_PSCREEN, KC_PGDOWN, KC_LCTL    \
	),
	[3] = LAYOUT_ortho_4x4(
		TO(0),   XXXXXXX,             XXXXXXX,             RESET,              \
		TO(1),   XXXXXXX,             XXXXXXX,             XXXXXXX,             \
		TO(2),   KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK, \
		_______, KC_AUDIO_MUTE,       KC_AUDIO_VOL_DOWN,   KC_AUDIO_VOL_UP      \
	),
	[4] = LAYOUT_ortho_4x4(
		_______, RGB_RMOD, RGB_MOD, RGB_MODE_PLAIN,   \
		_______, RGB_HUD,  RGB_HUI, RGB_MODE_BREATHE, \
		_______, RGB_SAD,  RGB_SAI, RGB_MODE_SWIRL, \
		_______, RGB_VAD,  RGB_VAI, RGB_MODE_KNIGHT \
	),
};
