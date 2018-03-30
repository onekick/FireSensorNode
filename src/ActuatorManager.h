/*
 * ActuatorManager.h
 *
 *  Created on: 2018. 3. 26.
 *      Author: onekick
 */

#ifndef ACTUATORMANAGER_H_
#define ACTUATORMANAGER_H_

#include "Manager.h"
#include "Actuator.h"
#include <map>
#include <string>

using namespace std;

class ActuatorManager : public Manager{
private:
	std::map<std::string, Actuator*> mapActuator;
public:
	ActuatorManager();
	virtual ~ActuatorManager();
	void init();
	void startFireAlarm();
	void stopFireAlarm();

	bool addActuator(string tag, Actuator* actuator);
	bool isActuator(string tag);
	Actuator * getActuator(string tag);
	Actuator * removeActuator(string tag);
	
	void run();
};

#endif /* ACTUATORMANAGER_H_ */
