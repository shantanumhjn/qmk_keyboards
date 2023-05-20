#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT(
		KC_7, KC_8, KC_9, \
		KC_4, KC_5, KC_6, \
		KC_1, KC_2, KC_3, \
		KC_0, KC_MUTE)
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN), ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  }
    // [1] =   { ENCODER_CCW_CW(RGB_HUD, RGB_HUI),           ENCODER_CCW_CW(RGB_SAD, RGB_SAI)  },
    // [2] =   { ENCODER_CCW_CW(RGB_VAD, RGB_VAI),           ENCODER_CCW_CW(RGB_SPD, RGB_SPI)  },
    // [3] =   { ENCODER_CCW_CW(RGB_RMOD, RGB_MOD),          ENCODER_CCW_CW(KC_RIGHT, KC_LEFT) },
};
#endif

#ifdef OLED_ENABLE
static void render_logo(void) {
    static const char PROGMEM raw_logo[] = {
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 31,127,255,255,255,255,255, 31, 15,  7,  7,  7,  3,  3,  3,  3,  3,  7,  7,  7, 15, 63,255,255,255,255,255,255,  3,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,224,224,240,112,112,240,240,224,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,192,240,240,192,  0,  0,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  3,127,255,255,255,255,254,252,252,252,252,124, 56,124,252,252,252,254,254,254,255,255,255,255, 63,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  7,  7,  1,192,248,255,255, 15,  1,128,192,224,224,240,112,176, 32,  0,  0,  0,128,192,224,240,112, 48, 32,224,252,255,127,  7,192,240,231,  7,  7,224,224,240, 48, 48,240,224, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,255,255,255,255,255,223,135,135,191,248,112,112,187,135,  7,135,143,255,255,255,255,251,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,192,192,224,252,255,191,135,  0, 16,254,255,199,227,112, 60,254,255, 63,  6,  0,126,255,255,195,240, 56,124,255,255, 31,  3, 32,252,255, 63,  7,112,240,225,199,207,255,252,120,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,248,255,255,255,255,255,255,255,255,255,253,253,253,252,252,253,255,255,255,255,255,255,255,255,255,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  3,  3,  7,  7, 15, 14, 30, 30, 28, 28, 14,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    };
    oled_write_raw_P(raw_logo, sizeof(raw_logo));
}


bool oled_task_user(void) {
	render_logo();
  	return false;
}
#endif