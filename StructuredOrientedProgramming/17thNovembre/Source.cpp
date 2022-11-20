#include<iostream>;
using namespace std; 


// In C++ the default is public. 


// Struct is a type compound or type composed.
/* When we turn this structure as private, no one can see this data members from outside.This is called encapsulation.This is the first fillar of OOP(Oriented Object Programming).*/
/*private:*/ // we can turn private.
//protect is the other.
struct Student { // Data Structure / Visibility or scope public by default.
private:
	int id; 
	string name; 
	double age;
	//This part above os called data 
public: 
	void display() { // Here its called method.
		cout << "Your ID is " << id << " and your name is " << name << " and your age is " << age << endl;

	}

	void addData() {
		cout << "Enter your id :" << endl;
		cin >> id;
		cout << "Enter your name : " << endl;
		cin >> name;
		cout << "Enter your age : " << endl;
		cin >> age;
	}
};

// In OOP the responsibilty of the main is running the application.
int main() {

	Student s1;

	s1.addData();
	s1.display();

	return 0;
}