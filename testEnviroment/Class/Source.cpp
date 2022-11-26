#include<iostream>
#include<string>
using namespace std; 


class Employee {
	string empLastName;
	string empFirstName;
	string empJob;
public:
	void setEmployeeInfo(string eln, string efn, string ej);
	void displayEmployeeInfo();
};

void Employee::setEmployeeInfo(string eln, string efn, string ej) {
	empLastName = eln;
	empFirstName = efn;
	empJob = ej;
}

void Employee::displayEmployeeInfo() {
	cout << empLastName << empFirstName << empJob << endl;
}



int main() {
	int x{ 12 };
	int y{ 13 };
	int z{ 2 };

	int myArray[]{ x,y,z };

	myArray[0] = 123;

	cout << x << endl; 
	cout << myArray[0];

	//double i{ 5 };
	//double* p = &i;
	//double** pp = &p;

	//**pp += *p; //10 + 12
	//i += 2;

	//cout << i;

	/*double*** ppp = &pp;

	cout << "&P => " << &p << endl; 
	cout << "*p => " << *p << endl;
	cout << "**pp (5) => " << **pp << endl; 
	cout << "pp (address of p) => " << pp << endl;
	cout << "&*p  => " << &*p << endl;
	cout << "*pp " << *pp << endl;

	cout << "&*&P => " << &*&p << endl;
	cout << "&pp => " << &pp << endl;
	cout << "*&*p => " << *&*p << endl;
	cout << "*&p => " << *&p << endl;
	cout << "value of address of i " << &i << endl;
	cout << "**&p => " << **&p << endl;
	cout << "Address of PP " << ppp;*/













	

	//int number{ 0 };
	//cout << number& << endl;

	//Employee* emp1 = new Employee();
	//emp1->setEmployeeInfo("Gingras", "Bob", "Proof");
	//emp1->displayEmployeeInfo();



}