#include"Person.h"


//Constructors
Person::Person(string name) {
	Person::name = name;
};


string Person::display() {
	return name;
};