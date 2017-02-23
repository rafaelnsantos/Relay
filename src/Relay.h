// Relay.h

#ifndef _RELAY_h
#define _RELAY_h

#include "Arduino.h"
  
class Relay
{
 protected:
	 int pin;
	 bool state;
	 bool normallyOpen;

 public:
	 Relay();
	 Relay(int p, bool isNormallyOpen);
	 void begin();
	 bool getState();
	 void turnOn();
	 void turnOff();
};

#endif
