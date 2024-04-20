/*
 * wifi_app.h
 *
 *  Created on: Mar 12, 2024
 *      Author: minda
 */

#ifndef MAIN_WIFI_APP_H_
#define MAIN_WIFI_APP_H_


#include "esp_netif.h"

// WiFI application settings
#define WIFI_AP_SSID 				"ESP32_AP"      	// WIFI AP name
#define WIFI_AP_PASWORD				"password"      	// WIFI AP password
#define WIFI_AP_CHANNEL				1		        	// WIFI AP channel
#define WIFI_AP_SSID_HIDDEN			0	        		// WIFI AP visibility
#define WIFI_AP_MAX_CONNECTIONS		3       			// WIFI AP Max Clients
#define WIFI_AP_BEACON_INTERVAL		100					// WIFI AP beacon interval
#define WIFI_AP_IP					"192.168.0.1"   	// WIFI AP default IP
#define WIFI_AP_GATEWAY				"192.168.0.1"   	// WIFI AP Gateway
#define WIFI_AP_NETMASK				"255.255.255.0"   	// WIFI AP NETMASK
#define WIFI_AP_BANDWIDTH			WIFI_BW_HT20  		// WIFI AP BW 20 MHz
#define WIFI_STA_POWER_SAVE			WIFI_PS_NONE  		// WIFI station power save not used
#define MAX_SSID_LENGTH				32  				// IEEE standard maximum
#define MAX_PASSWORD_LENGTH			64					// IEEE standard maximum
#define MAX_CONNECTION_RETRIES		5					// Re-connet retry count on disconnect


// Network interface objects for the station and access point
extern	esp_netif_t*	esp_netif_sta;
extern	esp_netif_t*	esp_netif_ap;

//Message IDs for the WIFI APP Task
typedef enum wifi_app_message
{
	WIFI_APP_MSG_START_HTTP_SERVER = 0,
	WIFI_APP_MSG_CONNECTING_FROM_HTTP_SERVER,
	WIFI_APP_MSG_STA_CONNECTED_GOT_IP,
} wifi_app_message_e;

// Structure for the message queue

typedef struct wifi_app_queue_message
{
	wifi_app_message_e msgID;
} wifi_app_queue_message_t;

BaseType_t wifi_app_send_message(wifi_app_message_e msgID);

void wifi_app_start(void);

#endif /* MAIN_WIFI_APP_H_ */
