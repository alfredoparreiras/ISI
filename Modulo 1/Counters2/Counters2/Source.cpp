#include <iostream>
using namespace std;


int main() {
	int number;
	int sum{0};
	int numberCounter{1};

	do {
		cout << "Enter an Integer: " << endl;
		cin >> number;
		sum = sum + number;
		numberCounter = numberCounter + 1; ;

	} while (numberCounter <= 10);

	cout << "The sum of the 10 integers is: " << sum << endl;


}