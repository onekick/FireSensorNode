/*
 * BatterySensor.cpp
 *
 *  Created on: 2018. 3. 26.
 *      Author: onekick
 */

#include "BatterySensor.h"

BatterySensor::BatterySensor(string name, unsigned long ms) 
	: Sensor(name, ms)
{
	// TODO Auto-generated constructor stub

}

BatterySensor::~BatterySensor() {
	// TODO Auto-generated destructor stub
}


double BatterySensor::sense()
{
	return 22;
}
