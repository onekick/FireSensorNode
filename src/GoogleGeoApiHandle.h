/*
 * GoogleGeoApiHandle.h
 *
 *  Created on: 2018. 3. 26.
 *      Author: onekick
 */

#ifndef GOOGLEGEOAPIHANDLE_H_
#define GOOGLEGEOAPIHANDLE_H_

#include "CommHandle.h"
#include "AccessPointer.h"
#include "GeoPosition.h"
#include <vector>

using namespace std;


class GoogleGeoApiHandle : public CommHandle {
private:
	vector<AccessPointer> listAP;
public:
	GoogleGeoApiHandle();
	virtual ~GoogleGeoApiHandle();
	GeoPosition getCurrentPosition();

	bool open();
	bool close();
	bool read();
	bool wirite();
};

#endif /* GOOGLEGEOAPIHANDLE_H_ */
