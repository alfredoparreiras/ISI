#include <iostream>
using namespace std;

int main() {
	float interestRate{ 0.1 };
	int period{ 5 };
	float value{ 500000 };
	int year{ 0 };

	for (year = 1; year <= period; year++) {
		value = value + (value * interestRate);
		cout << "At the end of the year " << year << " year, you will have " << value << endl;

	}
}