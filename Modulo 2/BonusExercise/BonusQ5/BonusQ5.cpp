#include<iostream>
using namespace std; 

/*

*/



int main() {

	cout << "Enter a number to check if it has factorial : ";
	int integer{ 0 };
	cin >> integer;
	cout << endl;

	while (cin.fail() || cin.peek() != '\n' || integer < 0) {
		cin.clear();
		cin.ignore(512, '\n');
		cout << "Enter the correct value : ";
		cin >> integer;
	}

	bool isFactorial{ false };

	int factorial{ 1 };

	for (int i{ 1 }; factorial <= integer; i++) {

		factorial *= i;

		int multiplyer = factorial;


		cout << factorial << " * " << i + 1 << " is " << multiplyer * (i + 1) << endl;
		
	

		if (factorial == integer) {
			cout << "The value has a factorial : " << i << endl;
			isFactorial = true;
			break;
		
		}
	}
	if (isFactorial == false) {

		cout << "This number doesn't have factorial." << endl;
	}

}