/*
 * Actuator.cpp
 *
 *  Created on: 2018. 3. 26.
 *      Author: onekick
 */

#include "Actuator.h"

Actuator::Actuator() {
	// TODO Auto-generated constructor stub

}

Actuator::~Actuator() {
	// TODO Auto-generated destructor stub
}

void Actuator::on()
{
	if(isOn()) return;

	this->mOn = true;
}

void Actuator::off()
{
	if(!isOn()) return;

	this->mOn = false;
}

bool Actuator::isOn()
{
	return mOn;
}

