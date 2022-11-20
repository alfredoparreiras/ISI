#include<iostream>
#include<string>
#include<iomanip>
#include<typeinfo>

using namespace std; 

double integerValidation();
string stringValidation();

int main() {

	/*char str[20]; 
	cout << "Enter a message : "; 
	cin.getline(str, 20);
	cout << str << endl;
	cout << "Enter a another message : ";
	cin.getline(str, 20);
	cout << str << endl;*/

	
	cout << "Enter a message (max 20 characters): ";
	double number = integerValidation();

	cout << number << endl;
	if (typeid(number) == typeid(double)) {
		cout << "This is double";
	}


	

	return 0;

	/* When we insert a different data type, the program return 0 and cin is placed in fail mode and every use of cin before that will cause another error.
	To correct this fail state, we need to use cin.fail()*/



}

double integerValidation() {

	double value{ 0 };
	cin >> value;
	
	while (cin.fail() || cin.peek() != '\n') {
		cin.clear();; // This function will change the fail state.. 
		cin.ignore(512, '\n'); // This function will clean the buffer. 
		cout << "Warning - enter a numerical value : ";
		cin >> value;
	}

	cin.ignore(512, '\n');

	return value;
}

string stringValidation() {

	string string; 
	getline(cin, string);

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(512, '\n');
		cout << "Enter a message (max 20 characters): " << endl;
		getline(cin, string);

	}
	return string;

	return 0;

}


