#include<iostream>
using namespace std; 

/*Instructions
* Create an algorithm that determines whether a year provided by the user is a leap year. To be a leap year, a year must be divisible by 4 but not divisible by 100; despite this, if it is divisible by 400, it is a leap year after all.
Example: 2000 is a leap year, but 1700, 1800, and 1900 are not.

*/


int main() {
	cout << "Insert the year to check if its leap or not: ";
	int year{ 0 };
	cin >> year;

	if (year % 400 == 0) {
		cout << "The year " << year << " is a leap year.";
	}
	else {
		cout << "The year " << year << " is not a leap year.";
	}
}