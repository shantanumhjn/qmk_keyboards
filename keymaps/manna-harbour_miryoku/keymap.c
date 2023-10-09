#include QMK_KEYBOARD_H

#define ORANGE_LED  LED1
#define BLUE_LED    LED2

#define U_POWER_LED     ORANGE_LED
#define U_KEYSTROKE_LED BLUE_LED

static void handle_led_animation(void);
static uint32_t led_timer = 0;
static uint32_t keystroke_timer = 0;
static bool is_rgb_timeout =  false;
static bool is_power_led_on = false;

void keyboard_post_init_user(void) {
  // in post init:
  // * init the timer
  // * turn blue on
  // * turn orang off
  led_timer = timer_read32();
  keystroke_timer = timer_read32();
  writePinHigh(U_POWER_LED);
  is_power_led_on = true;
  writePinLow(U_KEYSTROKE_LED);
}

void handle_led_animation(void) {
  if (!is_rgb_timeout) {
    // this will handle the beacon like animation for the
    // power led
    if (is_power_led_on) {
      if (timer_elapsed32(led_timer) > U_POWER_LED_ON_INTERVAL) {
        led_timer = timer_read32();
        writePinLow(U_POWER_LED);
        is_power_led_on = false;
      }
    } else {
      if (timer_elapsed32(led_timer) > U_POWER_LED_OFF_INTERVAL) {
        led_timer = timer_read32();
        writePinHigh(U_POWER_LED);
        is_power_led_on = true;
      }
    }

    // check caps word and caps lock states
    writePin(U_KEYSTROKE_LED, is_caps_word_on() || host_keyboard_led_state().caps_lock);

#ifdef RGBLIGHT_TIMEOUT
    // completely shutoff the led during inactivity
    if (timer_elapsed32(keystroke_timer) > RGBLIGHT_TIMEOUT) {
      writePinLow(U_POWER_LED);
      writePinLow(U_KEYSTROKE_LED);
      is_rgb_timeout = true;
    }
#endif // RGBLIGHT_TIMEOUT
  }
}

// called after every scan
void housekeeping_task_user(void) {
  handle_led_animation();
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    keystroke_timer = timer_read32();
    is_rgb_timeout = false;
  }

  return true;
}
