#include<iostream>
using namespace std; 


/*28 –	We want to create a program that displays the letter grade for a student, given their grade in percentage, according to the following table:
 
Grade	Letter 
90% – 100%	A
80% – 89% 	B
70% – 79%	C
60% – 69%	D
< 60% 	F
*/

int main() {

	// Input from the user
	cout << "Please insert the student's grade : ";
	int grade{ 0 };
	cin >> grade;

	if (grade < 60) {
		cout << "E";
	}
	else if (grade < 70) {
		cout << "D";
	}
	else if (grade < 80) {
		cout << "C";
	}
	else if (grade < 90) {
		cout << "B";
	} 
	else {
		cout << "A";
	}
}