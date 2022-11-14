/*PSEUDOCODE
Variables : numberOfNotes: Integer
notes : real
notesSummed : real
averageOfNotes : real

START
noteAdd < -0
	notesSummed < -0
	averageOfNotes < -0

	WRITE “Enter how many notes do you want to calculate the average”
	numberOfNotes < -0
	READ  numberOfNotes

	FOR i = 1 TO numberOfNotes
	WRITE “Add the note!”
	READ noteAdd
	notesSummed < -notesSummed + noteAdd
	averageOfNotes < -notesSummed / numberOfNotes

	WRITE “The average of the notes entered is”, averageOfNotes.
	END*/

#include <iostream>
using namespace std; 

int main() {
	int numberOfNotes{0};
	float notes{ 0 };
	float notesSummed{ 0 };
	float averageOfNotes{ 0 };
	int counter{ 1 };

	cout << "Enter how many notes do you want to calculate the average: ";
	cin >> numberOfNotes;

	/*for (int i = 1; i <= numberOfNotes; i++) {
		cout << "Add the note! " << endl;
		cin >> notes;
		notesSummed = notesSummed + notes;
	}*/

	do {
		cout << "Please, insert the note.  " << endl;
		cin >> notes;
		notesSummed = notesSummed + notes;
		counter = counter + 1;


	} while (counter <= numberOfNotes);

	averageOfNotes = notesSummed / numberOfNotes;

	cout << averageOfNotes;
}

