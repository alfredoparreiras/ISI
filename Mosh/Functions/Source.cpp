#include<iostream>
using namespace std; 


void increasePrice(double price);


int main() {

	//greeting(); // Calling - Invoking

	// Remember functions can receive default values as paremeters. But remember if I want to use a default value, this parameter needs to be the last one. Bc if I put at the begin all others parameters needs to have another default parameters. 

	// Overloading Functions 
	// To be possible to overloading Functions, each function need to have a singular signature.
	//greet("sr", "Alfredo");
	//cout << endl;
	//greet("alfredo");

	//PASSING ARGUMENTS BY VALUE OR REFERENCE

	double price{ 100 };

	increasePrice(price);

	cout << price; 


}


void increasePrice(double price) {
	price *= 1.2;
}

//	OVERLOADING
//void greet(string name, string lastname) {
//	cout << "Hello " << name << lastname;
//}
//
//
////Function Signature = name of function + type of parameters
//void greet(string title, string name) {
//	cout << "Hello " << title << " " << name;
//}


