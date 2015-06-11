#include <DHT.h>

#include "OneWire.h"
#include "DallasTemperature.h"
#include "WaterTemperature.h"

#include "PhSensor.h"
   
WaterTemperature sensor(2);
PhSensor pH(3);

void setup(){
}

void loop(){
    Serial.print("Temperature: ");
    Serial.print(sensor.readWaterTemp());
    Serial.print("\n");
    Serial.print("pH: ");
    Serial.print(pH.read(sensor.readWaterTemp()));
    Serial.print("\n");
    delay(4000);
}


