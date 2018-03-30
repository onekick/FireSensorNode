/*
 * CommManager.h
 *
 *  Created on: 2018. 3. 26.
 *      Author: onekick
 */

#ifndef COMMMANAGER_H_
#define COMMMANAGER_H_

#include "Manager.h"
#include "CommHandle.h"

class CommManager : public Manager{
private:
	CommHandle * wifi 			= NULL;
	CommHandle * thingPlug		= NULL;
	CommHandle * googleGeoApi	= NULL;
public:
	CommManager();
	virtual ~CommManager();
	bool connect();
	bool disconnect();
	bool startRecognizingPosition();
	bool stopRecognizingPosition();
	bool startBluetoothInterface();
	bool stopBluetoothInterface();
	
	void run();
};

#endif /* COMMMANAGER_H_ */
