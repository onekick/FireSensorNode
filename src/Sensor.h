/*
 * Sensor.h
 *
 *  Created on: 2018. 3. 26.
 *      Author: onekick
 */

#ifndef SENSOR_H_
#define SENSOR_H_

#include <string>
using namespace std;

class Sensor {
private:
	int sensitivity = 0;
public:
	Sensor();
	virtual ~Sensor();
	virtual double sense() = 0;

	int getSensitivity() const {
		return sensitivity;
	}

	void setSensitivity(int sensitivity = 0) {
		this->sensitivity = sensitivity;
	}
	
	void run();
	
};

#endif /* SENSOR_H_ */
