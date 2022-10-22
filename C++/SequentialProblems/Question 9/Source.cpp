#include<iostream>
using namespace std; 

/* 
9 –	In a computer technology course, the following evaluation weights are used:

•	Laboratory work counts for 40% of the grade
•	The midterm exam counts for 25%
•	The final exam counts for 35%

Make a program that calculates the final grade of a student, assuming that each of the three grades the user inputs is out of 100.
*/

int main() {

	// Inputs 
	cout << "Please insert the laboratory grade: ";
	float laboratoryGrade{ 0 };
	cin >> laboratoryGrade; 

	cout << "Please insert the midterm grade: ";
	float midtermGrade{ 0 };
	cin >> midtermGrade;

	cout << "Please insert the final exam grade: ";
	float finalExamGrade{ 0 };
	cin >> finalExamGrade;

	// Internal Data
	float laboratoryWeight{ .4 };
	float midtermWeight{ .25 };
	float finalExamWeight{ .35 };


	//Calculate the final Grade

	float finalGrade{ 0 };
	finalGrade = (laboratoryGrade * laboratoryWeight) + (midtermGrade * midtermWeight) + (finalExamGrade * finalExamWeight);
	
	cout << "Your Final Grade is " << finalGrade << endl;


}