// Libraries fro OLED display
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>
#include <Wire.h>
// Library fro buzzer
#include <EasyBuzzer.h>
// Custom libraries
#include "counter.h"



Counter *counter = new Counter();
int oneInput = 0, twoInput = 0, fiveInput = 0, tenInput = 0, i = 0;
bool oneIsOnCourse = false, twoIsOnCourse = false, fiveIsOnCourse = false, tenIsOnCourse = false;



void setup() {
	Serial.begin(9600);
	// Declaración de pines para los botones.
	pinMode(2, INPUT);
	pinMode(3, INPUT);
	pinMode(4, INPUT);
	pinMode(5, INPUT);
	pinMode(6, INPUT);
	pinMode(7, INPUT);
	// Declaración de pines para el buzzer.
	EasyBuzzer.setPin(9);
}

void loop() {
	oneInput = analogRead(A2);
	twoInput = analogRead(A3);
	fiveInput = analogRead(A4);
	tenInput = analogRead(A5);

	// TODO: Hacer en clase Program
	if( oneInput < 256 ){
		if( ! oneIsOnCourse ){
			counter->appendOneMXN();
			oneIsOnCourse = true;
		}
	}
	else{
		oneIsOnCourse = false;
	}

	if( twoInput < 256 ){
		if( ! twoIsOnCourse ){
			counter->appendTwoMXN();
			twoIsOnCourse = true;
		}
	}
	else{
		twoIsOnCourse = false;
	}

	if( fiveInput < 256 ){
		if( ! fiveIsOnCourse ){
			counter->appendFiveMXN();
			fiveIsOnCourse = true;
		}
	}
	else{
		fiveIsOnCourse = false;
	}

	if( tenInput < 256 ){
		if( ! tenIsOnCourse ){
			counter->appendTenMXN();
			tenIsOnCourse = true;
		}
	}
	else{
		tenIsOnCourse = false;
	}

	Serial.print("Total: "); Serial.print(counter->getTotal());
	Serial.print(" Monedas: "); Serial.println(counter->getCoinCounter());
	EasyBuzzer.update();
}
