#ifndef TemperatureAndHumidity_h
#define TemperatureAndHumidity_h

#include "Arduino.h"
#include "../DHT/DHT.h"

class TemperatureAndHumidity
{
  public:
    TemperatureAndHumidity(int pin);
    ~TemperatureAndHumidity();
    float readCelsius();
    float readFahrenheit();
    float readHumidity();
  private:
    int _pin;
    DHT* sensor;
};

#endif
