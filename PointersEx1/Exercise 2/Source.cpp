#include<iostream>
using namespace std; 

int main() {

	double x{ 123.456 };
	double y{ x };
	double* ptr{ &x };

	cout << "This is the value of X " << x << endl;
	cout << "This is the value of Y " << y << endl;

	*ptr = 3.14159;

	cout << "This is the value of X " << x << endl;
	cout << "This is the value of Y " << y << endl;

	ptr = &y;
	*ptr = 100 * x;

	cout << "This is the value of X " << x << endl;
	cout << "This is the value of Y " << y << endl;
}