/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0xCF, 0x14, 0xBA, 0xAA, 0x9C, 0x18, 0xF5, 0x63}

#define LAYER_STATE_8BIT

// trying to reduce some space
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE

// 7504 bytes needed with framebuffer effects off, 8796 with on
#undef RGB_MATRIX_KEYPRESSES                         // 1914 bytes
#undef RGB_MATRIX_FRAMEBUFFER_EFFECTS

#undef ENABLE_RGB_MATRIX_ALPHAS_MODS                 // 126 bytes
#undef ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN            // 128 bytes
#undef ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT         // 134 bytes
// #undef ENABLE_RGB_MATRIX_BREATHING                   // 148 bytes
#undef ENABLE_RGB_MATRIX_BAND_SAT                    // 90 bytes
#undef ENABLE_RGB_MATRIX_BAND_VAL                    // 92 bytes
#undef ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT           // 68 bytes
#undef ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL           // 70 bytes
#undef ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT             // 62 bytes
#undef ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL             // 54 bytes
#undef ENABLE_RGB_MATRIX_CYCLE_ALL                   // 12 bytes
#undef ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT            // 32 bytes
#undef ENABLE_RGB_MATRIX_CYCLE_UP_DOWN               // 26 bytes
// #undef ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON      // 58 bytes
#undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN                // 36 bytes
#undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL           // 88 bytes
#undef ENABLE_RGB_MATRIX_CYCLE_PINWHEEL              // 48 bytes
#undef ENABLE_RGB_MATRIX_CYCLE_SPIRAL                // 48 bytes
#undef ENABLE_RGB_MATRIX_DUAL_BEACON                 // 98 bytes
#undef ENABLE_RGB_MATRIX_RAINBOW_BEACON              // 100 bytes
#undef ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS           // 118 bytes
#undef ENABLE_RGB_MATRIX_RAINDROPS                   // 244 bytes
// #undef ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS         // 200 bytes
#undef ENABLE_RGB_MATRIX_HUE_BREATHING               // 140 bytes
#undef ENABLE_RGB_MATRIX_HUE_PENDULUM                // 78 bytes
#undef ENABLE_RGB_MATRIX_HUE_WAVE                    // 42 bytes
// #undef ENABLE_RGB_MATRIX_FRACTAL                     // 0 bytes
#undef ENABLE_RGB_MATRIX_PIXEL_RAIN                  // 224 bytes
#undef ENABLE_RGB_MATRIX_TYPING_HEATMAP              // 652 bytes
#undef ENABLE_RGB_MATRIX_DIGITAL_RAIN                // 644 bytes
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE       // 64 bytes
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE              // 64 bytes
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE         // 24 bytes
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE    // 8 bytes
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS        // 24 bytes
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS   // 8 bytes
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS        // 24 bytes
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS   // 8 bytes
#undef ENABLE_RGB_MATRIX_SPLASH                      // 24 bytes
#undef ENABLE_RGB_MATRIX_MULTISPLASH                 // 8 bytes
#undef ENABLE_RGB_MATRIX_SOLID_SPLASH                // 24 bytes
#undef ENABLE_RGB_MATRIX_SOLID_MULTISPLASH           // 8 bytes