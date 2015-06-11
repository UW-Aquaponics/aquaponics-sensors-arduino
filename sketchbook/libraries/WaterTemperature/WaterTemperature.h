#ifndef WaterTemperature_h
#define WaterTemperature_h

#include "Arduino.h"
#include "OneWire.h"
#include "DallasTemperature.h"

#define ONE_WIRE_BUS 2

//Allows control of an Analog Devices ADT7410 water temperature sensor.
class WaterTemperature{
  public:
    //Argument: the pin to which the data line of the sensor is attached.
    WaterTemperature(int pin);
    ~WaterTemperature();
    //Reads the water temperature and returns it in degrees celcius.
    float readWaterTemp();
  private:
    int _pin;
    OneWire* oneWire;
    DallasTemperature* sensor;
};

#endif
