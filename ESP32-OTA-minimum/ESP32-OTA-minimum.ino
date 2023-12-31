#include <ArduinoOTA.h>  // For enabling over the air updates
#include <WiFi.h>        // For connecting ESP32 to WiFi

const char* ssid = "Your SSID";         // Change to your WiFi Network name
const char* password = "Your Password";  // Change to your password

void setup() {

  WiFi.begin(ssid, password);  // Connect to WiFi - defaults to WiFi Station mode

  // Ensure WiFi is connected
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
  }

  ArduinoOTA.begin();  // Starts OTA
}

void loop() {
  ArduinoOTA.handle();  // Handles a code update request

  /*
  All loop your code goes here.
  */
}