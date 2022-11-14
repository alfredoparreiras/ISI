#include<iostream>
using namespace std; 

/* Displays the price of a cinema ticket , according to the age and the day of the week
It should display the price of the ticket , the amount in $ of discount applied, the age of the cliente and the day of the week ( in letters ). 

The Base price of a ticket is $9.

The day of week is to be enconded as an integer : 1 for monday... 7 sunday

*/


int main() {

	//Inputs from user 
	cout << "Whats is your age? ";
	int age{ 0 };
	cin >> age; 
	cout << "Your age was resgistered." << endl << endl;

	cout << "What day of week you want to see the movie ? " << endl << "1) Monday" << endl << "2) Tuesday" << endl << "3) Wednesday" << endl << "4) Thursday" << endl << "5) Friday" << endl << "6) Saturday" << endl << "7) Sunday" << endl << endl;
	int dayOfWeek{ 0 };
	cin >> dayOfWeek;
	
	cout << "The choosed day was registered." << endl << endl;

	//Internal Data 

	const int baseTicket{ 9 };

	// Discount Applied 
	double discountRate{ 0 };

	if (age < 16 || age > 65) {
		if (dayOfWeek == 1 || dayOfWeek == 5 || dayOfWeek == 6 || dayOfWeek == 7) {
			discountRate = .1;
		}
		else {
			discountRate = .3;
		}
	}

	if (age > 16 && age < 65) {
		if (dayOfWeek == 1 || dayOfWeek == 4) {
			discountRate = .2;
		}
	}

	//Calculation of ticket value and Date Letter
	int valueTicket{ 0 };
	float discountApplied{ 0 };

	valueTicket = baseTicket - (baseTicket * discountRate);
	discountApplied = baseTicket - valueTicket;

	string dayLetter{ "" };
	if (dayOfWeek == 1) {
		dayLetter = "Monday";
	}
	else if (dayOfWeek == 2) {
		dayLetter = "Tuesday";
	}
	else if (dayOfWeek == 3) {
		dayLetter = "Wednesday";
	}
	else if (dayOfWeek == 4) {
		dayLetter = "Thursday";
	}
	else if (dayOfWeek == 5) {
		dayLetter = "Friday";
	}
	else if (dayOfWeek == 6) {
		dayLetter = "Saturday";
	}
	else if (dayOfWeek == 7) {
		dayLetter = "Sunday";
	}
	else {
		cout << "Something gone wrong during the day applying.";
	}

	//Displaying the information 

	cout << "The total value of your purchase is $" << valueTicket << ", the total amount of discount receive is $" << discountApplied << "." << endl << "This discount was applied to your purchase because you are " << age << " years old and bought a ticket for " << dayLetter << "." << endl;


}