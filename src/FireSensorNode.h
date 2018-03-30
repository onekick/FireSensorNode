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

	SensorManager* sensorManager = NULL;
	ActuatorManager* actuatorManager = NULL;
	CommManager* commManager = NULL;
	
	ThreadController controller = ThreadController();
	
public:
	FireSensorNode();
	virtual ~FireSensorNode();

	bool startSense(SensorManager* sensorManager);
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
