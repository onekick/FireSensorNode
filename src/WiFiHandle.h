/*
 * WiFiHandle.h
 *
 *  Created on: 2018. 3. 26.
 *      Author: onekick
 */

#ifndef WIFIHANDLE_H_
#define WIFIHANDLE_H_

#include "CommHandle.h"

class WiFiHandle : public CommHandle {
public:
	WiFiHandle();
	virtual ~WiFiHandle();

	bool open();
	bool close();
	bool read();
	bool wirite();
};

#endif /* WIFIHANDLE_H_ */
