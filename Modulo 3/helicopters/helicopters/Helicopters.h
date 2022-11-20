#pragma once
#include<iostream>
#include<string>
#include<iomanip>
using namespace std; 


class Helicopter {
	string helicopterName;
	double fuelLevel;
	double altitude;
	bool engineRunning;
	const short maximumAltitude{ 12000 };
	const short fuelCapacity{ 100 };


public:
	//Constructor
	Helicopter(string helicopterName);

	//Getters
	double getFuelLevel();
	double getAltitude();
	bool getEngineStatus();

	//Methods;
	bool startEngine();
	bool stopEngine();
	bool flyToAltitude(double altitude);
	bool refuel(double amount);
	void toString();
};