#ifndef _BOARD_CONFIG_H_
#define _BOARD_CONFIG_H_

#include <driver/gpio.h>

#define AUDIO_INPUT_SAMPLE_RATE     16000
#define AUDIO_OUTPUT_SAMPLE_RATE    24000

// === PIN AUDIO I2S (Simplex) ===
#define AUDIO_I2S_MIC_GPIO_SCK      GPIO_NUM_4
#define AUDIO_I2S_MIC_GPIO_WS       GPIO_NUM_5
#define AUDIO_I2S_MIC_GPIO_DIN      GPIO_NUM_6
#define AUDIO_I2S_SPK_GPIO_BCLK     GPIO_NUM_15
#define AUDIO_I2S_SPK_GPIO_LRCK     GPIO_NUM_16
#define AUDIO_I2S_SPK_GPIO_DOUT     GPIO_NUM_7

// === PIN LAYAR ST7789 SPI ===
#define DISPLAY_SDA_PIN             GPIO_NUM_11
#define DISPLAY_SCL_PIN             GPIO_NUM_12
#define DISPLAY_DC_PIN              GPIO_NUM_9
#define DISPLAY_CS_PIN              GPIO_NUM_10
#define DISPLAY_RST_PIN             GPIO_NUM_8
#define DISPLAY_BACKLIGHT_PIN       GPIO_NUM_38
#define DISPLAY_BACKLIGHT_OUTPUT_INVERT false

// Resolusi & Orientasi Layar
#define DISPLAY_WIDTH               240
#define DISPLAY_HEIGHT              240
#define DISPLAY_SWAP_XY             false
#define DISPLAY_MIRROR_X            false
#define DISPLAY_MIRROR_Y            false
#define DISPLAY_OFFSET_X            0
#define DISPLAY_OFFSET_Y            0

// === TOMBOL & SENSOR BATERAI ===
#define BUTTON_BOOT_PIN             GPIO_NUM_0
#define BATTERY_ADC_PIN             GPIO_NUM_7

#endif // _BOARD_CONFIG_H_
