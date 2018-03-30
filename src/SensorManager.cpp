/*
 * SensorManager.cpp
 *
 *  Created on: 2018. 3. 26.
 *      Author: onekick
 */

#include "SensorManager.h"


SensorManager::SensorManager(){
	init();
}

SensorManager::~SensorManager() {
	
}

void SensorManager::init() 
{

}

void SensorManager::startSense() 
{
}

void SensorManager::stopSense()
{
}

bool SensorManager::addSensor(Sensor * sensor, void (callback*)(void))
{
	mSensor = sensor;

	setInterval(mSensor->getInterval());
	
	onRun( callBack );

	return true;
}

Sensor * SensorManager::removeSensor()
{
	mSensor = NULL;
}


