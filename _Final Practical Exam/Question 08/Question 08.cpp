#include<iostream>
#include<iomanip>
using namespace std; 

/*
Function : calculateSubTotal
Parameters : double price, short quantity
Return : Subtotal

Function : calculateTax
Parameters: return of subtotal and percentage tax
Output : Amount of taxes applied (.15)

Function : displayProduct
Parameters : Product by reference
Display : subtotal, tax amount and grand total.

Main : ask inputs for the user 
 

*/


struct Product {
	double price;
	unsigned short quantity;
};


//FUNCTIONS PROTOTYPES
double calculateSubTotal(Product product);
void displayProduct(Product product);
double calculateTax(Product product);


int main() {

	Product product;
	cout << "Please insert how many itens do you want : ";
	cin >> product.quantity;

	cout << "Please insert the price of each item : ";
	cin >> product.price;

	displayProduct(product);
}

double calculateSubTotal(Product product) {
	return product.price * product.quantity;
}

double calculateTax(Product product) {
	const double tax{ .15 };
	return calculateSubTotal(product) * tax;
}


void displayProduct(Product product) {
	cout << endl;
	cout << setw(20) << "Order Summary" << endl << endl;
	cout << "Products Quantity : " << product.quantity << endl;
	cout << "Product Price $: " << product.price << " Dollars"<<endl;
	cout << "Subtotal Value $: " << calculateSubTotal(product) << " Dollars"<<endl;
	cout << "Total Amount of Tax $: " << calculateTax(product) <<" Dollars"<< endl;
	cout << "Grand Total $: " << calculateSubTotal(product) + calculateTax(product) <<" Dollars"<< endl;

}