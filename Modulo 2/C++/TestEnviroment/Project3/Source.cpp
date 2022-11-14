#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
#include<iomanip> 

using namespace std;

int main() {
	srand(time(nullptr));
	for (int i{ 0 }; i < 10; i++) {
		time(nullptr); //Jan 1 1970 , return the number of seconds from this date.
		int number = rand() % 100; // 10 = 0 to 9 || 100 = 0 to 99
		cout << number << " ";
	}
}