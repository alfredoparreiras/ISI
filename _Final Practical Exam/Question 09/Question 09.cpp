#include<iostream>
using namespace std; 

/*
Function : extractDecimals
Parameters : real type
Output : decimal portion
*/

double extractDecimals(double);

int main() {

	cout << extractDecimals(32.1423);
}

double extractDecimals(double number) {

	double decimals = number - long(number);

	return decimals;

}