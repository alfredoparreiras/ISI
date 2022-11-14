#include<iostream>
using namespace std; 


/*
47 –	(*) Write a program that reads the grades for the exams and assignments in a course including 2 exams and 2 assignments. The	program should be able to adapt to the conditions of the course. More precisely:
	•	The program should read the number of students in the course.
	•	For each of the four grades, ask the user what the weight of the grade is.
		In other words, how much is the grade worth as a percentage of the final grade for the course?
	•	The program should validate that the total of the four weights given is indeed equal to 100.
•	Then, for each student, the program should read the student’s four grades (each out of 100). Verify that the values entered are between 0 and 100. Then calculate the final course grade for each student.
•	The program should display whether the student passes or fails the course. A student passes if they achieve 60 or greater.
•	Finally, the program should display the average of all the students’ final course grades.

*/

int main() {

	short numbersOfStudents{ 0 };

	// Weight's Variables
	float weight1{ 0 }; 
	float weight2{ 0 }; 
	float weight3{ 0 }; 
	float weight4{ 0 }; 

	// Grade's Variables
	short grade1{ 0 };
	short grade2{ 0 };
	short grade3{ 0 };
	short grade4{ 0 };
	

	int finalGrade{ 0 };
	int totalGrade{ 0 };


	// Validation
	cout << "How Many Students : ";
	cin >> numbersOfStudents;

	for (int i{ 0 }; i < numbersOfStudents; i++) {

		cout << endl << endl;
		do {
			cout << "Enter the weight of the first grade.\n";
			cin >> weight1;

			cout << "Enter the weight of the second grade.\n";
			cin >> weight2;

			cout << "Enter the weight of the third grade.\n";
			cin >> weight3;

			cout << "Enter the weight of the fourth grade.\n";
			cin >> weight4;

		} while ((weight1 + weight2 + weight3 + weight4 != 1));


		cout << "Enter the first grade \n";
		cin >> grade1;
		if (grade1 >= 0 && grade1 <= 100) {
			return  grade1;
		}
		else {
			cout << "Please insert a value between 0 and 100";
			cin >> grade1;
		}
		cout << "Enter the second grade \n";
		cin >> grade2;
		if (grade2 >= 0 && grade2 <= 100) {
			cin >> grade2;
		}
		else {
			cout << "Please insert a value between 0 and 100";
		}

		cout << "Enter the third grade \n";
		cin >> grade3;
		if (grade3 >= 0 && grade3 <= 100) {
			cin >> grade3;
		}
		else {
			cout << "Please insert a value between 0 and 100";
		}

		cout << "Enter the fourth grade \n";
		cin >> grade4;
		if (grade4 >= 0 && grade4 <= 100) {
			return grade4;
		}
		else {
			cout << "Please insert a value between 0 and 100";
			cin >> grade4;
		}

		finalGrade = (weight1 * grade1) + (weight2 * grade2) + (weight3 * grade3) + (weight4 * grade4);

		cout << "The final course grade of the Student " << i + 1 << " is " << finalGrade << endl;

		if (finalGrade > 60) {
			cout << "Congratulations, you passed!!! :):):)\n";
		}
		else {
			cout << "See you again next year\n";
		}

		totalGrade = totalGrade + finalGrade;
	}
	
	cout << "The average of total grades is " << totalGrade / numbersOfStudents;



}