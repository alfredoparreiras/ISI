#include <iostream>
using namespace std; 

/*37 –	Write an algorithm that reads a positive integer ( > 0 ) and determines whether it is a prime number. 
(Hint: try dividing the number by the numbers coming before it.) Validate the input.*/


int main() {
	int a{ 0 };

	cout << "Enter the number to check if its Prime";
	cin >> a;

	int m = a / 2;
	
	for (int i = 2; i <= m; i++) {
		if (a % i == 0) {
			cout << "The number " << a << " is not a prime number" << endl;
			break;
		}
		else {
			cout << "The number " << a << " is  a prime number" << endl;
			break;
		}
	}

	

		
	

		
		
//		for (int i = 1; i < a; i++) {
//			cout << i;
//			int 
//			
//			if (a % i == 0) {
//				cout << "the number " << a << " isn't a prime number." << endl;
//			} else { 
// 
//		}
//
//
//}
//
//7/2 = 3,5
//7/3 = 2,33
//7/4 = 1,75
//7/5 = 1,4
//7/6 = 1,16
