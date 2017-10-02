// puppetSpinnerManager.h
#include "SM.h"
#include "Led.h"

#ifndef _PUPPETSPINNERMANAGER_h
#define _PUPPETSPINNERMANAGER_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif

class PuppetSpinnerManagerClass
{
 private:
	 SMClass STPM;
	 LedClass led;
 public:
	void init();
	void notifyMe(int level);
};

extern PuppetSpinnerManagerClass PuppetSpinnerManager;

#endif

