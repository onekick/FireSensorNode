/*
 * ThingPlugPacket.h
 *
 *  Created on: 2018. 3. 26.
 *      Author: onekick
 */

#ifndef THINGPLUGPACKET_H_
#define THINGPLUGPACKET_H_

class ThingPlugPacket {
private:
	long id;
	long time;
	double smokeDensity;
	double batteryPowerLevel;
	double latitude;
	double longitude;
public:
	ThingPlugPacket();
	virtual ~ThingPlugPacket();

	double getBatteryPowerLevel() const {
		return batteryPowerLevel;
	}

	void setBatteryPowerLevel(double batteryPowerLevel) {
		this->batteryPowerLevel = batteryPowerLevel;
	}

	long getId() const {
		return id;
	}

	void setId(long id) {
		this->id = id;
	}

	double getLatitude() const {
		return latitude;
	}

	void setLatitude(double latitude) {
		this->latitude = latitude;
	}

	double getLongitude() const {
		return longitude;
	}

	void setLongitude(double longitude) {
		this->longitude = longitude;
	}

	double getSmokeDensity() const {
		return smokeDensity;
	}

	void setSmokeDensity(double smokeDensity) {
		this->smokeDensity = smokeDensity;
	}

	long getTime() const {
		return time;
	}

	void setTime(long time) {
		this->time = time;
	}
};

#endif /* THINGPLUGPACKET_H_ */
