#pragma once
#pragma once
#include <string>
#include<iostream>
//#include "Strings.h"
//#include "Random.h"
using namespace std; 

class Helicopter
{
public:
	static const double MaxFuelLevel;
	static const double MaxAltitude;
	static const double MinFuelRate;
	static const double MaxFuelRate;

private:
	double fuelLevel;
	int altitude;
	bool engineRunning;
	bool exploded;

public:
	Helicopter();

	double getFuelLevel();
	int getAltitude();
	bool isEngineRunning();
	bool isExploded();
	bool isFuelEmpty();
	bool isFuelFull();
	bool isLanded();

	bool startEngine();
	bool stopEngine();
	bool flyToAltitude(double altitude);
	bool refuel(double amount);

	std::string toString();

private:
	void setFuelLevel(double fuelLevel);
	void crashAndExplode();
};
