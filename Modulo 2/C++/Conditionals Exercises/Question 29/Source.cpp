#include<iostream>
using namespace std; 


/*Instructions 
29 –	Write an algorithm that reads two triplets day1, month1, year1, and day2, month2, year2, representing two dates, and that determines whether the first date comes before the second.
*/


int main() {
	// Inputs from the user 

	cout << "Enter the firt day : ";
	int day1{ 0 };
	cin >> day1;

	cout << "Enter the firt month : ";
	int month1{ 0 };
	cin >> month1;

	cout << "Enter the firt year : ";
	int year1{ 0 };
	cin >> year1;

	cout << "Enter the second day : ";
	int day2{ 0 };
	cin >> day2;

	cout << "Enter the second month : ";
	int month2{ 0 };
	cin >> month2;

	cout << "Enter the second year : ";
	int year2{ 0 };
	cin >> year2;

	if (year1 < year2) {
		cout << "The first date " << day1 << "/" << month1 << "/" << year1 << " came before than the second date, " << day2 << "/" << month2 << "/" << year2;
	}
	else {
		cout << "The second date " << day2 << "/" << month2 << "/" << year2 << " came before than the first date, " << day1 << "/" << month1 << "/" << year1;
	}

}