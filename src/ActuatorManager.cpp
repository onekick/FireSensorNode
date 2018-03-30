/*
 * ActuatorManager.cpp
 *
 *  Created on: 2018. 3. 26.
 *      Author: onekick
 */

#include "ActuatorManager.h"

ActuatorManager::ActuatorManager(){
}

ActuatorManager::~ActuatorManager() {
	// TODO Auto-generated destructor stub
}

void ActuatorManager::init() {}

void ActuatorManager::startFireAlarm() {}

void ActuatorManager::stopFireAlarm() {}

bool ActuatorManager::addActuator(string tag, Actuator* actuator)
{
	mapActuator.insert(pair<string, Actuator*>(tag, actuator));
}

bool ActuatorManager::isActuator(string tag)
{
	std::map<string, Actuator*>::iterator iter = mapActuator.find(tag);
	
	return iter != mapActuator.end();
}

Actuator * ActuatorManager::getActuator(string tag)
{
	std::map<string, Actuator*>::iterator iter = mapActuator.find(tag);
	
	if(iter == mapActuator.end()) return NULL;
	
	return iter->second;
}

Actuator * ActuatorManager::removeActuator(string tag)
{
	Actuator * actuator = getActuator(tag);
	this->mapActuator.erase(tag);
	return actuator;
}


void ActuatorManager::run()
{
	// do something...

	runned();
}

