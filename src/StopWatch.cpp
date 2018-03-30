/*
 * StopWatch.cpp
 *
 *  Created on: 2018. 3. 26.
 *      Author: onekick
 */

#include "StopWatch.h"
#include "arduino.h"

StopWatch::StopWatch() {
	// TODO Auto-generated constructor stub

}

StopWatch::~StopWatch() {
	// TODO Auto-generated destructor stub
}

long StopWatch::getRunningTime()
{
	long current = millis();
	long elapsed = current - setTime;
	return elapsed;
}

void StopWatch::start()
{
	this->setTime = millis();
}

void StopWatch::stop() {}

void StopWatch::reset()
{
	this->setTime = 0;
}
