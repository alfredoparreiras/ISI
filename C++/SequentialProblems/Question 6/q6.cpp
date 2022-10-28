#include<iostream>
using namespace std; 

/*6 –	A dealership selling new vehicles asks you to construct a program that calculates the compensation paid to their salespeople. The base salary for all the salespeople is $400. For each vehicle sold, the salesperson receives a commission of $200. Also, the salesperson receives a bonus of 5% of the total amount of all their sales.
Make the program for a salesperson.
*/




int main() {

	// Inputs 
	
	cout << "How many cars the salespeople sold this month? ";
	int carsSold{ 0 };
	cin >> carsSold;

	// Internal Data
	int baseSalary{ 400 };
	int commisionPerCar{ 200 };
	float bonus{ .05 };

	//Calculate the Salary 2400 + 5%

	float grossSalary{ 0 };
	grossSalary = (baseSalary + (carsSold * commisionPerCar));
	grossSalary = grossSalary + (grossSalary * bonus);
	cout << "The salary for this month is " << grossSalary  << endl;

}