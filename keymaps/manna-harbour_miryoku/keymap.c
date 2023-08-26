#include QMK_KEYBOARD_H

#define ORANGE_LED  LED1
#define BLUE_LED    LED2


static uint32_t oled_timer = 0;

void keyboard_post_init_user(void) {
  // in post init:
  // * init the timer
  // * turn blue on
  // * turn orang off
  oled_timer = timer_read32();
  writePinHigh(BLUE_LED);
  writePinLow(ORANGE_LED);
}

void handle_led_animation(void) {
  if (timer_elapsed32(oled_timer) > U_LED_TIMER_MS) {
    oled_timer = timer_read32();

    // just toggle the pins for now
    togglePin(BLUE_LED);
    togglePin(ORANGE_LED);
  }
}

// called after every scan
void housekeeping_task_user(void) {
  handle_led_animation();
}
