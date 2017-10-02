// 
// 
// 

#include "puppetSpinnerManager.h"

void PuppetSpinnerManagerClass::init(){
	STPM.init();
	led.init();
}


void PuppetSpinnerManagerClass::notifyMe(int level){
	switch (level){
	case 0:
		Serial.println("mng case 0");
		led.turnOnAllLeds();
		STPM.spinnWithA_Variables(300,5);
		break;
	case 1:
		Serial.println("mng case 1");
		for (int i = 0; i < 25; i++){
			led.turnGreen((i + 100) * 2);
			STPM.spinnWithA_Variables(4, 5);
			led.turnGreen(0);

			led.turnRed((i + 100) * 2);
			STPM.spinnWithA_Variables(4, 5);
			led.turnRed(0);

			led.turnYellow((i + 100) * 2);
			STPM.spinnWithA_Variables(4, 5);
			led.turnYellow(0);
		}
		led.turnOnAllLeds();
		break;
	case 2:
		Serial.println("mng case 2");
		for (int i = 0; i < 25; i++){
			led.turnGreen((i + 100)* 2);
			STPM.spinnWithA_Variables(4, 2);
			led.turnGreen(0);

			led.turnRed((i + 100) * 2);
			STPM.spinnWithA_Variables(4, 2);
			led.turnRed(0);

			led.turnYellow((i + 100) * 2);
			STPM.spinnWithA_Variables(4, 2);
			led.turnYellow(0);
		}
		led.turnOnAllLeds();
		break;
	}
}

PuppetSpinnerManagerClass PuppetSpinnerManager;

