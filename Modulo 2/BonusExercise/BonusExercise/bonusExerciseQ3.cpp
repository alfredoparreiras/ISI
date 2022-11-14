#include<iostream>
using namespace std; 

/*
3] Write a program that display all divisors of a entered integer 
*/



int main() {

	int integer{ 0 };
	cout << "Enter an Integer number : \n";
	cin >> integer;

	for (int i{ 1 }; i < integer; i++) {
		
		if (integer % i == 0) {
			cout << "The integer " << integer << " is divided by " << i << endl;
		}
	}

	return 0;
}