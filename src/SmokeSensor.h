/*
 * SmokeSensor.h
 *
 *  Created on: 2018. 3. 26.
 *      Author: onekick
 */

#ifndef SMOKESENSOR_H_
#define SMOKESENSOR_H_

#include "Sensor.h"

class SmokeSensor : public Sensor
{
public:
	SmokeSensor(string tag, unsigned long interval_ms);
	virtual ~SmokeSensor();
	double sense();
};

#endif /* SMOKESENSOR_H_ */
