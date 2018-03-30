/*
 * ThingPlugHandle.h
 *
 *  Created on: 2018. 3. 26.
 *      Author: onekick
 */

#ifndef THINGPLUGHANDLE_H_
#define THINGPLUGHANDLE_H_

#include "CommHandle.h"
#include "ThingPlugPacket.h"

class ThingPlugHandle : public CommHandle {

public:
	ThingPlugHandle();
	virtual ~ThingPlugHandle();

	bool open();
	bool close();
	bool read();
	bool wirite();
};

#endif /* THINGPLUGHANDLE_H_ */
