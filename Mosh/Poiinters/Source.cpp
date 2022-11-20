#include<iostream>
#include<memory>
using namespace std; 


/*
Pointers are special variables type that store an address.
- Efficiently passing large objects ( data ).
- Dynamic Memory Allocation
- Enabling Polymorphism

*/


void increasePrice(double* price) {
	*price *= 1.2;
}


int main() {

	/* Pointers and Constants 
	- Data is constant

	const int x{10};
	const int* ptr_x = &x;

	- Pointer is constant

	int x{10};
	int* const ptr_x = &x;


	- Both data and pointer ara constant
	
	const int x{10};
	const int* const ptr_x = &x;


	*/

	//double price{ 100 };
	//increasePrice(&price);
	//cout << price; 


	//Alocate in Stack
	// int numbers[1000];


	// Alocate in HEAP.
	//int* numbers = new int[5];

	//int capacity{ 5 };
	//int* numbers = new int[capacity];
	//int entries{ 0 };
	//

	//while (true) {
	//	cout << "Numbers: ";
	//	cin >> numbers[entries];
	//	
	//	if (cin.fail()) {
	//		break;
	//	}

	//	entries++;
	//	
	//	if (entries == capacity) {
	//		capacity *= 2;
	//		int* temp = new int[capacity];

	//		for (int i = 0; i < entries; i++) {
	//			temp[i] = numbers[i];
	//			
	//		}
	//		delete[] numbers;
	//		numbers = temp;
	//	}
	//}

	//for (int i{ 0 }; i < entries; i++) {
	//	cout << numbers[i] << endl;
	//	
	//}

	//delete[] numbers;

	//return 0;

	//SMART POINTERS
	// Unique Pointers ; 

	/*unique_ptr<int> x(new int);
	auto y = make_unique<int>();
	cout << y;*/



}