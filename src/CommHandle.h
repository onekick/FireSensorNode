/*
 * CommHandle.h
 *
 *  Created on: 2018. 3. 26.
 *      Author: onekick
 */

#ifndef COMMHANDLE_H_
#define COMMHANDLE_H_

#include "ConnectionData.h"


class CommHandle {
private:
	ConnectionData * connectionData;

public:
	CommHandle();
	virtual ~CommHandle();
	virtual bool open() = 0;
	virtual bool close() = 0;
	virtual bool read() = 0;
	virtual bool wirite() = 0;

	ConnectionData* getConnectionData()  {
		return connectionData;
	}

	void setConnectionData(ConnectionData *connectionData) {
		this->connectionData = connectionData;
	}
};

#endif /* COMMHANDLE_H_ */
