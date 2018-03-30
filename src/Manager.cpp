/*
 * Manager.cpp
 *
 *  Created on: 2018. 3. 26.
 *      Author: onekick
 */

#include "Manager.h"

void callBack(void)
Manager::Manager(void(callback*)(void), unsigned long ms) {
	onRun(callback);
	setInterval(ms);
}

Manager::~Manager() {
	// TODO Auto-generated destructor stub
}



