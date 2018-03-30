/*
 * AccessPointer.h
 *
 *  Created on: 2018. 3. 26.
 *      Author: onekick
 */

#ifndef ACCESSPOINTER_H_
#define ACCESSPOINTER_H_

#include <string>

using namespace std;

class AccessPointer {
private:
	string macAddress;
	int strength;
	string name;
public:
	AccessPointer();
	virtual ~AccessPointer();

	string getMacAddress() const {
		return macAddress;
	}

	void setMacAddress(string macAddress) {
		this->macAddress = macAddress;
	}

	string getName() const {
		return name;
	}

	void setName(string name) {
		this->name = name;
	}

	int getStrength() const {
		return strength;
	}

	void setStrength(int strength) {
		this->strength = strength;
	}
};

#endif /* ACCESSPOINTER_H_ */
