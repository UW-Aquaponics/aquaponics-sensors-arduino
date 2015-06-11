#include <PhSensor.h>

PhSensor ph(3);

void setup(){
    Serial.begin(9600);
}

void loop(){
    Serial.print(ph.read(20));
    Serial.print("\n");
    delay(4000);
}


