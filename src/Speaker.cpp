/*
 * Speaker.cpp
 *
 *  Created on: 2018. 3. 26.
 *      Author: onekick
 */

#include "Speaker.h"

Speaker::Speaker() {
	// TODO Auto-generated constructor stub

}

Speaker::~Speaker() {
	// TODO Auto-generated destructor stub
}

void Speaker::on()
{
	Actuator::on();

	setSpeakerOn(true);
}

void Speaker::off()
{
	Actuator::off();
	setSpeakerOn(false);
}

void Speaker::setSpeakerOn(bool turnOn)
{
	if(turnOn) {

	}
	else {

	}

}
