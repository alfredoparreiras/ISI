#include<iostream>
using namespace std; 

/*3 –	Make a program that calculates an employee’s gross salary for a week, given their hourly rate and the number of hours worked. */


int main() {

	// Inputs inserted by user 
	cout << "Enter how many hours do you worked this week. ";
	float hoursWorked{ 0 };
	cin >> hoursWorked;

	cout << "Enter your hourly rate. ";
	float hourlyRate{ 0 };
	cin >> hourlyRate;

	//Calculate the gross salary
	cout << "Your gross salary for this week is " << hoursWorked * hourlyRate << endl;
}