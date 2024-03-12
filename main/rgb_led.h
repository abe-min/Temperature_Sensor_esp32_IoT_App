/*
 * rgb_led.h
 *
 *  Created on: Feb 29, 2024
 *      Author: minda
 */

#ifndef MAIN_RGB_LED_H_
#define MAIN_RGB_LED_H_

// RGB LED GPIOs; Using 3 separate LEDs for status

#define RGB_LED_RED_GPIO 32
#define RGB_LED_GREEN_GPIO 33
#define RGB_LED_BLUE_GPIO 25

// RGB LED color mix channels
#define RGB_LED_CHANNEL_NUM 3

// RGB LED config

typedef struct
{
	int channel;
	int gpio;
	int mode;
	int timer_index;
}ledc_info_t;

// ledc_info_t ledc_ch[RGB_LED_CHANNEL_NUM]; Moved to rgb_led.c file

/**
 * Color to indicate WIFI APP started
 */
void rgb_led_wifi_app_started(void);

/**
 * Color to indicate HTTP server has started
 */
void rgb_led_http_server_started(void);

/**
 * Color to indicate ESP32 is connected to a access point
 */
void rgb_led_wifi_connected(void);

#endif /* MAIN_RGB_LED_H_ */


