#include<iostream>
#include <cstdlib>
using namespace std; 

/*
Guess a number between 1 and 100 in 10 chances
Generate a number between 1 - 100
Validade numerical input and between 1 and 100 
Determine if it was found
Determine the prize

-- Function for Determine found and needs to return -1 , 0 or 1, representing low, equal or too high
-- main() function is the one that should display the amount won of a prize


*/

void determineIfWasFound(int number); // Prototype

int main() {

	//Internal Data
	int counter{ 0 };

	/* initialize random seed: */
	srand(time(NULL));

	int generatedNumber = rand() % 100 + 1;

	do {
		cout << "Guess a number between 0 and 100: " << endl;
		int guessedNumber{ 0 };
		cin >> guessedNumber;
		counter += counter;
		

		determineIfWasFound(guessedNumber, generatedNumber);
	}
	
	


}

void determineIfWasFound(int userNumber, int machineNumber) {
	if (userNumber == machineNumber) {
		 
	}
}