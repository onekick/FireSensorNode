/*
 * Speaker.h
 *
 *  Created on: 2018. 3. 26.
 *      Author: onekick
 */

#ifndef SPEAKER_H_
#define SPEAKER_H_

#include "Actuator.h"

class Speaker : public Actuator{
public:
	Speaker();
	virtual ~Speaker();

	void on();
	void off();
	void setSpeakerOn(bool turnOn);
};

#endif /* SPEAKER_H_ */
