#include<iostream>
using namespace std;


/*27 –	The Ministère des Finances of Québec is adopting a project aiming to reduce taxes. Develop an algorithm that calculates taxes according to the table provided below. In addition, a 2% reduction of the tax rate is granted if the person is married. Furthermore, a 0.5% reduction is granted for each child. Finally, 8% is subtracted from the tax rate for those who have newly arrived in the province. Determine the amount of tax to be paid as a function of the information provided by the user.

Salary	Tax rate
$0.00 to $18,000.00 	10%
$18,000.01 to $32,000.00 	20%
$32,000.01 to $60,000.00 	30%
$60,000.01 and more	40%


*/

int main() {

	//Inputs from the user 

	cout << "Is you married ( 1 = Yes and 0 = No) ? ";
	bool isMarried{ 0 };
	cin >> isMarried;

	cout << "How many children do you have? ";
	int children{ 0 };
	cin >> children;

	cout << "How many years have you been in this province? ";
	int timeAtProvince{ 0 };
	cin >> timeAtProvince;

	cout << "Insert your yearly salary : ";
	double salary{ 0 };
	cin >> salary;



	// Internal Data
	double marriedDiscount{ 0.02 };
	double childrenDiscount{ 0.005 };
	double newcomerDiscount{ 0.08 };
	double firstRate{ .1 };
	double secondRate{ .2 };
	double thirdRate{ .3 };
	double lastRate{ .4 };

	// Calculation of total discount 

	double totalDiscount{ 0 };

	if (isMarried == 1) {
		totalDiscount = totalDiscount + marriedDiscount;
	}

	if (children > 0) {
		totalDiscount = totalDiscount + (children * childrenDiscount);
	}

	if (timeAtProvince <= 1) {
		totalDiscount = totalDiscount + newcomerDiscount;
	}

	// Calculation of taxes


	if (salary <= 18000) {
		cout << "Your total amount of taxes to pay is $" << salary * (firstRate - totalDiscount) << endl << "If you see a negative number that means you have right of a taxes restitution";
	}
	else if (salary <= 32000) {
		cout << "Your total amount of taxes to pay is $" << salary * (secondRate - totalDiscount) << endl << "If you see a negative number that means you have right of a taxes restitution";
	}
	else if (salary <= 60000) {
		cout << "Your total amount of taxes to pay is $" << salary * (thirdRate - totalDiscount) << endl << "If you see a negative number that means you have right of a taxes restitution";
	}
	else {
		cout << "Your total amount of taxes to pay is $" << salary * (lastRate - totalDiscount) << endl << "If you see a negative number that means you have right of a taxes restitution";
	}

}