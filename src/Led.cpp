/*
 * Led.cpp
 *
 *  Created on: 2018. 3. 26.
 *      Author: onekick
 */

#include "Led.h"

Led::Led() {
	// TODO Auto-generated constructor stub

}

Led::~Led() {
	// TODO Auto-generated destructor stub
}

void Led::on()
{
	Actuator::on();
	setLedOn(true);
}

void Led::off()
{
	Actuator::off();
	setLedOn(false);
}

void Led::setLedOn(bool turnOn)
{
	if(turnOn) {

	}
	else {

	}

}


