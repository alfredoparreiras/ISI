#include<iostream>
using namespace std; 

/* Function amountTaxesToPay 
paramenters > grossSalary
return amount of taxes

rates
less than 20000 => 0.2
20000 to 45000 => .25
45000 .3

*/

//FUNCTION PROTOTYPE
double amountTaxesToPay(double);



int main() {
	cout << "The Total Amount of Taxes is : $" <<amountTaxesToPay(25000.00)<< endl;
	cout << "The Total Amount of Taxes is : $" <<amountTaxesToPay(30000)<< endl;
	cout << "The Total Amount of Taxes is : $" <<amountTaxesToPay(15000)<< endl;
	cout << "The Total Amount of Taxes is : $" <<amountTaxesToPay(50000)<< endl;
	cout << "The Total Amount of Taxes is : $" <<amountTaxesToPay(80000)<< endl;
	cout << "The Total Amount of Taxes is : $" <<amountTaxesToPay(81250.5)<< endl;
	cout << "The Total Amount of Taxes is : $" <<amountTaxesToPay(12502.33)<< endl;



}

double amountTaxesToPay(double grossSalary) {

	//Value to return
	double amountOfTaxes{ 0 };

	// Constants Rates

	const double lessThan20000{ .2 };
	const double from20000To45000{ .25 };
	const double moreThan45000{ .3 };


	if (grossSalary < 20000) {
		amountOfTaxes = grossSalary * lessThan20000;
	}
	else if (grossSalary >= 20000 && grossSalary < 45000) {
		amountOfTaxes = grossSalary * from20000To45000;
	}
	else if (grossSalary >= 45000) {
		amountOfTaxes = grossSalary * moreThan45000;
	}
	else {
		cout << "Your conditional structure isn't work." << endl;
	}

	return amountOfTaxes;

} 