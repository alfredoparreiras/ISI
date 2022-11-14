#include<iostream>
using namespace std; 

//2.	Write a program that requests an integer n and a number of value m, and that displays the next m value from n (inclusively).


int main() {

	cout << "Please, insert an integer : ";
	int integer{ 0 };
	cin >> integer; 

	cout << "Please, insert an limit : ";
	int limit{ 0 };
	cin >> limit;

	for (int i{ 0 }; i <= limit; i++) {
		cout << integer + i << " ";
	}

}