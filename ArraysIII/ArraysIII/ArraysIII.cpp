#include<iostream>
#include<iomanip>
using namespace std; 


//FUNCTIONS PROTOTYPE
void initialize(double array[], int, double, double);
void initCube(int array[], int arraySize, int x);
void multiply(double array[], int arraySize, double x);
float largest(float array[], int arraySize);
float average(float array[], int arraySize);
int occurrences(int array[], int arraySize, int n);
void displayNegatives(float array[], int arraySize);
int elementsOverThreshold(int array[], int arraySize, int n);
void rotateRightward(int array[], int arraySize, int n);


int main() {

	int myArray[12] = { 4 ,3 ,8 ,3 ,6 ,4 ,9 ,5 ,0 ,1 ,5 ,2 };
	rotateRightward(myArray, 12, 4);
	

}

//void initialize(double array[], int arraySize, double x,double y) 
//	
//	array[0] = x;
//
//	for (int i{ 1 }; i < arraySize; i++) {
//		cout << "Enter a real number :\n";
//		cin >> y;
//		array[i] = y;
//	}
//}

void initCube(int array[], int arraySize, int x) {

	for (int i{ 0 }; i < arraySize; i++) {
		cout << "Enter a integer number :\n";
		cin >> x;
		array[i] = pow(i,3);
	}
}

void multiply(double array[], int arraySize, double x) {
	

	for (int i{ 1 }; i < arraySize; i++) {

		array[i] *= x;
	}

	for (int i{ 1 }; i < arraySize; i++) {

		cout << array[i] << "\t";
	}
}


//4)	Write a function that returns the largest element in an array of floats passed as a parameter.

float largest(float array[], int arraySize) {

	float largestElement{array[0]};

	for (int i{ 0 }; i < arraySize; i++) {
		if (array[i] > largestElement) {
			largestElement = array[i];
		}
	}

	return largestElement;
};

//5)	Write a function that returns the average of an array of floats passed as a parameter.
float average(float array[], int arraySize) {

	float totalSum{ 0 };

	for (int i{ 0 }; i < arraySize; i++) {
		totalSum += array[i];
	}

	return totalSum / arraySize;

	
};

//6)	Write a function that receives an array of integer and an integer n. It should return true if n is in the array, and false if not.
bool contains(int array[], int arraySize, int n) {
	
	for (int i{ 0 }; i < arraySize; i++) {
		if (array[i] == n) {
			return true;
		}
	}

	return false;
};

//7)	Write a function that receives an array of integers and an integer n. The function should return the number of times that this integer n is found in the array (number of occurrences).

int occurrences(int array[], int arraySize, int n) {

	int counter{ 0 };

	for (int i{ 0 }; i < arraySize; i++) {
		if (array[i] == n) {
			counter += 1;
		}
	}

	return counter;
};

//8)	Write a function that receives an array of floats, and that displays both the indices of the values that are strictly negative, as well as the values in question.

void displayNegatives(float array[], int arraySize) {
	for (int i{ 0 }; i < arraySize; i++) {
		if (array[i] < 0) {
			cout << setw(10) << "The number " << array[i] << " is negative and it is allocated at index " << i << endl;
		}
	}
};

//9 	Write a function that receives an array of integers and an integer n. The function should return the number of elements in the array that are greater or equal to n.

int elementsOverThreshold(int array[], int arraySize, int n) {

	int counter{ 0 };
	for (int i{ 0 }; i < arraySize; i++) {
		if (array[i] > n) {
			counter += 1;
		}
	}

	return counter;
};

//10)	Write a function that receives an array of integers and an integer n. The function applies n rightward rotations to the values contained in the elements of the array. Upon each rotation, the value of the last element of the array is placed in the first element, and the others are moved one element to the right.
//Example: If the function receives an array containing : 4 3 8 3 6 4 9 5 0 1 5 2, and if n is 4, then after the call, the array will contain : 0 1 5 2 4 3 8 3 6 4 9 5.

void rotateRightward(int array[], int arraySize, int n) {
	for (int i{ 0 }; i < arraySize; i++) {
		if (array[i] > n) {
			array[i] = array[i - n];
		}
		else {
			array[i] = array[i + n];
		};
	}

	for (int i{ 0 }; i < arraySize; i++) {
		cout << array[i] << " ";
	}
}