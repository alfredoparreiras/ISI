#include<iostream>
#include <cstdlib>
#include<string>
using namespace std;

/*
Create a protype of a bank's program

Rules : Store the Family name and given name
		Their Unique account number between 10000 and 10099
		Balance of their account

Functions :
	I) Add a Bank Account
	II) Remove a bank account ( always a shift back is mandatory )
	III) Display the information of a particular client's account (by account number)
	IV) Apply a deposit to a particular account (by account number)
	V) Apply a withdrawal from a particular account (by account number)
	VI) Sort and Display the list of clients according to their balance, family name and given name, in ascending or descending order.
	VII) Display the avarage balance value of the accounts
	VIII) Display the total balance value of the accounts
	IX ) You should be capable to create an account and insert it at any position of the array. This implies shifting back or forward the oder elements of the array).
	X) Exit the application


*/


 /*Structure to hold account's information*/

struct AccountData{
	string givenName; 
	string familyName; 
	double balance;

};

AccountData createAccount() {
	/* initialize random seed: */
	srand(time(NULL));
	int generatedNumber = 10000 + rand() % 99;
	string accountNumber = "A" + to_string(generatedNumber);
	AccountData accountNumber;

	cout << "Enter your Given Name : ";
	cin >> accountNumber.givenName; 





}


int main() {
	





	system("pause");
	return 0; 

	

}

