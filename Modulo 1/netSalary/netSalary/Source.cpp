#include <iostream>
using namespace std; 

int main() {
	float hourlyWage{ 0 }, numberOfHours, netSalary, grossSalary;


	//Hourly age must be between $18.25 and $30.
	do {
		cout << "Enter your hourly wage (The hourly wage must be between $18.25 and $30. : " << endl;
		cin >> hourlyWage;
	} while (hourlyWage <= 18.25 || hourlyWage > 30);


		//Number of hours must be between 0 and 75.
	do {
		cout << "Enter your number of hours : " << endl;
		cin >> numberOfHours;
	} while (numberOfHours <= 0 || numberOfHours > 75);

	float extraHours = 0; 

	if (numberOfHours > 40) {
		extraHours = numberOfHours - 40;
		grossSalary = 40 * hourlyWage + extraHours * 1.5 * hourlyWage;
	}
	else {
		grossSalary = hourlyWage * numberOfHours;
	}

	if (grossSalary < 500) {
		netSalary = grossSalary - (grossSalary * .2);
	}
	else {
		netSalary = grossSalary - (grossSalary * .3);
	}

	cout << grossSalary << endl;
	cout << netSalary;

}