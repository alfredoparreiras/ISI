#include<iostream>
using namespace std; 

/*6 –	Drivers are concerned with the mileage of their automobiles. A driver decides to record the number of kilometers traveled and the number of litres of gasoline used, each time they refill their gas tank. Develop a program with the goal of being able to enter the number of kilometers traveled and the number of litres used upon each gas refill. The program should calculate and display the rate of gas consumption (in litres per 100 kilometers) between each gas refill. After having processed all of the information entered, the program should calculate and display the total rate of gas consumption (in litres per 100 kilometers) for all of the gas refills.*/


int main() {

	// Inputs
	float liters{ 0 };
	float kilometersDriven{ 0 };
	float totalLiters{ 0 };
	float totalKilometersDriven{ 0 };


	//do {
	//	
	//	cout << "Enter the number of liters used ( -1 to terminate) " << endl;
	//	cin >> liters;

	//	cout << "Enter the number of kilometers traveled: " << endl;
	//	cin >> kilometersDriven;

	//	cout << "The rate of gas consumption in litres per 100 kilometers for this gas refill is " << (liters / kilometersDriven) * 100 << endl;

	//	totalLiters = totalLiters + liters;
	//	totalKilometersDriven = totalKilometersDriven + kilometersDriven;


	//} while (liters != -1);

	while (liters != -1) {
		cout << "Enter the number of liters used ( -1 to terminate) " << endl;
		cin >> liters;

		cout << "Enter the number of kilometers traveled: " << endl;
		cin >> kilometersDriven;

		cout << "The rate of gas consumption in litres per 100 kilometers for this gas refill is " << (liters / kilometersDriven) * 100 << endl;

		totalLiters = totalLiters + liters;
		totalKilometersDriven = totalKilometersDriven + kilometersDriven;
	}


	cout << totalLiters << endl << totalKilometersDriven;

}