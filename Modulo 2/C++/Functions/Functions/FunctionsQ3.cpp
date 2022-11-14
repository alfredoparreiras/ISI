#include<iostream>
using namespace std; 

/*3)	A function that takes 2 integers a and b, and returns the larger of the 2 integers.*/

int max(int a, int b) {
	if (a > b) {
		cout << "The integer A = " << a << " is larger than integer B = " << b << ".\n";
	}
	else {
		cout << "The integer B = " << b << " is larger than integer A = " << a << ".\n";
	}
}

int main() {

	largerInteger(5, 4);

}