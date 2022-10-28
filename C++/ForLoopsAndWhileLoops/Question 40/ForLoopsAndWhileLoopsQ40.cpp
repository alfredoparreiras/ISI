#include<iostream>
using namespace std; 

/* Instructions 
40 –	Write a program that reads 1000 numbers and determines the largest and the smallest.
*/


int main() {
	int sizeOfArray{ 1000 };
	int integer{ 0 };

	int* myArray = new int[sizeOfArray];

	for (int i = 0; i < sizeOfArray; i++) {

		myArray[i] = 12 + i * 2;
	}

	//Discovering the minimum , maximum grades and total sum

	int smaller{ 2147483647 };
	int largest{ 0 };

	for (int i{0}; i < sizeOfArray; i++) {

		if (myArray[i] < smaller) {
			smaller = myArray[i];
		}
		else if (myArray[i] > largest) {
			largest = myArray[i];
		}
	}

	cout << "The minimum number is " << smaller << "." << endl;
	cout << "The largest number is " << largest << "." << endl;

}