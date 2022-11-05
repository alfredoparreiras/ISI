#include<iostream>
using namespace std; 

/*
If we put a string here, the return 0 will appear. 0 meams nothing.When we digit the string before we push enter, the "word" will be in the buffer.
Impliciting casting, double >> integer.  Here the machine take care.
Explicity meams the developer did.
We can fix this "fail" state by using the fail() function in a while loop.
TO exit this "fail" state we have to use cin.clear. But to properly work we have to clean the buffer. Remember that when we typed a stirng in console, this value will be saved inside the buffer before saved inside the variable.
*/

int main() {

	int value{ 0 };
	cout << "Enter a numerical value: ";
	cin >> value; 

	while (cin.fail()) {

		cin.clear();
		cin.ignore(512, '\n');
		cout << "Warning - Enter a numerical value : "; // If we put a double here, the state will not be activated. Because will be casting before this part. 
		cin >> value;
	}
	cout << value << endl;
	return 0;

}
