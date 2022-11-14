#include<iostream>
#include<string>
using namespace std; 

/*
Struct Employee
*/


struct Employee {
	char completeName[50];
	int identifier;
	double hourlyRate;
};

int main() {
	Employee employee;
	float numberHours;
	string name;

	cout << "Please insert your name : ";
	cin.getline(employee.completeName,50);

	cout << "Please insert the identifier : ";
	cin >> employee.identifier;

	cout << "Please, insert your hourly rate : ";
	cin >> employee.hourlyRate;

	cout << "Please insert how many hours did you work : ";
	cin >> numberHours;

	cout << "Hello " << employee.completeName << ", your identifier is number " << employee.identifier << ". You worked " << numberHours << " hours and earned $" << employee.hourlyRate << " per hour. Totalizing $" << employee.hourlyRate * numberHours << " dollars of gross salary.";

}