#include<iostream>
using namespace std; 


int main() {
		
	bool validate{ 0 };
		
		cout << "Enter a minimum limit : ";
		short minimum{ 0 };
		cin >> minimum;

		cout << "Enter a maximum limit : ";
		short maximum{ 0 };
		cin >> maximum;

		cout << "Enter an integer : ";
		short integer{ 0 };
		cin >> integer;
		
		if (integer > maximum || integer < minimum) {
			while (cin.fail() || cin.peek() != '\n') {

				cin.clear();
				cin.ignore(512, '\n');
				cout << "Caution: the value entered must be between: " << minimum << " and " << maximum;
				cin >> integer;
			}
		}
		else {

			cout << "The value " << integer << " is larger than " << minimum << " and smaller than " << maximum;
		}

		return 0;
}