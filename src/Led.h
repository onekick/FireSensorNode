/*
 * Led.h
 *
 *  Created on: 2018. 3. 26.
 *      Author: onekick
 */

#ifndef LED_H_
#define LED_H_

#include "Actuator.h"

class Led : public Actuator{
public:
	Led();
	virtual ~Led();

	void on();
	void off();
	void setLedOn(bool turnOn);
};

#endif /* LED_H_ */
