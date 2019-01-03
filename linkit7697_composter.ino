#include <LWiFi.h>
#include "secrets.h"

#define shtDataPin  5
#define shtClockPin 4

float temp_c;
float humidity;

int status = WL_IDLE_STATUS;     // the Wifi radio's status
WiFiClient client;

char server[] = "api.thingspeak.com";

void setup() {
	Serial.begin(9600);
  Serial.println("Starting up");

  wifiInitial();

  delay(10000);
}

void loop() {
  printCurrentNet();

  if (client.connect(server, 80)) {
    sensorReport();

    updateThingspeak();
  }

  delay(600000);  // 10 mins
}


