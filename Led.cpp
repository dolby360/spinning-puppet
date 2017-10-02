
#include "Led.h"

void LedClass::init()
{
	//pinMode(Red, OUTPUT);
	//pinMode(Green, OUTPUT);
	//pinMode(Yellow, OUTPUT);
	Green	= A1;
	Red		= A0;
	Yellow	= A2;

	turnOfAllLeds();
}

void LedClass::turnGreen(int value){ analogWrite(Green, value); }
void LedClass::turnRed(int value){ analogWrite(Red, value); }
void LedClass::turnYellow(int value){ analogWrite(Yellow, value); }


void LedClass::turnOnAllLeds(){

	analogWrite(Green, analogVoltegHigh);
	analogWrite(Red, analogVoltegHigh);
	analogWrite(Yellow, analogVoltegHigh);
}

void LedClass::turnOfAllLeds(){
	analogWrite(Green, analogVoltegLow);
	analogWrite(Red, analogVoltegLow);
	analogWrite(Yellow, analogVoltegLow);
}

void LedClass::blink(int delayTime){
	analogWrite(Green, analogVoltegHigh);
	delay(delayTime);
	analogWrite(Green, analogVoltegLow);
	analogWrite(Red, analogVoltegHigh);
	delay(delayTime);
	analogWrite(Red, analogVoltegLow);
	analogWrite(Yellow, analogVoltegHigh);
	delay(delayTime);
	analogWrite(Yellow, analogVoltegLow);
}

void LedClass::spinnMode(int speed){
	int highSpeed = 50;
	int midSpeed = 100;
	int lowSpeed = 200;

	switch(speed){
	case 0:
		blink(lowSpeed);
		break;
	case 1:
		blink(midSpeed);
		break;
	case 2:
		blink(highSpeed);
		break;
	}
}
LedClass Led;

