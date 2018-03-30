/*
 * SmokeSensor.cpp
 *
 *  Created on: 2018. 3. 26.
 *      Author: onekick
 */

#include "SmokeSensor.h"

SmokeSensor::SmokeSensor(string name, unsigned long ms) 
	: Sensor(name, ms)
{
	
}

SmokeSensor::~SmokeSensor() {
	// TODO Auto-generated destructor stub
}

double SmokeSensor::sense()
{
	return 11;
}

