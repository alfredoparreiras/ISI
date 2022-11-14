#include<iostream>
#include<iomanip>
using namespace std; 

//GLOBAL VARIABLES
int userOption;
short sizeOfArray{ 0 };
int integer{ 0 };

//FUNCTIONS PROTOTYPES
int menuList();
void printElements(int arr[]);
double average(int arr[]);
int smallest(int arr[]);
int largest(int arr[]);
int addNumber(int arr[], int integer);


int main(){

	int myList[] = { 10,12,23,245,12,32,12,32,12 };
	sizeOfArray = sizeof(myList) / sizeof(myList[0]);

	menuList();
	do {
		switch (userOption) {
		case 1:
			printElements(myList);
			break;
		case 2:
			cout << "Insert an integer :";
			cin >> integer;
			addNumber(myList, integer);
			break;
		case 3:
			cout << "The average of the elements inside the list is " << fixed << setprecision(2) << average(myList) / sizeOfArray << endl;
			break;
		case 4:
			cout << "The smallest number in your list is : " << smallest(myList) << endl;
			break;
		case 5:
			cout << "The largest number in your list is : " << largest(myList) << endl;

			break;
		}
		system("pause");
		menuList();
	} while (userOption != 6);

	return 0;
}



int menuList() {

	string userChoice;
	cout << left;
	cout << "Welcome to Menu List Project\n";
	cout << "Please choose an option\n";
	cout << endl << endl << endl;
	cout << "P - Print Numbers\n";
	cout << "A - Add a Number\n";
	cout << "M - Display mean of the numbers\n";
	cout << "S - Display the smallest number \n";
	cout << "L - Display the largest number \n";
	cout << "Q - Print Numbers\n";
	cout << endl << endl << endl;
	cout << "Enter your choice : ";
	cin >> userChoice;
	

	if (userChoice == "p" || userChoice == "P") {
		userOption = 1;
	}
	else if (userChoice == "a" || userChoice == "A") {
		userOption = 2;
	}
	else if (userChoice == "m" || userChoice == "M") {
		userOption = 3;

	}
	else if (userChoice == "s" || userChoice == "S") {
		userOption = 4;
	}
	else if (userChoice == "l" || userChoice == "L") {
		userOption = 5;
	}
	else if (userChoice == "q" || userChoice == "Q") {
		userOption = 6;
	}
	else {
		cout << "Please choose an Valid Option";
	}
	
	return userOption;

}

//FUNCTION TO PRINT THE LIST 
//TODO : PRINT AN EMPTY LIST 
void printElements(int arr[]) {
	
	cout << "Your list : [ ";
	for (int i{ 0 }; i < sizeOfArray;i++) {
		cout << arr[i] << " ";
	};
	cout << "]" << endl;
}

//FUNCTION TO ADD AN ELEMENT{
int addNumber(int arr[], int integer) {

	cout << integer << " add.";

	return arr[sizeOfArray] = integer;
}

//FUNCTION TO CALCULATE THE MEAN
double average(int arr[]) {
	int totalSum{ 0 };
	
	for (int i{ 0 }; i < sizeOfArray; i++) {
		totalSum += arr[i];
	};

	return totalSum;

}

//FUNCTIONS TO SHOW THE SMALLEST ELEMENT OF THE LIST 
int smallest(int arr[]) {

	int smallestNumber = arr[0];
	
	for (int i{ 0 }; i < sizeOfArray; i++) {
		if (arr[i] < smallestNumber) {
			smallestNumber = arr[i];
		}
	};

	return smallestNumber;

}

//FUNCTION TO SHOW THE LARGEST ELLEMENT OF THE LIST
int largest(int arr[]) {

	int largestNumber = arr[0];

	for (int i{ 0 }; i < sizeOfArray; i++) {
		if (arr[i] > largestNumber) {
			largestNumber = arr[i];
		}
	};

	return largestNumber;

}