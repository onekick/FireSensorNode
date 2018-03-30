/*
 * BluetoothHandle.h
 *
 *  Created on: 2018. 3. 26.
 *      Author: onekick
 */

#ifndef BLUETOOTHHANDLE_H_
#define BLUETOOTHHANDLE_H_

#include "CommHandle.h"

class BluetoothHandle : public CommHandle {
public:
	BluetoothHandle();
	virtual ~BluetoothHandle();

	bool open();
	bool close();
	bool read();
	bool wirite();
};

#endif /* BLUETOOTHHANDLE_H_ */
