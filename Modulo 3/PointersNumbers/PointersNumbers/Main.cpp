#include"numbers.h"


/*
Make a program that reads 3 integers between 0 and 100 and displays them in ascending order.

The 3 integers read will be in variables that must be declared in the main() function.

!! You cannot use arrays or structs.

Only 3 integer variables declared in the main() function

You need to use pointers to pass information’s to the functions (no function call by reference).



*/


int main() {

	int firstInteger{ 0 };
	int secondInteger{ 0 };
	int thirdInteger{ 0 };

	// Calling Read Functions 
	cout << "First value :" << endl;
	read(&firstInteger);
	
	cout << "Second value :" << endl;
	read(&secondInteger);
	
	cout << "Third value :" << endl;
	read(&thirdInteger);

	// Displaying

	display(&firstInteger, &secondInteger, &thirdInteger);
	cout << endl;


	// Calling Range

	cout << validateRange(&firstInteger, &secondInteger) << endl;


	// Displaying

	display(&firstInteger, &secondInteger, &thirdInteger);
	cout << endl;


	//Exchange

	exchange(&secondInteger, &thirdInteger);


	// Displaying

	display(&firstInteger, &secondInteger, &thirdInteger);
	cout << endl;
}