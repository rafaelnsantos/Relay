#include "Relay.h"

Relay light(2, false); // constructor receives (pin, isNormallyOpen) true = Normally Open, false = Normally Closed

void setup() {
	light.begin(); // inicializes the pin
}

void loop() {
	light.turnOff(); //turns relay off
	light.turnOn();  //turns relay on
	bool isLightOn = light.getState(); //returns a bool, true = on, false = off
}
