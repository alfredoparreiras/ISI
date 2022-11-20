
#include"Author.h"



//Constructos
Author::Author(string name, unsigned short percentage) {

	authorsName = name;
	contribution = percentage;

};



//Setters and Getters
void Author::setName(string name) {
	
	if (name.length() < 50) {
		authorsName = name;
	}
	else {
		cout << " Please insert a value less than 50 characters for the authors name" << endl;
	}
}

void Author::setContribution(unsigned short percentage) {
	if (percentage >= 0 && percentage <= 100) {
		contribution = percentage;
	}
	else {
		cout << " Please insert a value between 0 and 100. " << endl;

	}
}

string Author::getName() {
	return authorsName;
}

double Author::getContribution() {
		return contribution;
}

void Author::display() {
		cout << "The authors name is " << authorsName << " and his contribution is " << contribution << "%" << endl;
}