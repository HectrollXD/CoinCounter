#include <EasyBuzzer.h>
#include "counter.h"



//---------------------------------------------------------------------------------------------------------------------- Constructors
//-------------------------------------------------------------------------------------------------- base
Counter::Counter(): oneMXNCounter(0), twoMXNCounter(0), fiveMXNCounter(0), tenMXNCounter(0) {}

//---------------------------------------------------------------------------------------------------------------------- Getters
//-------------------------------------------------------------------------------------------------- one mxn counter
unsigned int Counter::getOneMXNCounter() const{
	return this->oneMXNCounter;
}

//-------------------------------------------------------------------------------------------------- two mxn counter
unsigned int Counter::getTwoMXNCounter() const{
	return this->twoMXNCounter;
}

//-------------------------------------------------------------------------------------------------- five mxn counter
unsigned int Counter::getFiveMXNCounter() const{
	return this->fiveMXNCounter;
}

//-------------------------------------------------------------------------------------------------- ten mxn counter
unsigned int Counter::getTenMXNCounter() const{
	return this->tenMXNCounter;
}

//---------------------------------------------------------------------------------------------------------------------- Setters
//-------------------------------------------------------------------------------------------------- one mxn counter
void Counter::setOneMXNCounter(const unsigned int &oneMXNCounter){
	this->oneMXNCounter = oneMXNCounter;
}

//-------------------------------------------------------------------------------------------------- two mxn counter
void Counter::setTwoMXNCounter(const unsigned int &twoMXNCounter){
	this->twoMXNCounter = twoMXNCounter;
}

//-------------------------------------------------------------------------------------------------- five mxn counter
void Counter::setFiveMXNCounter(const unsigned int &fiveMXNCounter){
	this->fiveMXNCounter = fiveMXNCounter;
}

//-------------------------------------------------------------------------------------------------- ten mxn counter
void Counter::setTenMXNCounter(const unsigned int &tenMXNCounter){
	this->tenMXNCounter = tenMXNCounter;
}

//---------------------------------------------------------------------------------------------------------------------- Methods
//-------------------------------------------------------------------------------------------------- beep sound
void Counter::beepSound(){
	EasyBuzzer.beep(2000, 100, 100, 1, 300, 1);
}

//-------------------------------------------------------------------------------------------------- total
unsigned int Counter::getTotal() const{
	return this->oneMXNCounter + this->twoMXNCounter + this->fiveMXNCounter + this->tenMXNCounter;
}

//-------------------------------------------------------------------------------------------------- coin counter
unsigned int Counter::getCoinCounter() const{
	return this->oneMXNCounter + (this->twoMXNCounter / 2) +
		(this->fiveMXNCounter / 5) + (this->tenMXNCounter / 10);
}

//-------------------------------------------------------------------------------------------------- append one
void Counter::appendOneMXN(){
	this->oneMXNCounter++;
	beepSound();
}

//-------------------------------------------------------------------------------------------------- append two
void Counter::appendTwoMXN(){
	this->twoMXNCounter += 2;
	beepSound();
}

//-------------------------------------------------------------------------------------------------- append five
void Counter::appendFiveMXN(){
	this->fiveMXNCounter += 5;
	beepSound();
}

//-------------------------------------------------------------------------------------------------- append ten
void Counter::appendTenMXN(){
	this->tenMXNCounter += 10;
	beepSound();
}
