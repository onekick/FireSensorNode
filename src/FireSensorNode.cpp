/*
 * FireSensorNode.cpp
 *
 *  Created on: 2018. 3. 26.
 *      Author: onekick
 */

#include "FireSensorNode.h"

FireSensorNode::FireSensorNode() {
	Serial.println("FireSensorNode constructor called\n");

	stopWatch		= new StopWatch();
	dataManager		= new DataManager();
}

FireSensorNode::~FireSensorNode() {
	delete stopWatch;
	delete dataManager;	
}

bool FireSensorNode::startSense(SensorManager* sensorManager)
{
	flagRun = true;
	controller.add(sensorManager);
}

bool FireSensorNode::stopSense()
{	
	flagRun = false;
	controller.remove(sensorManager);
}

bool FireSensorNode::isRunning()
{
	return flagRun;
}

bool FireSensorNode::setMute(bool isMute)
{
}

bool FireSensorNode::isMute()
{
}

bool FireSensorNode::connectWiFi()
{
}

bool FireSensorNode::isConnectedWiFi()
{
}

bool FireSensorNode::connectThingPlug()
{
}

bool FireSensorNode::isConnectedThingPlulg()
{
}

void FireSensorNode::run()
{
	if(isRunning())	controller.run();
}



