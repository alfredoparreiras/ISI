#include<iostream>
using namespace std; 

/*Instructions 
31 –	An automobile insurance company wants to computerize the calculation of renewals for the premiums of its clients. The increase of a client’s premium is a function of the number of accidents, according to the table below:

Number of accidents	Increase
0	2%
1 or 2	5%
3	10%
4 and more	30%

You are asked to create a program that calculates the new value of a premium, according to the old premium and the number of accidents.
*/

int main() {
	
	// Inputs from the user 
	cout << "How did you pay for your last policy? ";
	float lastPremium{ 0 };
	cin >> lastPremium;

	cout << "How many accidents have you had in the last year? ";
	int quantityOfAccidents{ 0 };
	cin >> quantityOfAccidents;

	// Internal Data
	float noAccidents{ .02 };
	float oneOrTwoAccidents{ .05 };
	float threeAccidents{ 0.1 };
	float fourOrMoreAccidents{ .3 };

	// Determining total increase

	float totalIncrease{ 0 };

	if (quantityOfAccidents == 0) {
		totalIncrease = noAccidents;
	}
	else if (quantityOfAccidents < 3 && quantityOfAccidents > 0) {
		totalIncrease = oneOrTwoAccidents;
	}
	else if (quantityOfAccidents == 3) {
		totalIncrease = threeAccidents;
	}
	else {
		totalIncrease = fourOrMoreAccidents;
	}


	// Calculation of the new premium

	cout << "Your new premium is $" << lastPremium + (lastPremium * totalIncrease);
}