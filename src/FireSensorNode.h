/*
 * FileSensorNode.h
 *
 *  Created on: 2018. 3. 26.
 *      Author: onekick
 */

#ifndef FIRESENSORNODE_H_
#define FIRESENSORNODE_H_

#include <Thread.h>
#include <ThreadController.h>
#include <uTimerLib.h>

#include "StopWatch.h"
#include "SensorManager.h"
#include "ActuatorManager.h"
#include "DataManager.h"
#include "CommManager.h"


class FireSensorNode {
private:
	bool flagRun = false;
	StopWatch * stopWatch;
	DataManager* dataManager;

//	SensorManager* sensorManager;
//	ActuatorManager* actuatorManager;
//	CommManager* commManager;
	
	ThreadController controller = ThreadController();
	
	void tickGenerator();
	void timerCallback();
	
public:
	FireSensorNode();
	virtual ~FireSensorNode();

	bool addSensor(Sensor * sensor, void(callback*)(void), unsigned long);
	bool removeSensor(Sensor * sensor);

	bool startSense();
	bool stopSense();

	bool setMute(bool isMute);
	bool isMute();

	bool connectWiFi();
	bool isConnectedWiFi();

	bool connectThingPlug();
	bool isConnectedThingPlulg();

	void run();
};

#endif /* FIRESENSORNODE_H_ */
