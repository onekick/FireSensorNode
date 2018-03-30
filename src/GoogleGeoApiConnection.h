/*
 * GoogleGepApiConnection.h
 *
 *  Created on: 2018. 3. 26.
 *      Author: onekick
 */

#ifndef GOOGLEGEOAPICONNECTION_H_
#define GOOGLEGEOAPICONNECTION_H_

#include "ConnectionData.h"

class GoogleGeoApiConnection : public ConnectionData{
public:
	GoogleGeoApiConnection();
	virtual ~GoogleGeoApiConnection();
	void save();
	void load();
};

#endif /* GOOGLEGEOAPICONNECTION_H_ */
