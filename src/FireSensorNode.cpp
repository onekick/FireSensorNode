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

bool FireSensorNode::addSensor(Sensor * sensor, void(callback*)(void), unsigned long)
{
	Serial.println("FireSensorNode::startSense called\n");
	sensorThread	= new Thread();
	
	controller.add(sensorManager);
	controller.add(actuatorManager);
	controller.add(commManager);
}

bool FireSensorNode::removeSensor(Sensor * sensor)
{
	sensorManager->stopSense(sensor);
	sensorManager->removeSensor(sensor);
}

bool FireSensorNode::startSense()
{
	flagRun = true;
}

bool FireSensorNode::stopSense()
{	
	flagRun = false;
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



