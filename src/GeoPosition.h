/*
 * GeoPosition.h
 *
 *  Created on: 2018. 3. 26.
 *      Author: onekick
 */

#ifndef GEOPOSITION_H_
#define GEOPOSITION_H_

class GeoPosition {
private:
	double latitude = 0;
	double longitude = 0;
public:
	GeoPosition();
	virtual ~GeoPosition();

	double getLatitude() const {
		return latitude;
	}

	void setLatitude(double latitude = 0) {
		this->latitude = latitude;
	}

	double getLongitude() const {
		return longitude;
	}

	void setLongitude(double longitude = 0) {
		this->longitude = longitude;
	}
};

#endif /* GEOPOSITION_H_ */
