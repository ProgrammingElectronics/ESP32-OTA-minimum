#include <WiFi.h>
#include <ArduinoOTA.h>

const char* ssid = "KINETIC_8a8ea1";  // Change to your WiFi Network name
const char* password = "UxW5pur2bV";  // Change to your password

const int ledPin = 4;

void setup() {
  

  pinMode(ledPin, OUTPUT);

  WiFi.begin(ssid, password);
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
  }

  ArduinoOTA.begin();
}

void loop() {
  ArduinoOTA.handle();

  digitalWrite(ledPin, HIGH);
  delay(500);
  digitalWrite(ledPin, LOW);
  delay(500);
}