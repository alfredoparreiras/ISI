#include<iostream>
using namespace std; 


/*12 –	A company desires to transmit data by telephone, but is concerned about the fact that their telephone lines can be secretly listened in on. All of this data is transmitted in the form of four-digit integers. You are asked to write a program able to encrypt this data, in order to ensure a more secure transmission. Your program should read a four-digit integer and execute the encryption in the following way: replace each of the digits in the integer by ((this digit + 7) modulo 10). Then, exchange the first digit with the third digit, and exchange the second digit with the fourth, and display the encrypted integer.
Write a separate program for encrypting the four-digit integer entered, and for decrypting the encrypted integer in order to find the original number.
*/

int main() {

	int fourDigitsNumber{ 9823 };
	int firstDigit{ 0 };
	int secondDigit{ 0 };
	int thirdDigit{ 0 };
	int fourthDigit{ 0 };
	int encryptedMessage{ 0 };

	// Spliting the numbers 
	fourthDigit = fourDigitsNumber % 10;
	thirdDigit = fourDigitsNumber / 10 % 10;
	secondDigit = fourDigitsNumber / 100 % 10;
	firstDigit = fourDigitsNumber / 1000 % 10;

	cout << ((thirdDigit + 7) % 10) << endl << ((fourthDigit + 7) % 10) << endl << ((firstDigit + 7) % 10) << endl << ((secondDigit + 7) % 10);


	
	

	


}