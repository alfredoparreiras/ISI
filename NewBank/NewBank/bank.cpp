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
const int sizeofarray = 5;
int index{ 0 };
AccountData accounts[sizeofarray];

// GLOBAL VARIABLES
short menuOption;
double amount;
short accountNumbers{ 0 };


// FUNCTIONS PROTOTYPES
AccountData addAccount();
void displayData(int);
int menu();
int subMenu();
void displayAll() {
	cout << "   Account Number   " << "    Given Name    " << "    Family Name   " << "    Balance     " << endl;
	for (int i{ 0 }; i < sizeofarray; i++) {
		cout << "    " << accounts[i].accountNumber << "    " << accounts[i].givenName << "    " << accounts[i].familyName << "    " << accounts[i].balance << endl;
	}
}
void deposit(double);
void withdrawal(double amount);
double averageOfBalances();
double totalBalance();


// MAIN SCOPE
int main() {

	menu();
	do {
		switch (menuOption) {
		case 1: 
				cout << "Please insert the posistion of your account :" << " ";
				cin >> index;
				accounts[index] = addAccount();
				break;

		case 2: 
				displayAll();
				break;

		case 3: 
				cout << "Please, insert the account's number to search the data: ";
				cin >> index;
				displayData(index);
				break;
		case 4: 
				cout << "Please insert your index number : " << " ";
				cin >> index;
				cout << "Please enter the deposit amount : " << " ";
				cin >> amount;
				deposit(amount);
				break;
		case 5:	
				cout << "Please insert your index number : " << " ";
				cin >> index;
				cout << "Please enter the withdrawal amount : " << " ";
				cin >> amount;
				withdrawal(amount);
				break;
		case 6:
			cout << "The average balance for our portfolio is $: " << averageOfBalances() <<" dollars." << endl;
		
		case 7:
			cout << "The total sum of balances for our portfolio is $: " << totalBalance() << " dollars." << endl;
				
		}
		system("pause");
		subMenu();
	} while (menuOption != 10);

	return 0;

}

// FUNCTION TO ADD A NEW ACCOUNT 
AccountData addAccount() {

	AccountData c;

	cout << endl;
	cout << "--- Adding a New Account ---" << endl << endl;

	//LOOP TO VERIFY IF THE ACCOUNT NUMBER MATCH WITH THE PATTERN
	do {

		cout << "Enter your account number between 10000 and 10099 :" << " ";
		cin >> c.accountNumber;

	} while (c.accountNumber < 10000 || c.accountNumber > 10999);


	cout << "Enter your first name : " << " ";
	cin >> c.givenName;

	cout << "Enter your family name : " << " ";
	cin >> c.familyName;

	cout << "Enter the amount for your first deposit : " << " ";
	cin >> c.balance;

	cout << "Account Created. Press any key to returning to the menu." << endl;

	accountNumbers++;

	cout << "At this moment you have " << accountNumbers << "Accounts.";

	return c;
}


// FUNCTION TO DISPLAY ALL ACCOUNT INFORMATION 
// TODO : Change for the clients number account and dont use the index
void displayData(int index) {

	if (accounts[index].balance > 0) {

		cout << "Hello " << accounts[index].givenName << " " << accounts[index].familyName << ", your account number is " << accounts[index].accountNumber << ". At this moment your balance is $" << accounts[index].balance << " dollars in your account." << endl;
	}
	else {
		cout << "Hello " << accounts[index].givenName << " " << accounts[index].familyName << ", your account number is " << accounts[index].accountNumber << ". At this moment your balance is negative in $" << accounts[index].balance << " dollars, please make a deposit to avoid administrative taxes." << endl;
	}


}

// FUNCTION TO CREATE THE MENU AND SUBMENU
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
	cout << "4) Apply a deposit to a particular account(by account number)" << endl;
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
	cout << endl << endl;
	cout << "Please choose one option :" << endl;
	cout << endl;
	cout << "1) Add a Bank Account" << endl;
	cout << "2) Remove a Bank Account" << endl;
	cout << "3) Display the information of a particular client's account (by account number)" << endl;
	cout << "4) Apply a deposit to a particular account(by account number)" << endl;
	cout << "5) Apply a withdrawal from a particular account(by account number)" << endl;
	cout << "6) Sortand Display the list of clients according to their balance, family nameand given name, in ascending or descending order." << endl;
	cout << "7) Display the avarage balance value of the accounts" << endl;
	cout << "8) Display the total balance value of the accounts" << endl;
	cout << "9) You should be capable to create an accountand insert it at any position of the array.This implies shifting back or forward the oder elements of the array)." << endl;
	cout << "10) Exit the application" << endl << endl;
	cout << "Option : ";
	cin >> menuOption;

	return menuOption;
}
// FUNCTION TO CREATE THE DEPOSIT 
void deposit(double amount) {

	accounts[index].balance = accounts[index].balance + amount;
	cout << "Your new balance is $" << accounts[index].balance << " Dollars." << endl;

}

// FUNCTION TO CREATE THE WITHDRAW
void withdrawal(double amount) {

	if (amount < accounts[index].balance) {
		accounts[index].balance = accounts[index].balance - amount;
		cout << "Your new balance is $" << accounts[index].balance << " Dollars." << endl;
	}
	else {
		cout << "Your balance is less than your requested withdrawal. For this reason we can't continue with this operation.";
	}
}

//FUNCTION TO CALCULATE THE AVERAGE BALANCE VALUE
double averageOfBalances() {
	float totalBalanceOfAccounts{ 0 };
	float averageBalance{ 0 };
	for (int i{ 0 }; i < sizeofarray; i++) {
		totalBalanceOfAccounts = totalBalanceOfAccounts + accounts[i].balance;
	}

	averageBalance = totalBalanceOfAccounts / accountNumbers;

	return averageBalance;

}

//FUNCTION TO CALCULATE THE TOTAL SUM OF THE ACCOUNTS
double totalBalance() {
	float totalBalanceOfAccounts{ 0 };
	for (int i{ 0 }; i < sizeofarray; i++) {
		totalBalanceOfAccounts = totalBalanceOfAccounts + accounts[i].balance;
	}

	return totalBalanceOfAccounts;
}

// FUNCTION TO SORTING THE NAMES ASCENDING
void sortingGivenNames() {

}