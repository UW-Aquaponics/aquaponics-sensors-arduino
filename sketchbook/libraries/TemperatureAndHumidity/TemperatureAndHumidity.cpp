#include "Arduino.h"
#include "../DHT/DHT.h"
#include "TemperatureAndHumidity.h"

TemperatureAndHumidity::TemperatureAndHumidity(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
  sensor = new DHT(_pin, DHT22);
  sensor->begin();
}

TemperatureAndHumidity::~TemperatureAndHumidity()
{
  delete sensor;
}

float TemperatureAndHumidity::readCelsius()
{
  return sensor->readTemperature();
}

float TemperatureAndHumidity::readFahrenheit()
{
  return sensor->readTemperature(true);
}

float TemperatureAndHumidity::readHumidity()
{
  return sensor->readHumidity();
}
