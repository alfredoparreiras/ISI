#include"Person.h"


//Constructors
Person::Person(string name) {
	Person::name = name;
};

Person::Person() {};


string Person::display() {
	return name;
};