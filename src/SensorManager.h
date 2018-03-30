/*
 * SensorManager.h
 *
 *  Created on: 2018. 3. 26.
 *      Author: onekick
 */

#ifndef SENSORMANAGER_H_
#define SENSORMANAGER_H_

#undef min
#undef max

#include "Manager.h"
#include "Sensor.h"
#include <string>

using namespace std;

class SensorManager : public Manager{
private:
	Sensor * mSensor;

public:
	SensorManager();
	virtual ~SensorManager();
	void init();
	void startSense();
	void stopSense();
	bool addSensor(string tag, Sensor * sensor);
	Sensor * removeSensor(string tag);
};

#endif /* SENSORMANAGER_H_ */
