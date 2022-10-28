#include<iostream>
#include<cmath>
using namespace std; 


/*
3)	Write a program that reads 40 integers. It should place the first 20 in an array X, and the final 20 in an array Y. Store inmemory, in a third array Z, the product of the corresponding elements in X and Y.
Display a table with three columns containing the arrays X, Y, and Z, and then display the square root of the sum of all elements in Z.*/

int main() {

	int sizeOfArray{ 40 };


	int* myArray = new int[sizeOfArray];

	// Insert Data inside the array
	for (int i = 0; i < sizeOfArray; i++) {

		myArray[i] = 2 * i + 30;
	}

	int myArrayX[20];
	int myArrayY[20];
	int myArrayZ[40];

	for (int i = 0; i < 20; i++) {
		myArrayX[i] = myArray[i];
	}

	for (int i{ 0 }, j{ 20 }; i < 20, j < 40; i++, j++) {
		myArrayY[i] = myArray[j];
	}

	for (int i{ 0 }; i < 40; i++) {
	
		myArrayZ[i] = myArrayX[i] * myArrayY[i];
	
	}

	cout << "This is the Array X. " << endl;
	for (int i{ 0 }; i < 20; i++) {
		cout << myArrayX[i] << " ";
	}

	cout << endl;

	cout << "This is the Array Y. " << endl;
	for (int i{ 0 }; i < 20; i++) {
		cout << myArrayY[i] << " ";
	}

	cout << endl;

	cout << "This is the Product of Array X and Array Y" << endl;
	for (int i{ 0 }; i < 20; i++) {
		cout << myArrayZ[i] << " ";
	}

	cout << endl;

	int totalSumArrayZ{ 0 };
	
	for (int i{ 0 }; i < 20; i++) {
		totalSumArrayZ = totalSumArrayZ + myArrayZ[i];
	}

	cout << "The total sum of the elements from array Z is " << totalSumArrayZ << " and the square root is " << sqrt(totalSumArrayZ) << ".\n";


}