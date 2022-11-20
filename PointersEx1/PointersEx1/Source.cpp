#include<iostream>
using namespace std; 




int main() {


	int integer;
	int* pInteger = &integer;
	int** ptr = &pInteger;
	
	cout << &(*ptr);

	

}