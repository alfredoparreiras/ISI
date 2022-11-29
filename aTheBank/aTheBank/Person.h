#pragma once
#include<iostream>
using namespace std;

class Person {

public:
	//Methods
	string display();


	//Constructors
	Person() = default;
	explicit Person(string name);

private:
	string name;
};
