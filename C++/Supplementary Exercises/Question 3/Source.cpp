#include<iostream>
using namespace std; 

/*3 –	Write a program that asks the user to enter two integers, and that displays the larger number, followed by the words “ is greater than ”, followed by the smaller number. However, if the numbers are equal, the program should display “These numbers are equal.”*/


int main() {

	// Inputs
	cout << "Insert the first integer : ";
	int firstInteger{ 0 };
	cin >> firstInteger;

	cout << "Insert the second integer : ";
	int secondInteger{ 0 };
	cin >> secondInteger;

	if (firstInteger > secondInteger) {
		cout << "The integer " << firstInteger << " is greater than " << secondInteger << endl;
	}
	else if (firstInteger == secondInteger) {
		cout << "These numbers are equal!";
	}
	else {
		cout << "The integer " << secondInteger << " is greater than " << firstInteger << endl;
	}



}