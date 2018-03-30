/*
 * Actuator.h
 *
 *  Created on: 2018. 3. 26.
 *      Author: onekick
 */

#ifndef ACTUATOR_H_
#define ACTUATOR_H_

class Actuator {
private:
	bool mOn = false;

public:
	Actuator();
	virtual ~Actuator();
	void on();
	void off();
	bool isOn();
};

#endif /* ACTUATOR_H_ */
