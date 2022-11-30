#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

int main() {
	
	
	
	srand(time(0));
	int fuelSpent = (rand() % (15 - 5 + 1) + 5) ;
	double decimalFuelSpent = fuelSpent / static_cast<double>(100);
	cout << decimalFuelSpent;

	



}