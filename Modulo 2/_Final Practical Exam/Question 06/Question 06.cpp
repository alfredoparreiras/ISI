#include<iostream>
using namespace std; 

//FUNCTION PROTOTYPE 
int countPairNumberInArray(int arr[], int);

int main() {

	int myArray[10] = { 10,20,30,1,3,5,7,40,50,60 };

	cout << "This array contain " << countPairNumberInArray(myArray, 10) << " even numbers.";

}

int countPairNumberInArray(int arr[], int sizeOfarray) {
	short counter{ 0 };

	for (int i{ 0 }; i < sizeOfarray; i++) {
		if (arr[i] % 2 == 0) {
			counter += 1;
		}
	}

	return counter;
}