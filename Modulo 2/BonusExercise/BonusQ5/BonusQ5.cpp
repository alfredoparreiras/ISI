#include<iostream>
using namespace std; 

/*

*/




int main() {

	cout << "Enter a number to check if it has factorial : ";
	int integer{ 0 };
	cin >> integer;
	int counter{ 0 };
	

	for (int i = 1; i < integer; i++) {
		if (integer % i == 0) {
			cout << integer << endl;
			integer /= i;
			cout << integer << " * " << i << endl; 
		}
	}
}