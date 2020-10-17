/**
 * Example configuration fiel for WIFI and ThingSpeak. Please copy or rename that file to "iot_config.h" before you compile and run!
 */
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
