#include<iostream>
#include<iomanip>
using namespace std; 

/*

Create a menu that display some options and then requests an option until the user enters the option to exit.

*/



int main() {

	//VARIABLES
	char userOption{};
	int value{ 12 };
	int* value_ptr = &value;
	
	
	do {
		
		cout << endl;
		cout << "Value : " << value << endl;
		cout << "(A)dd 1" << endl;
		cout << "(S)ubstract 4" << endl;
		cout << "(M)ultiply by 2" << endl;
		cout << "(Q)uit " << endl;
		cout << "Choose your option : ";
		cin >> userOption;
		

		if (userOption == 'A' || userOption == 'a') {
			*value_ptr += 1;
			cout << "Number add 1, the total is " << value<< endl;
		}
		else if (userOption == 'S' || userOption == 's') {
			*value_ptr -= 4;
			cout << "Number minus 4, the total is " << value << endl;
		}
		else if (userOption == 'M' || userOption == 'm') {
			*value_ptr *= 2;
			cout << "Number multiply by 2, the total is " << value << endl;
		}
		else if (userOption == 'Q') {
			userOption = 'q';
		}
		else {
			cout << "Some bug inside your logical structure.";
		}

	} while (userOption != 'q');

}