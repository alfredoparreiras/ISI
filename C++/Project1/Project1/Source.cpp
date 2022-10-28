#include <iostream>
using namespace std; 

void say_world() {
	cout << "World" << endl;
}

void sayHello() {
	cout << "Hello" << endl;
	say_world();
	return;
}

int main() {
	
	sayHello();
	return 0;
}
