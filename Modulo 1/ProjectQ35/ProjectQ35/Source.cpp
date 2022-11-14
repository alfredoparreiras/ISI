#include <iostream>
using namespace std; 

//35 –	Write an algorithm that calculates the sum of all the integers contained(inclusively) between 
//two positive integer limits entered by the user.The program reads the smallest limit first.
//Example: the sum of the integers between 5 and 10, inclusively.


int main() {
	int smallestInteger{ 0 };
	int largestInteger{ 0 };
	int sumOfIntegers{ 0 };

	cout << "Enter the smallest integer: ";
	cin >> smallestInteger;

	cout << "Enter the largest integer: ";
	cin >> largestInteger;

	for (int i = smallestInteger; i <= largestInteger; i++) {
		sumOfIntegers = sumOfIntegers + i;
	}

	cout << "The sum of the integers is " << sumOfIntegers << endl;



}