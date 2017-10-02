
#include "puppetSpinnerManager.h"
#include "SM.h"
#include "Led.h"

LedClass led;
SMClass	 SPM;

const int buttonPin = 2;
int buttonState = 0;
static int pressCounter = 0;
static bool buttonPressed = false;
PuppetSpinnerManagerClass mng;

void setup()
{
	Serial.begin(9600);
	pinMode(buttonPin, INPUT);
	mng.init();
}

void loop(){
	buttonState = digitalRead(buttonPin);

	Serial.print("pressCounter: ");
	Serial.println(pressCounter);
	if (buttonState == HIGH){
		pressCounter++;
		buttonPressed = true;
	}

	if (pressCounter == 3){
		pressCounter = 0;
	}

	delay(10);

	if (buttonPressed){
		Serial.println("buttonPressed");
		
		buttonPressed = false;
		mng.notifyMe(pressCounter);
	}



}
