# bsec_esp8266_thingspeak (CO2eq + b-VOCeq included)
Example implementation for BSEC library for an BME680 sensor, also with activated CO2 equivalent and Breath-VOC equivalent. Integrated data export to ThingSpeak.

# documentation how to wire and modify ESP8266 build
* https://www.bluedot.space/tutorials/air-quality-measurement-with-the-bme680/
* https://www.bluedot.space/products/bme680/

# configuration

See file "iot_config_example.h" and copy or rename it to "iot_config.h" and modify it with your settings.

```
/*
 * WIFI configuration
 */
char CONFIG_WIFI_SSID[] = "wifinetworkname"; // WIFI name
char CONFIG_WIFI_PASS[] = "wifinetworkpassword"; // WIFI password

/**
 * ThingSpeak Configuration
 */
unsigned long CONFIG_THINGSPEAK_CHANNEL_ID = 0; // ThingSpeak Channel ID
const char * CONFIG_THINGSPEAK_API_KEY = "ThingSpeak Api Key"; // ThingSpeak API Key
```

# example Serial output

```
[429108.00] T: 23.28| rH: 46.28| IAQ: 144.45 (1)| CO2eq: 521.78| BreathVOCeq: 1.10
[432108.00] T: 23.28| rH: 45.24| IAQ: 132.99 (1)| CO2eq: 471.72| BreathVOCeq: 1.02
[435108.00] T: 23.26| rH: 44.39| IAQ: 120.14 (1)| CO2eq: 415.60| BreathVOCeq: 0.94
[438108.00] T: 23.27| rH: 43.71| IAQ: 106.94 (1)| CO2eq: 400.00| BreathVOCeq: 0.86
```
