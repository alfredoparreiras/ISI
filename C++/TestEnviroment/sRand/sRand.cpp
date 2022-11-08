#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip> // shortcut for ion manipulate

using namespace std; 


int main() {
	// GENERATING RANDOM NUMBERS 

	//time(nullptr); Jan 1 1970 , return the number of seconds from this date.
	//srand(time(nullptr));
	//int number = rand() % 100; // 10 = 0 to 9 || 100 = 0 to 99
	//cout << number;

	// FORMATING OUTPUT VALUES

	//STRINGS
	//cout << left;
	//cout << setw(10) << "Spring" << setw(10) << "nice" << endl;	 // To use setw, is not more necessary use n: as paramenter
	//cout << setw(10) << "Summer" << setw(10) << "Hot" << endl; // left = sticky manipulator
	// 
	//NUMBERS

	/*cout << fixed << setprecision(2) << 12.46389;*/


	/*cout << left << setw(15) << "Course" << setw(10) << "Students" << endl <<
			setw(15) <<"C++" << setw(10)<< right << 100 << left << endl <<
			setw(15) << "JavaScript" << setw(10) << right << 50 <<  endl;
*/

	//DISCOVERING MAX AND MIN VALUE OF VARIABLES

	/*int number{ numeric_limits<int>::max() };
	number++;
	cout << number;*/ // Overflowing is when you pass a size bigger than the value that this variable support, so this value will be "transformed" into negative. The opposite is called underflow.

	//cout << numeric_limits<short>::min() << endl
	//	<< numeric_limits<short>::max() << endl;

	//STRINGS AND CHARACTERS

	cout << "Enter your full address : ";
	string address;
	getline(cin, address);
	return 0;

}