#pragma once
#include<iostream>
#include<string>
using namespace std; 


class Container {


	string name;
	double capacity;
	double volume;

public:

	//Constructor
	Container();
	Container(string name, double capacity);


	//Getters
	double getCapacity();
	double getVolume();

	//Actions
	void emptyContainer();
	void fillsContainer();
	void transferContainer(Container& dest);



};