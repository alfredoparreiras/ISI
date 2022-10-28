#include<iostream>
using namespace std; 

/*6)	A function that validates the input of an integer between 2 limits and returns the integer. */

int validateInput(int a);

int main() {

	cout << "Enter an Integer : " << endl;
	int a{ 0 };
	cin >> a;
	cout << validateInput(a);
}

int validateInput(int a) {
	int minimumLimit{ 0 };
	int maximumLimit{ 100 };

	if (a > minimumLimit && a < maximumLimit) {
		return a;
	}
	else {
		cout << "You need to choose a number between " << minimumLimit << " and " << maximumLimit << endl;
	}
}