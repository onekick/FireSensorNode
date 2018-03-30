/*
 * DataManager.h
 *
 *  Created on: 2018. 3. 26.
 *      Author: onekick
 */

#ifndef DATAMANAGER_H_
#define DATAMANAGER_H_

#include "ConnectionData.h"
#include "WiFiConnection.h"
#include "ThingPlugConnection.h"
#include "GoogleGeoApiConnection.h"


class DataManager {
private:
	ConnectionData * wifi			= NULL;
	ConnectionData * thingPlug		= NULL;
	ConnectionData * googleGeoApi	= NULL;

public:
	DataManager();
	virtual ~DataManager();
	void save();
	void load();
};

#endif /* DATAMANAGER_H_ */
