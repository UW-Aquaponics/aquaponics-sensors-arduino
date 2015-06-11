#ifndef DissolvedOxygen_h
#define DissolvedOxygen_h

#include "Arduino.h"
#include "SoftwareSerial.h"

//Allows automated control of an Atlas Scientific EZO dissolved oxygen circuit.
class DissolvedOxygen {
  public:
    //Arguments: rxPin and txPin assigned for UART communication.
    DissolvedOxygen(int rxPin, int txPin);
    ~DissolvedOxygen();
    //Reads dissolved oxygen with a default temperature.
    float readDissolvedOxygen();
    //Reads dissolved oxygen with a temperature in degress celsius provided as 
    //an argument.
    float readDissolvedOxygen(float temp);

  private:
    SoftwareSerial* doSerial;
    char doData[20];
    byte receivedFromSensor;
    bool stringReceived;
    float doFloat;
    char* dissolvedOxygen;
};
#endif     
