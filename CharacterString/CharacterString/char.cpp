#include<iostream>
using namespace std; 

//PROTOTYPES
void displayInverse(char str[]);


int main() {

	char str[5] = { 'h','e','l','l','o' };
	displayInverse(str);

}

//1)	Write a function that receives a character string, and returns its length.
int main()
{
	string str("hello");
	cout << " string is length " << str.size();
}

//2)	Write a function that receives a string and a character, and that returns the number of times the character appears in the string.
//Example: If it receives “Hello”and ‘l’, it returns 2.

int count(string str, char c)
{
	int count = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == c)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	string str;
	char c;
	cout << "Enter the String: " << endl;
	cin >> str;
	cout << "Enter the character you want to search: " << endl;
	cin >> c;
	cout << "This String contains " << count(str, c) << " characters " << c << endl;;
	return 0;


}

//3 3)	Write a function that receives a string, and displays the inverted string on the screen.
//Example: If it receives “Hello”, it displays “olleH”.


void displayInverse(char str[], int arraySize) {

	char temp{};
	int j;

	for (int i{ 0 }, j{ arraySize - 1 }; i < (arraySize / 2); i++, j--) {
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}

	for (int i{ 0 }; i < arraySize; i++) {
		cout << str[i] << " ";
	}
}

//4)	Write a function that receives a string, and returns true if it is a palindrome or false if not. A palindrome is a string that is the same whether read from left to right or from right to left.
//Example: If it receives “Reviver”, it returns true.

int main()
{
	char str1[20], str2[20];
	int i, j, len = 0, flag = 0;
	cout << "Enter the string : ";
	(str1);
	len = strlen(str1) - 1;
	for (i = len, j = 0; i >= 0; i--, j++)
		str2[j] = str1[i];
	if (strcmp(str1, str2))
		flag = 1;
	if (flag == 1)
		cout << str1 << " is not a palindrome";
	else
		cout << str1 << " is a palindrome";
	return 0;
}

//5)	Write a function that receives a string, and inverts the string in memory.
//Example: If it receives “Hello”, the string will contain “olleH” after the function call.

void inverseStr(string& str)
{
	reverse(str.begin(), str.end());
}


int main()
{
	string str;
	cout << "Enter the String ";
	cin >> str;
	inverseStr(str);
	cout << str;
}

//6)	Write a function that receives two strings, and copies the second into the first.
//Example: If it receives “Hello”and “world”, the first string will contain “world” after the call.

void copy(char destination[], char source[], int arraySize) {


	for (int i{ 0 }; i < arraySize; i++) {
		destination[i] = source[i];

	}

	cout << "Your new word is : " << endl;
	for (int i{ 0 }; i < arraySize; i++) {
		cout << destination[i] << " ";
	}

};


//7)	Write a function that receives two strings, and copies the characters of the second to the end of the first.
//Example: If it receives “Hello”and “everyone”, the first string will contain “Helloeveryone” after the call.

void remove(char* str);
int main() {
	char str[] = " Hello Everyone ";
	remove(str);
	cout << str;

}
void remove(char* str) {
	int count = 0;
	for (int i = 0; str[i]; i++)
		if (str[i] != ' ')
			str[count++] = str[i];
	str[count] = ' \0';
}


//8)	Write a function that receives a string, and removes the useless spaces at the beginning and end.
//Example: If it receives “   I am a string.”, the string will contain “I am a string.” after the call.

float negativeArray(float numbers[], const int LENGTH)
{
	for (int i = 0; i < LENGTH; i++)
	{
		if (numbers[i] < 0)
		{
			return numbers[i];
		}
	}

}

float positiveArray(float numbers[], const int LENGTH)
{
	for (int i = 0; i < LENGTH; i++)
	{
		if (numbers[i] > 0)
		{
			return numbers[i];
		}
	}
}

int main()
{
	const int LENGTH = 5;
	float array[LENGTH] = { 5.55 , -6.454 , -2.5324 , 4.5432 , -10.101010101 };

	positiveArray(array, LENGTH);
	negativeArray(array, LENGTH);
}

//9)	Write a function that receives two strings, and compares them according to alphabetical order (the order of the dictionary). It returns 0 if the strings are identical, 1 if the first comes after the second (appears later in the dictionary), and -1 if the first comes before the second (appears earlier in the dictionary).
//Example: If it receives “This is a character string”and “This is a chocolate bar”, it will return -1.

int compare(char str1[], char str2[]) {

	int result{ 0 };
	result = strcoll(str1, str2);

	return result;

};
