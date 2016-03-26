// 
// 
// 

#include "Relay.h"

Relay::Relay(){}

Relay::Relay(int p, bool normallyOpen){
	pin = p;
	isNormallyOpen = normallyOpen;
}

void Relay::begin(){
	pinMode(pin, OUTPUT);
}

void Relay::setIsNormallyOpen(bool is){
	isNormallyOpen = is;
}

void Relay::setPin(int p){
	pin = p;
}
int Relay::getPin(){
	return pin;
}
bool Relay::getState(){
	if (isNormallyOpen){
		return state;
	}
	else {
		return !state;
	}
}
void Relay::turnOn(){
	if (isNormallyOpen){
		state = true;
	} else {
		state = !true;
	}
	digitalWrite(pin, state);
}
void Relay::turnOff(){
	if (isNormallyOpen){
		state = false;
	} else {
		state = !false;
	}
	digitalWrite(pin, state);
}

//RelayClass Relay;

