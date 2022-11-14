#include<iostream>
using namespace std; 


int readInt();

int main() {


	char tab[] = { 'a','b','c','d','e' };

	for (int i{ 0 }; i < 5; i++) {
		cout << tab[i];
	}

	return 0;

	//while (cin.fail()) {
	//	cin.clear();
	//	cin.ignore(512, '\n');
	//	cout << "Enter a message ( Max 20 Characters) :";
	//	cin.getline(str, 20);
	//}

	//cout << str << endl;

	//return 0;
}

//int readInt() {
//	int value{  };
//	cout << "Enter a numerical value: ";
//	cin >> value;
//
//	while (cin.fail() || cin.peek() != '\n') {
//
//		cin.clear();
//		cin.ignore(512, '\n');
//		cout << "Warning - Enter a numerical value : "; // If we put a double here, the state will not be activated. Because will be casting before this part. 
//		cin >> value;
//	}
//
//	cin.ignore(512, '\n'); // Its a good practice to put the cin here, because this way you will guarantee that the cin will be clean.
//
//	return value;
//}