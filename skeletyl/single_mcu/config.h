
#pragma once

/* RGB settings. */
#define WS2812_PWM_DRIVER PWMD1
#define WS2812_PWM_CHANNEL 3
#define WS2812_PWM_PAL_MODE 1
#define WS2812_DMA_STREAM STM32_DMA2_STREAM5
#define WS2812_DMA_CHANNEL 6

/* CRC. */
#define CRC8_USE_TABLE
#define CRC8_OPTIMIZE_SPEED
