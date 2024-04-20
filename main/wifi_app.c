/*
 * wifi_app.c
 *
 *  Created on: Mar 12, 2024
 *      Author: minda
 */


#include "freertos/FreeRTOS.h"
#include "freertos/event_groups.h"
#include "freertos/task.h"

#include "esp_err.h"
#include "esp_log.h"
#include "esp_wifi.h"
#include "lwip/netdb.h"

#include "rgb_led.h"
#include "tasks_common.h"
#include "wifi_app.h"

 // Tag used for ESP serial messages
static const char TAG [] = "wifi_app";

// Queue handle used to manipulate the main queue of events
static QueueHandle_t wifi_app_queue_handle;

// netif objects for the station access point

