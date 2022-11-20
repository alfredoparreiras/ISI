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
			
		while (integer <= maximum && integer <= minimum) {

			cout << "Caution: the value entered must be between: " << minimum << " and " << maximum << endl;
			cin >> integer;
		}

		cout << "The value " << integer << " is larger than " << minimum << " and smaller than " << maximum << endl;
		
		return 0;
}