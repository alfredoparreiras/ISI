#include <iostream>
#include <string>

using namespace std;


int main() {
	string str[4] = { "dara", "dan", "pancracia","abelardo"};
	string temp;

	for (int i{ 0 }; i < 4; i++) {
		for (int j = i + 1; j < 4; j++) {
			if (str[i] > str[j]) {
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}
	for (int i{ 0 }; i < 4; i++) {
		cout << str[i] << endl;
	}
}