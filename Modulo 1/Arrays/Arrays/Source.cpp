#include <iostream>
using namespace std; 

int main() {
	int sizeOfArray{ 0 }; 
	int integer{ 0 }; 
	int n{ 0 };

	cout << "Enter how many items do you want to add: "; 
	cin >> sizeOfArray; 

	int *myArray = new int[sizeOfArray];

	for (int i = 0; i < sizeOfArray; i++) {
		cout << "Insert the item: "; 
		cin >> integer; 
		myArray[i] = integer;
	}

	cout << "With what integer you want to compare?"; 
	cin >> n;


	for (int i = 0; i < sizeOfArray; i++) {
		if (myArray[i] == n) {
			cout << "The return is 1";
		}
		else {
			cout << "The return is 0";
		}
	}


}