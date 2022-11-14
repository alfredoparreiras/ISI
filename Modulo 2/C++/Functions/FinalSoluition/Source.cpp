#include<iostream>
using namespace std; 


//FUNCTIONS PROTOTYPES
int max(int, int);
double nonNegativeIntPower(double, int);
double intPower(double,int );
int readIntegerInterval(int , int , int);


int main() {

	cout << readIntegerInterval(10,25,15);
}

//1)	Write a function that takes 2 integers a and b, and returns their sum.

void function() {
	int a, int b;
	a + b;

}
int main()
{
	int a{};
	int b{};
	cout << "enter a number " << endl;
	cin >> a;
	cout << " enter another number " << endl;
	cin >> b;
	function();

}

//2)	Write a function that calculates the volume of a parallelepiped (or prism with parallelogram faces).


//3)	Write a function that takes 2 integers a and b, and returns the larger of the 2 integers.
int max(int a, int b) {

	if (a > b) {
		return a;
	}
	else {
		return b;
	}
};


//4)	Write a function that returns the sum of all the integers between 2 given integers min and max.


//5)	Write a function that validates the input of an integer, and returns the integer.


//6)	Write a function that validates the input of an integer between 2 limits, and returns the integer.

int readIntegerInterval(int min, int max, int integer) {
	

	if (integer >= min && integer <= max) {
		return integer;
	}
	else {
		cout << "Please choose an integer between " << min << " and " << max << endl;
	}

	return 0;
};

//7)	Write a function that returns a real number x rounded to a precision of n decimal digits (10-n precision).
//Example: round(3.14159, 4) returns 3.1416 and round(-1.83, 1) returns - 1.8.


//8)	Write a function that draws a text art pine tree, the height of which is passed as a parameter.


//9)	A.	Write a function that calculates an (a to the power of n) for real a and non-negative integer n (n ≥ 0).

double nonNegativeIntPower(double a, int n) {
	
	if (n >= 0) {
		return pow(a, n);
	}
	else {
		cout << "Please insert a non-negative integer :\n";
	}
};

//b) Write another function that does the same, but supposing that n could be negative. Example: 2 - 3 = 0.125
double intPower(double a, int n) {

	
		return pow(a, n);
	
};


//10)	Write a function that takes an integer n and returns true if n is a prime number, and false if not.




