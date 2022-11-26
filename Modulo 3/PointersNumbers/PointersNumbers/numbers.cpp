#include"numbers.h"

int validateNumeric() {

	int value;
	cin >> value;

	while (cin.fail() || cin.peek() != '\n' || value < 0) {
		cin.clear();
		cin.ignore(512, '\n');
		cout << "You Enter a wrong number, please enter a number between 0 and 100. ";
		cin >> value;
	}

	cin.ignore(512, '\n');

	return value;

};
int validateRange(int* a, int* b) {

	cout << "New Value :";
	*a = validateNumeric();
	
	cout << "New Value :";
	*b = validateNumeric();

	if (*a < *b) {
		return (*b - *a);
	}
	else {
		return *a - *b;
	}
};


int read(int* a) {

	*a = validateNumeric();

	return *a;

};



void exchange(int* a, int* b) {

	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
};


void sort(int* a, int* b, int* c) {

	exchange(*a, *b);
	exchange(*b, *c);

};
void display(int* a, int* b, int* c) {

	cout << "The first value is : " << *a << endl;
	cout << "The second value is : " << *b << endl;
	cout << "The third value is : " << *c << endl;


};