#include "SM.h"

void SMClass::init(){
	stepCount = 0;
	pinMode(8,HIGH);
	pinMode(9, HIGH);
	pinMode(10, HIGH);
	pinMode(11, HIGH);
}

void makeRound(int sleepBetweenSteps){
	digitalWrite(8, HIGH);
	digitalWrite(9, LOW);
	digitalWrite(10, LOW);
	digitalWrite(11, LOW);
	delay(sleepBetweenSteps);
	digitalWrite(8, LOW);
	digitalWrite(9, HIGH);
	digitalWrite(10, LOW);
	digitalWrite(11, LOW);
	delay(sleepBetweenSteps);
	digitalWrite(8, LOW);
	digitalWrite(9, LOW);
	digitalWrite(10, HIGH);
	digitalWrite(11, LOW);
	delay(sleepBetweenSteps);
	digitalWrite(8, LOW);
	digitalWrite(9, LOW);
	digitalWrite(10, LOW);
	digitalWrite(11, HIGH);
	delay(sleepBetweenSteps);
}

void SMClass::spinnWithA_Variables(int rounds, int sleepBetweenSteps){
	for (int i = 0; i < rounds; i++){
		makeRound(sleepBetweenSteps);
	}
}

void SMClass::sipnnMe(){
	for (int i = 0; i < 1000; i++){
		myStepper.step(1);
		stepCount++;
		delay(5);
	}
}

void SMClass::halfSpinn(){
	for (int i = 0; i < 500; i++){
		myStepper.step(1);
		stepCount++;
		delay(5);
	}
}

SMClass SM;

