#include<iostream>
#include<string>
using namespace std;


int main() {
	// Complete the array with letters.
	char myName[35] = {'f','f', 'f', 'f', 'f', 'f', 'f', 'f', 'f', 'f', 'f', 'f', 'f', 'f', 'f', 'f', 'f', 'f', 'f', 'f', 'f', 'f', 'f', 'f', 'f', 'f','f','f','f','f','f','f','f','f','f', };
	cout << "Enter your name : ";
	cin.getline(myName, 50);

	bool isForbidenCharacters{ false };


	char forbidenCharacters[15] = { '0','1','2','3','4','5','6','7','8','9','.',',','?','!' };

	for (int i{ 0 }; i < 10; i++) {

		for (int j{ 0 }; j < 15; j++) {
		

			if (myName[i] == forbidenCharacters[j]) {

				cout << "Forbiden Format, please enter only letters !";
				isForbidenCharacters = true;

				/*cout << myName[i] << "  and  " << forbidenCharacters[j] << endl;*/
			}
		}

	}

	if (isForbidenCharacters == false) {

		cout << myName;

	}

}