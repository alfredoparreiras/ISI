#include<iostream>
#include<iomanip>
using namespace std; 

/*
6.	Write a program that allows you to decompose a given number (smaller than or equal to 10000) into values of 1000, 100, 10 and 1:

	example:

	If the user enters 402, the program will display:

		4 hundred
		0 dozen
		2 units

	If the user enters 1110, the program will display:

		1 thousand
		1 hundred
		1 dozen
		0 units

*/

//Global Variables 
string givenNumber{  };

enum Numbers {
	Zero,
	One, 
	Two, 
	Three, 
	Four, 
	Five, 
	Six, 
	Seven, 
	Eight, 
	Nine, 
};


//FUNCTION's PROTOTYPE
void tenToOneHundred();
void hundredToThousand();
void thousandToTenTHousand();

int main() {

	cout << "Enter a number : ";
	cin >> givenNumber;
	cout << endl;
	
	if (givenNumber.length() <= 2) {
		
		tenToOneHundred();
	}
	else if (givenNumber.length() <= 3) {
		
		hundredToThousand();
	}
	else if (givenNumber.length() <= 4 || givenNumber == "10000") {
		
		thousandToTenTHousand();
	}
	else {
		cout << setw(15) << "You need to insert a number smaller or equal than 10000;";
	}

	return 0;

}

//void zeroToTen() {
//
//	
//	cout << setw(2) << givenNumber[0] << setw(2) << " Dozen\n";
//	cout << setw(2) << givenNumber[1] << setw(2) << " Unit\n";
//
//}

void tenToOneHundred() {

	if (givenNumber.length() < 2) {
		cout << setw(2) << givenNumber[0] << setw(2) << " Unit\n";
	}
	else if (givenNumber.length() == 2) {
		cout << setw(2) << givenNumber[0] << setw(2) << " Dozen\n";
		cout << setw(2) << givenNumber[1] << setw(2) << " Unit\n";
	}
	else {
		cout << setw(2) << givenNumber[0] << setw(2) << " Hundred\n";
		cout << setw(2) << givenNumber[1] << setw(2) << " Dozen\n";
		cout << setw(2) << givenNumber[2] << setw(2) << " Unit\n";
	}
}

void hundredToThousand() {

	
	cout << setw(2) << givenNumber[0] << setw(2) << " Hundred\n";
	cout << setw(2) << givenNumber[1] << setw(2) << " Dozen\n";
	cout << setw(2) << givenNumber[2] << setw(2) << " Unit\n";

}

void thousandToTenTHousand() {

	if (givenNumber == "10000") {
		cout << setw(2) << givenNumber[0] << givenNumber[1] << setw(2) << " Thousands\n";
		cout << setw(2) << 0 << setw(2) << " Hundred\n";
		cout << setw(2) << givenNumber[2] << setw(2) << " Dozen\n";
		cout << setw(2) << givenNumber[3] << setw(2) << " Unit\n";
	}
	else if (givenNumber != "10000") {
		cout << setw(2) << givenNumber[0] << setw(2) << " Thousand\n";
		cout << setw(2) << givenNumber[1] << setw(2) << " Hundred\n";
		cout << setw(2) << givenNumber[2] << setw(2) << " Dozen\n";
		cout << setw(2) << givenNumber[3] << setw(2) << " Unit\n";
	}
}