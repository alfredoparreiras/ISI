#include<iostream>

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

/*TODO: 1) Display the information of a particular client’s account. (by account number) - DONE
	    2) Sort and display the list of clients according to their balance, family name and given name, in ascending or descending order.
		3) Menu
*/


// STRUCT USED TO CREATE ACCOUNTDATA

struct AccountData {
	string givenName; 
	string familyName;
	float balance;
	int accountNumber; 
};

// DECLARE AND INITIALIZING THE ARRAY WITH ACCOUNT NUMBERS
const int numberOfAccounts = 5; 
int index{ 0 };
AccountData accounts[numberOfAccounts];

// GLOBAL VARIABLES
short menuOption;


// FUNCTIONS PROTOTYPES
AccountData addAccount();
void displayData(int);
int menu();
int subMenu();



// MAIN SCOPE
int main() {

	menu();
	do {
		switch (menuOption) {
		case 1: addAccount();
			menu();
			break;
		case 2: cout << "Please, insert the account's number to search the data: ";
			cin >> index;
			displayData(index);
			menu();
			break;

		}
		subMenu();
	} while (menuOption != 10);
	
	return 0;
}

// FUNCTION TO ADD A NEW ACCOUNT 
AccountData addAccount() {

	AccountData c;

	cout << endl; 
	cout << "--- Adding a New Account ---" << endl << endl;
	
	cout << "Enter your index position :" << " ";
	cin >> index;
	
	//LOOP TO VERIFY IF THE ACCOUNT NUMBER MATCH WITH THE PATTERN
	do {

		cout << "Enter your account number between 10000 and 10099 :" <<" ";
		cin >> c.accountNumber;

	} while (c.accountNumber < 10000 || c.accountNumber > 10999);
	
	
	cout << "Enter your first name : " << " ";
	cin >> c.givenName;

	cout << "Enter your family name : " << " ";
	cin >> c.familyName;

	cout << "Enter the amount for your first deposit : " << " ";
	cin >> c.balance;

	return c;
	system("pause");
}


// FUNCTION TO DISPLAY ALL ACCOUNT INFORMATION 
// TODO : Change for the clients number account
void displayData(int index) {

	if (accounts[index].balance > 0) {

		cout << "Hello " << accounts[index].givenName << " " << accounts[index].familyName << ", your account number is " << accounts[index].accountNumber << ". At this moment your balance is $" << accounts[index].balance << " dollars in your account." << endl;
	}
	else {
		cout << "Hello " << accounts[index].givenName << " " << accounts[index].familyName << ", your account number is " << accounts[index].accountNumber << ". At this moment your balance is negative in $" << accounts[index].balance << " dollars, please make a deposit to avoid administrative taxes." << endl;
	}


}

// FUNCTION TO CREATE THE MENU
int menu() {

		cout << "Welcome to National Bank of Developers. " << endl;
		cout << "Slogan" << endl;
		cout << endl;
		cout << "MENU";
		cout << endl << endl;
		cout << "Please choose one option :" << endl;
		cout << endl;
		cout << "1) Add a Bank Account" << endl;
		cout << "2) Remove a Bank Account" << endl;
		cout << "3) Display the information of a particular client's account (by account number)" << endl;
		cout << "4)Apply a deposit to a particular account(by account number)" << endl;
		cout << "5) Apply a withdrawal from a particular account(by account number)" << endl;
		cout << "6) Sortand Display the list of clients according to their balance, family nameand given name, in ascending or descending order." << endl;
		cout << "7) Display the avarage balance value of the accounts" << endl;
		cout << "8) Display the total balance value of the accounts" << endl;
		cout << "9) You should be capable to create an accountand insert it at any position of the array.This implies shifting back or forward the oder elements of the array)." << endl;
		cout << "10) Exit the application" << endl << endl;
		cout << "Option : "; 
		cin >> menuOption;




	return menuOption; 
	system("pause");

};

int subMenu() {
	cout << "Please choose one option :" << endl;
	cout << endl;
	cout << "1) Add a Bank Account" << endl;
	cout << "2) Remove a Bank Account" << endl;
	cout << "3) Display the information of a particular client's account (by account number)" << endl;
	cout << "4)Apply a deposit to a particular account(by account number)" << endl;
	cout << "5) Apply a withdrawal from a particular account(by account number)" << endl;
	cout << "6) Sortand Display the list of clients according to their balance, family nameand given name, in ascending or descending order." << endl;
	cout << "7) Display the avarage balance value of the accounts" << endl;
	cout << "8) Display the total balance value of the accounts" << endl;
	cout << "9) You should be capable to create an accountand insert it at any position of the array.This implies shifting back or forward the oder elements of the array)." << endl;
	cout << "10) Exit the application" << endl << endl;
	cout << "Option : ";
	cin >> menuOption;
}