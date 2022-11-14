#include <iostream>
using namespace std;

int main() {

	float finalInvoice{ 0 };
	float amountOfDiscount{ 0 };
	float percentageOfDicount{ 0 };
	float netInvoice{ 0 };

	cout << "Enter the final Invoice :";
	cin >> finalInvoice;

	cout << "How much discount did you get? (%)";
	cin >> percentageOfDicount;

	amountOfDiscount = finalInvoice - (finalInvoice * (1 - percentageOfDicount / 100));
	netInvoice = finalInvoice + amountOfDiscount;

	cout << "The value before the discount was " << netInvoice << " and the total discount was " << amountOfDiscount << endl;



	
}