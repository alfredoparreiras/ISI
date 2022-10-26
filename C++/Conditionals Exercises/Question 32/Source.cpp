#include<iostream>
using namespace std; 

/*
* 32 –	In a competition where scores are given by 6 judges, a competitor’s final score is calculated as follows: first the highest and the lowest of the initial scores are eliminated, and then one takes the average of the other 4 scores. You are asked to create a program that reads 6 scores and determines the final score according to this method.
*/

int main() {
	int sizeOfArray{ 6 };
	int integer{ 0 };

	int* myArray = new int[sizeOfArray];

	for (int i = 0; i < sizeOfArray; i++) {
		cout << "Insert the item: ";
		cin >> integer;
		myArray[i] = integer;
	}

	//Discovering the minimum , maximum grades and total sum

	int minimumGrade{ 100 };
	int maximumGrade{ 0 };
	float totalSum{ 0 };

	for (int i = 0; i < sizeOfArray; i++) {
		
		totalSum = totalSum + myArray[i];

		if (myArray[i] < minimumGrade) {
			minimumGrade = myArray[i];
		}
		else if (myArray[i] > maximumGrade) {
			maximumGrade = myArray[i];
		}
	}

	// Calculation of the final score using the rules 

	cout << "Your final score is " << (totalSum - maximumGrade - minimumGrade) / (sizeOfArray - 2) << ".";

}