#include <iostream>
#include <string>

using namespace std;
int quantityOfNames{ 7 };

int main() {
	string str[7] = { "dara", "dan", "pancracia","abelardo", "luis","deval","rehman"};
	string temp;

	for (int i{ 0 }; i < quantityOfNames; i++) {
		for (int j = i + 1; j < quantityOfNames; j++) {
			if (str[i] > str[j]) {
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}
	for (int i{ 0 }; i < quantityOfNames; i++) {
		cout << str[i] << endl;
	}
}