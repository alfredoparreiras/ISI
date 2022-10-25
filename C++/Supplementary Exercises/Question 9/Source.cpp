#include<iostream>
using namespace std;


int main() {

	int sizeOfArray{ 0 };
	int integer{ 0 };
	int n{ 0 };

	cout << "Enter the size of the binary number: ";
	cin >> sizeOfArray;

	int* myArray = new int[sizeOfArray];
	int decimalNumber{ 0 };


	// Insert Data inside the array
	for (int i = 0; i < sizeOfArray; i++) {
		cout << "Enter each position for a binary number: ";
		cin >> integer;
		myArray[i] = integer;
	}

	int i{ 0 };
	int j{ 0 };

	for (i = sizeOfArray - 1, j = 0; i < sizeOfArray && i >= 0, j < sizeOfArray; --i, j++) {

		decimalNumber = decimalNumber + (myArray[j] * pow(2, i));

		/*cout << myArray[j] << " and the pow result is "<< myArray[j] * pow(2,i) << " and the iterator is " << i << endl;*/

	}

	cout << " You enter this binary number, ";

	for (i = 0; i < sizeOfArray; i++) {
		cout << myArray[i];
	}

	cout << " in decimal number ,the value is " << decimalNumber << "." << endl;

}