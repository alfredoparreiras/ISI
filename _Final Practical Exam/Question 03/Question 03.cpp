#include<iostream>
using namespace std;

/*
Function averageOddValue 
Parameters : array of int
Return : average with decimal of the odd (Impar) values
*/

/* Function Prototype*/
double averageOddValue(int arr[],int);


int main() {

	int myArray[15] = { 12,13,14,15,16,17,18,19,20,21,22,23,24,25,26 };

	cout << "The average of odd numbers inside this array is : " << averageOddValue(myArray, 15);



}

double averageOddValue(int arr[], int sizeOfArray) {
	double averageOddNumbers{ 0 };
	int counterOddNumbers{ 0 };
	double sumOddNumbers{ 0 };

	for (int i{ 0 }; i < sizeOfArray; i++) {
		if (arr[i] % 2 != 0) {
			counterOddNumbers += 1;
			sumOddNumbers = sumOddNumbers + arr[i];
		}
	}

	averageOddNumbers = sumOddNumbers / counterOddNumbers;

	return averageOddNumbers;
}