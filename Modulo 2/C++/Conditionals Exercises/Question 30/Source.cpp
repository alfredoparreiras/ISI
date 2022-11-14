#include<iostream>
using namespace std; 

/*Instructions 
30 –	Write an algorithm that reads three numbers and determines whether these numbers, considered as the lengths of the three sides of a triangle, would correspond to:

•	An equilateral triangle (three equal sides)
•	An isosceles triangle (two equal sides)
•	A scalene triangle (three different sides)
*/



int main() {

	//Inputs from the user 
	cout << "Insert the first side of a triangle : ";
	int firstSide{ 0 };
	cin >> firstSide;

	cout << "Insert the second side of a triangle : ";
	int secondSide{ 0 };
	cin >> secondSide;

	cout << "Insert the third side of a triangle : ";
	int thirdSide{ 0 };
	cin >> thirdSide;


	// Comparing the sides

	if (firstSide == secondSide && firstSide == thirdSide && thirdSide == secondSide) {

		cout << "An equilateral triangle (three equal sides)";

	}
	else if (firstSide == secondSide || firstSide == thirdSide || thirdSide == secondSide) {
	
		cout << "An isosceles triangle (two equal sides)";
	
	}
	else {
		cout << "A scalene triangle (three different sides)";
	}

}
	
	