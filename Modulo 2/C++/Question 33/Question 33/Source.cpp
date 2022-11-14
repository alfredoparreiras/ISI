#include<iostream>
using namespace std; 


int main() {
	
	cout << "Enter the firt day : ";
	int day1{ 0 };
	cin >> day1;

	cout << "Enter the firt month : ";
	int month1{ 0 };
	cin >> month1;

	cout << "Enter the firt year : ";
	int year1{ 0 };
	cin >> year1;

	cout << "The next date will be " << day1 + 1 << "/" << month1 << "/" << year1 << ".";
}