/*
 * BatteryPowerLevelSensor.h
 *
 *  Created on: 2018. 3. 26.
 *      Author: onekick
 */

#ifndef BATTERYSENSOR_H_
#define BATTERYSENSOR_H_

#include "Sensor.h"

class BatterySensor : public Sensor {
public:
	BatterySensor(string tag, unsigned long interval_ms);
	virtual ~BatterySensor();
	
	double sense();
};

#endif /* BATTERYSENSOR_H_ */
