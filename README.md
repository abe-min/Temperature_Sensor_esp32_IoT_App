# Temperature Sensor IoT Application with ESP32

### Summary
A WiFi based application on the ESP32 and Subscribe/Publish MQTT Messages to AWS IoT using ESP-IDF & FreeRTOS

### App Features 

1. WIFI Application
    - ESP32 starts an access point 
        - This enables users to access info from the ESP32 SOC (ie senosrs, device info, connection status, etc..)
    - The WIFI app will start an HTTP server which will support a web page to enable the above
    - The app will contain a FreeRTOS task that accepts FreeRTOS Queue messages (xQUeueCreate, xQueueSend, and xQueueReceive)
2. HTTP Server 
3. OTA FW UpDATE
4. DHT22 Sensor 
5. Non-Volatile Storage 
6. RGB LED
7. SNTP
8. Button with Interrupt and Semaphore 

