#include <iostream>
using namespace std; 

/*44 –	You just won a million dollars! You decide to invest $500,000 in a term deposit for a period of 5 years. 
The annual interest rate is 10%, and the interest is added to the principal sum each year (compound interest). 
How much will your savings be worth in 5 years?

a)	Make the algorithm with specified number (internal data).
b)	Generalize for any amount, any duration, and any interest rate.
*/


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
		value = value + (value * (interestRate/100);
		cout << interestRate;
		//cout << "At the end of the " << year << " year, you have  " << value << "Dollars." << endl;
	}
} 