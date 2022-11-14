#include <iostream>
using namespace std;

/*37 –	Write an algorithm that reads a positive integer ( > 0 ) and determines whether it is a prime number.
(Hint: try dividing the number by the numbers coming before it.) Validate the input.*/


int main() {
	int a{ 0 };
	int isPrime{ 0 };


	cout << "Enter the number to check if its Prime: ";
	cin >> a;
	
	if (a > 0) {
		for (int i = 2; i <= a; i++) {

			if (a % i == 0) {
					cout << "The number " << a << " is not a prime number!" << endl;
					isPrime = 1;
					break;
			}
		}
		if (isPrime == 0) {
				cout << "Number is Prime!" << endl;

		}
	}
	else {
		cout << " You need to insert a number greater than 0!";
	}
}
