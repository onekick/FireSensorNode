/*
 * StopWatch.h
 *
 *  Created on: 2018. 3. 26.
 *      Author: onekick
 */

#ifndef STOPWATCH_H_
#define STOPWATCH_H_

class StopWatch {
private:
	long setTime = 0;

public:
	StopWatch();
	virtual ~StopWatch();
	long getRunningTime();
	void start();
	void stop();
	void reset();
};

#endif /* STOPWATCH_H_ */
