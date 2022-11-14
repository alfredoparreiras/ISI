#include<iostream>
using namespace std; 


/*
Function : displayPercentConversion
Parameters : actual score , initial weight
Output : Converted Score as percentage.

*/

//FUNCTION PROTOTYPE
double displayPercentConversion(double, double);
int main() {

	cout << "Your converted score is " << displayPercentConversion(10, 40);
	cout << "/100.";
}

double displayPercentConversion(double score, double weight) {

	double percentageScore{ 0 };
	int nominator{ 0 };

	percentageScore = score / weight;

	nominator = percentageScore * 100;
	return nominator;
}