#include "Helicopter.h"
#include<string>
#include<time.h>
#include<cstdlib>
#include<iomanip>
using namespace std;


const double Helicopter::MaxFuelLevel = 100;
const double Helicopter::MaxAltitude = 5000;
const double Helicopter::MinFuelRate = MaxFuelLevel * 0.05 / 100;
const double Helicopter::MaxFuelRate = MaxFuelLevel * 0.15 / 100;

Helicopter::Helicopter()
{
	fuelLevel = Helicopter::MaxFuelLevel;
	altitude = 0;
	engineRunning = false;
	exploded = false;
}
double Helicopter::getFuelLevel() { 
	
	return fuelLevel; 
}
int Helicopter::getAltitude(){	
	
	return altitude;
}
bool Helicopter::isEngineRunning()
{
	if (engineRunning) {
		return true;
	}

	return false;
}

bool Helicopter::isExploded()
{
	//add your code
	return false;
}

bool Helicopter::isFuelEmpty()
{
	if (fuelLevel == 0) {
		return true;
	}
	return (false);
}

bool Helicopter::isFuelFull()
{
	if (fuelLevel == 100) {
		return true;
	}
	return (false);
}

bool Helicopter::isLanded()
{
	if (altitude == 0) {
		return true;
	}
	return (false);
}

// Public
bool Helicopter::startEngine()
{
	bool success = true;
	Helicopter::engineRunning = true;
	return success;
}

bool Helicopter::stopEngine()
{
	bool success = true;
	Helicopter::engineRunning = false;
	cout << "Engine Stopping...." << endl;

	return success;
}

bool Helicopter::flyToAltitude(double altitude)
{
	bool success = true;
	cout << "Your currently altitude is " <<this->getAltitude() << endl << endl;;


	if (isEngineRunning()) {
		this->altitude += altitude;
		// generating random number of consume between 5 and 15;
		srand(time(0));
		double decimalFuelSpent = (rand() % (15 - 5 + 1) + 5) / static_cast<double>(100);
		this->fuelLevel -= this->fuelLevel * decimalFuelSpent;
		cout << "This trip spent : " << decimalFuelSpent * 100 << "% of fuel." << endl;
		cout << setprecision(2) <<  "This is your new fuel level: " << this->getFuelLevel() << endl;

		if (this->fuelLevel <= 0) {

			this->stopEngine();
			this->crashAndExplode();

		}
		if (altitude == 0) {
			this->altitude = 0;
		}

		cout << "Your actual altitude is " << this->altitude << endl << endl;
		return success;
	}

	return !success;
}

bool Helicopter::refuel(double amount)
{

	cout << "Actual Level of Fuel " << this->getFuelLevel() << endl;
	bool success = true;
	this->fuelLevel = MaxFuelLevel;
	cout << "New Level of Fuel " << this->getFuelLevel() << endl;
	return success;
}

std::string Helicopter::toString()
{
	return "Helicopter";
}

// Private methods

void Helicopter::setFuelLevel(double fuelLevel){
	this->fuelLevel = fuelLevel;
}

void Helicopter::crashAndExplode()
{
	cout << "KABUUUUUUMMMM BOOOOOOOOOOM";
}
