#include"Helicopters.h"


//Constructor
Helicopter::Helicopter(string helicopterName) {
	Helicopter::helicopterName = helicopterName;

};

//Getters
double Helicopter::getFuelLevel() {
	return Helicopter::fuelLevel;
}

double Helicopter::getAltitude() {
	return Helicopter::altitude;
}

bool Helicopter::getEngineStatus() {
	return Helicopter::engineRunning;
}

// Methods

bool Helicopter::startEngine() {
	Helicopter::engineRunning = true;
}

bool Helicopter::stopEngine() {
	Helicopter::engineRunning = false;
}

bool Helicopter::flyToAltitude(double altitude) {
	
};

bool Helicopter::refuel(double amount) {
	if (Helicopter::fuelLevel += amount < Helicopter::fuelCapacity) {
		Helicopter::fuelLevel += amount;
		return true;

	}
	else {
		cout << "Your tank doesn't have this capacity, you have space for only " << Helicopter::fuelLevel - Helicopter::fuelCapacity;
		return false;
	}
};

string Helicopter::toString() {

	return this->helicopterName;

	cout << setw(20) << "\t--- Helicopter Information ---\t" << endl;
	cout << setw(10) << "This is the helicopter model " << Helicopter::helicopterName << endl;
	cout << setw(10) << "Its maximum altitude is  " << Helicopter::maximumAltitude << endl;
	cout << setw(10) << "Its fuel capacibility is " << Helicopter::fuelCapacity << endl;

};

