#include <TemperatureAndHumidity.h>

TemperatureAndHumidity dht(3);

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Temperature in celsius: ");
  Serial.println(dht.readCelsius());
  Serial.print("Humidity: ");
  Serial.print(dht.readHumidity());
  Serial.println("%");
}
