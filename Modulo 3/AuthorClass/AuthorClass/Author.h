#pragma once
#include<string>
#include<iostream>
using namespace std;

class Author {

	string authorsName;
	unsigned short contribution;


public:

	//Constructors
	Author() {};
	Author(string name, unsigned short percentage);

	//Setters and Getters
	void setName(string name);
	void setContribution(unsigned short percentage);
	string getName();
	double getContribution();
	void display();
};
