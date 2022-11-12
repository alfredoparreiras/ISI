#include<iostream>
#include<string.h>
using namespace std; 

int compare(char str1[], char str2[]);

int main() {

	char str1[] = {"camilo"}; // Helloworld
	char str2[] = {"jaoo"};


	cout << compare(str1,str2);

}

int compare(char str1[], char str2[]) {

	int result{ 0 };
	result = strcoll(str1, str2);

	return result;

};

