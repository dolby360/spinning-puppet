// Led.h

#ifndef _LED_h
#define _LED_h

#define blinkDelay 6
#define analogVoltegHigh 255
#define analogVoltegLow 0

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif

class LedClass
{
private:
	int Green;
	int Red;
	int Yellow;

	
 public:
	void init();
	void turnOnAllLeds();
	void turnOfAllLeds();
	void spinnMode(int speed);
	void blink(int delayTime);

	void turnGreen(int value);
	void turnRed(int value);
	void turnYellow(int value);
};

extern LedClass Led;

#endif

