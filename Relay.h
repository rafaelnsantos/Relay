// Relay.h

#ifndef _RELAY_h
#define _RELAY_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif

class Relay
{
 protected:
	 int pin;
	 bool state;
	 bool isNormallyOpen;

 public:
	 Relay();
	 Relay(int p, bool isNormallyOpen);
	 void begin();
	 void setIsNormallyOpen(bool is);
	 void setPin(int p);
	 int getPin();
	 bool getState();
	 void turnOn();
	 void turnOff();
};

//extern RelayClass Relay;

#endif

