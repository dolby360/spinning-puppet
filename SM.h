// SM.h

#ifndef _SM_h
#define _SM_h

#include <Stepper.h>

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif

const int stepsPerRevolution = 200;
static Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

class SMClass
{
private:

	int stepCount;
 public:
	void init();
	void sipnnMe();
	void halfSpinn();
	void spinnWithA_Variables(int rounds,int sleepBetweenSteps);
};

extern SMClass SM;

#endif

