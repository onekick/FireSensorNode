/*
 * DataManager.cpp
 *
 *  Created on: 2018. 3. 26.
 *      Author: onekick
 */

#include "DataManager.h"

DataManager::DataManager() {
	wifi			= (ConnectionData*)new WiFiConnection();
	thingPlug		= (ConnectionData*)new ThingPlugConnection();
	googleGeoApi	= (ConnectionData*)new GoogleGeoApiConnection();
}

DataManager::~DataManager() {
	delete wifi;
	delete thingPlug;
	delete googleGeoApi;
}

void DataManager::save()
{
	wifi->save();
	thingPlug->save();
	googleGeoApi->save();
}

void DataManager::load()
{
	wifi->load();
	thingPlug->load();
	googleGeoApi->load();
}
