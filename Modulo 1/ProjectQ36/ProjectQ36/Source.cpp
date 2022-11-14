#include <iostream>
using namespace std; 

int main() {

	/*for (int i = 5; i < 40; i+=5) {
		cout << " " << i;
	}*/

	/*for (int i = 3; i <= 15; i += 2) {
		cout << " " << i;
	}*/

	/*for (int i = 80; i >= 20; i -= 10) {
		cout << " " << i;
	}*/


	int b{ 1 };

	for (int i = 0; i < 6; i++) {
		b += b * i;
		cout << b << endl;



			//i=1 == 1
			//i=2 == 2 
			//i=3 == 6
			//i=4 == 24

	}



}