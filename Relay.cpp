#include "Relay.h"

Relay::Relay(){}

Relay::Relay(int p, bool isNormallyOpen){
	pin = p;
	normallyOpen = isNormallyOpen;
}

void Relay::begin(){
	pinMode(pin, OUTPUT);
}

void Relay::setIsNormallyOpen(bool isNormallyOpen){
	normallyOpen = isNormallyOpen;
}

void Relay::setPin(int p){
	pin = p;
}
int Relay::getPin(){
	return pin;
}
bool Relay::getState(){
	//if (normallyOpen){
		return state;
	//}
	//else {
		//return !state;
	//}
}
void Relay::turnOn(){
	if (normallyOpen){
		if (state == !true) return;
		state = !true;
	} else {
		if (state == true) return;
		state = true;
	}
	digitalWrite(pin, state);
}
void Relay::turnOff(){
	if (normallyOpen){
		if (state == !false) return;
		state = !false;
	} else {
		if (state == false) return;
		state = false;
	}
	digitalWrite(pin, state);
}
