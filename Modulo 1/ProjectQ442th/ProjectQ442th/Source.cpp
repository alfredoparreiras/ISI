#include <iostream>
using namespace std; 

int main() {

	float interestRate{ 0 };
	int period{ 0 };
	float value{ 0 };
	int year{ 0 };


	cout << "Whats is the value that you want to simulate? ";
	cin >> value;

	cout << "Whats the interest rate of this investment? ";
	cin >> interestRate;

	cout << "What is the period of this investment? ";
	cin >> period;

	for (year = 1; year <= period; year++) {
		value = value + (value * (interestRate / 100));
		cout << "At the end of the " << year << " year, you will have  "  << value << " Dollars." << endl;
	}
}