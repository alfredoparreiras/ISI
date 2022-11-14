#include<iostream>
using namespace std; 

/*9)	A function that calculates an (a to the power of n) for real a and non-negative integer n (n ≥ 0).*/


int pow_calculation(double a, int n) {
	return pow(a, n);
}

int main() {
	cout << "Enter an Integer: " << endl;
	double a{ 0 };
	cin >> a; 

	cout << "Enter an Integer: " << endl;
	int n{ 0 };
	cin >> n;

	cout << pow_calculation(a, n);
}