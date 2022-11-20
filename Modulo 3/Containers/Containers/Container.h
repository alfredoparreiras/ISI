#pragma once
#include<iostream>
#include<string>
using namespace std; 


class Container {
	double capacity;
	double volume;

public:

	//Constructor
	Container(double capacity) {
		Container::capacity = capacity;
	}

	//Setters
	void setCapacity(double aCapacity);

	//Getters
	double getCapacity();
	double getVolume();

	//Actions
	void emptyContainer();
	void fillsContainer();
	void transferContainer(Container& dest);



};