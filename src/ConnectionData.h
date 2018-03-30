/*
 * ConnectionData.h
 *
 *  Created on: 2018. 3. 26.
 *      Author: onekick
 */

#ifndef CONNECTIONDATA_H_
#define CONNECTIONDATA_H_

#include <string>
using namespace std;

class ConnectionData {
private:
	string address;
	int port;
	string id;
	string pw;
	int baudRate;
public:
	ConnectionData();
	virtual ~ConnectionData();
	void save();
	void load();
};

#endif /* CONNECTIONDATA_H_ */
