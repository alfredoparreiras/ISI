#include<iostream>
#include<vector>
using namespace std; 

/*
Method Constructor >> We can call only when we create an object. And it has the same name as the class.
*/

struct Student {
	string name; 
	int id; 
	int age; 

	Student(){}
	Student(string n, int y, int x) {
		name = n;
		age = y;
		id = x;

	}
	
};

struct Teacher {
	string name; 
	string speciality;

};

struct Classroom {
	int capacity; 
	int floor; 

};

struct Course {
	Teacher teacher; 
	Classroom classroom; 
	vector<Student> students;

};

int main() {

	Course programming;

	programming.classroom.capacity = 9;
	programming.teacher.name = "19";
	

	cout << programming.classroom.capacity << endl;
	cout << programming.teacher.name << endl;

	Student s3("Niageria", 21,120282);
	Student s4("Colombia",31, 10282);
	Student s5("Brasil", 212, 3282);


	cout << s3.name << " " << s3.age << " " << s3.id << endl;
	cout << s4.name << " " << s4.age << " " << s4.id << endl;
	cout << s5.name << " " << s5.age << " " << s5.id << endl;

	Student* s3 = new Student("Alfredo", 32, 202020);

	cout << "name of 3 " << s3.name << endl;
	cout << "name of 3 " << &s3.name << endl;
	cout << *s3 << endl;
	



}