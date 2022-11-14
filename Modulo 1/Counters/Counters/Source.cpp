#include <iostream>
using namespace std; 

int main() {
	float itemPrice;
	float finalAmount{0};
	string anotherPrice;

	do {
		cout << "Enter the item price : ";
		cin >> itemPrice;
		finalAmount = finalAmount + itemPrice;
		cout << "Would you like to enter another product ? (y = yes and n = no)";
		cin >> anotherPrice;

	} while (anotherPrice == "y" || anotherPrice == "Y");

		cout << "The total price of your purchase before tax is : " << finalAmount;
}