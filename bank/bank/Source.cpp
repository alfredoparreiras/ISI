#include<iostream>

using namespace std;

/*
Create a protype of a bank's program

Rules : Store the Family name and given name
		Their Unique account number between 10000 and 10099
		Balance of their account

Functions :
	I) Add a Bank Account - DONE
	II) Remove a bank account ( always a shift back is mandatory ) -
	III) Display the information of a particular client's account (by account number) - DONE
	IV) Apply a deposit to a particular account (by account number) - DONE
	V) Apply a withdrawal from a particular account (by account number) - DONE
	VI) Sort and Display the list of clients according to their balance, family name and given name, in ascending or descending order. - DONE
	VII) Display the avarage balance value of the accounts - DONE
	VIII) Display the total balance value of the accounts - DONE
	IX ) You should be capable to create an account and insert it at any position of the array. This implies shifting back or forward the oder elements of the array).
	X) Exit the application


*/

/*TODO: 1) Display the information of a particular client’s account. (by account number) - DONE
		2) Sort and display the list of clients according to their balance, family name and given name, in ascending or descending order.
		3) Menu
*/


// STRUCT USED TO CREATE ACCOUNTDATA TYPE

struct AccountData {
	string givenName;
	string familyName;
	double balance;
	int accountNumber;
};

// DECLARE AND INITIALIZING THE ARRAY WITH ACCOUNT NUMBERS
const int sizeofarray = 5;
int index{ 0 };
AccountData accounts[sizeofarray];

// GLOBAL VARIABLES
short menuOption;
double amount;
short quantityOfAccounts{ 0 };
int accountNumber{ 0 };
int sortingType{ 0 };



// FUNCTIONS PROTOTYPES
AccountData addAccount();
void displayData(int);
int menu();
int subMenu();
void displayAll() {
	cout << "Account Number\t" << "\tGiven Name\t" << "\tFamily Name\t" << "\tBalance\t" << endl;
	for (int i{ 0 }; i < sizeofarray; i++) {
		cout << accounts[i].accountNumber << "\t\t" << accounts[i].givenName << "\t\t" << accounts[i].familyName << "\t" << accounts[i].balance << "\t" << endl;
	}
}
void deposit(double, int);
void withdrawal(double, int);
double averageOfBalances();
double totalBalance();
void sortingFunction(int);


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
			cin >> accountNumber;
			displayData(accountNumber);
			break;
		case 4:
			cout << "Please insert your account number  : " << " ";
			cin >> accountNumber;
			cout << "Please enter the deposit amount : " << " ";
			cin >> amount;
			deposit(amount, accountNumber);
			break;
		case 5:
			cout << "Please insert your account number : " << " ";
			cin >> accountNumber;
			cout << "Please enter the withdrawal amount : " << " ";
			cin >> amount;
			withdrawal(amount, accountNumber);
			break;
		case 6:
			cout << "Select a sorting type :\n";
			cout << "(0) - Ascending\n";
			cout << "(1) - Descending\n";
			cout << "(2) - Balance\n";

			cin >> sortingType;
			sortingFunction(sortingType);
			break;

		case 7:
			cout << "The average balance for our portfolio is $: " << averageOfBalances() << " dollars." << endl;

		case 8: 
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

	quantityOfAccounts++;

	cout << "At this moment you have " << quantityOfAccounts << "Accounts.";

	return c;
}


// FUNCTION TO DISPLAY ALL ACCOUNT INFORMATION 
// TODO : Change for the clients number account and dont use the index
void displayData(int accountNumber) {

	//bool accountActive{ false };

	for (int i{ 0 }; i < sizeofarray; i++) {

		if (accountNumber == accounts[i].accountNumber) {
			bool accountActive = true;

			if (accounts[i].balance > 0) {

				cout << "Hello " << accounts[i].givenName << " " << accounts[i].familyName << ", your account number is " << accounts[i].accountNumber << ". At this moment your balance is $" << accounts[i].balance << " dollars in your account." << endl;
			}
			else {
				cout << "Hello " << accounts[i].givenName << " " << accounts[i].familyName << ", your account number is " << accounts[i].accountNumber << ". At this moment your balance is negative in $" << accounts[i].balance << " dollars, please make a deposit to avoid administrative taxes." << endl;
			}

		}

		/*if (i == sizeofarray && !accountActive) {
			cout << "Account not found. Return to menu to try again.";
		}*/
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
 //function to create the deposit 
void deposit(double amount, int accountNumber) {
	
	bool accountActive{ false };
	
	for (int i{ 0 }; i < quantityOfAccounts; i++) {

		bool accountActive = true;

		if (accountNumber == accounts[i].accountNumber) {

			accounts[i].balance = accounts[i].balance + amount;
			cout << "your new balance is $" << accounts[i].balance << " dollars." << endl;

		}
	}

	if (!accountActive) {
		cout << "Account not found. Return to menu to try again.";
	}
}

// FUNCTION TO CREATE THE WITHDRAW
void withdrawal(double amount, int accountNumber) {

	for (int i{ 0 }; i < quantityOfAccounts; i++) {
		if (accounts[i].accountNumber == accountNumber) {
			if (amount < accounts[i].balance) {
				accounts[i].balance = accounts[i].balance - amount;
				cout << "Withdrawal Successful \nYour new balance is $" << accounts[i].balance << " Dollars." << endl;
			}
			else {
				cout << "Your balance is less than your requested withdrawal. For this reason we can't continue with this operation.";
			}
		}
	}
}

//FUNCTION TO CALCULATE THE AVERAGE BALANCE VALUE
double averageOfBalances() {
	float totalBalanceOfAccounts{ 0 };
	float averageBalance{ 0 };
	for (int i{ 0 }; i < sizeofarray; i++) {
		totalBalanceOfAccounts = totalBalanceOfAccounts + accounts[i].balance;
	}

	averageBalance = totalBalanceOfAccounts / quantityOfAccounts;

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

// CREATING A SORTING FUNCTION 
void sortingFunction(int sortingType) {

	AccountData temp;


	enum SortingType {
		Ascending,
		Descending,
		Balance
	};


	if (sortingType == Ascending) {
		for (int i{ 0 }; i < sizeofarray; i++) {
			for (int j = i + 1; j < sizeofarray; j++) {
				if (accounts[i].givenName > accounts[j].givenName) {
					temp = accounts[i];
					accounts[i] = accounts[j];
					accounts[j] = temp;
				}
			}
		}

		cout << "Account Number\t" << "\tGiven Name\t" << "\tFamily Name\t" << "\tBalance\t" << endl;
		for (int i{ 0 }; i < sizeofarray; i++) {

			cout << accounts[i].accountNumber << "\t\t" << accounts[i].givenName << "\t\t" << accounts[i].familyName << "\t" << accounts[i].balance << "\t" << endl;

		}
	}

	if (sortingType == Descending) {
			for (int i{ 0 }; i < sizeofarray; i++) {
				for (int j = i + 1; j < sizeofarray; j++) {
					if (accounts[i].givenName < accounts[j].givenName) {
						temp = accounts[i];
						accounts[i] = accounts[j];
						accounts[j] = temp;
					}
				}
			}

			cout << "Account Number\t" << "\tGiven Name\t" << "\tFamily Name\t" << "\tBalance\t" << endl;
			for (int i{ 0 }; i < sizeofarray; i++) {

				cout << accounts[i].accountNumber << "\t\t" << accounts[i].givenName << "\t\t" << accounts[i].familyName << "\t" << accounts[i].balance << "\t" << endl;

			}
	}

	if (sortingType == Balance) {
		for (int i{ 0 }; i < sizeofarray; i++) {
			for (int j = i + 1; j < sizeofarray; j++) {
				if (accounts[i].balance < accounts[j].balance) {
					temp = accounts[i];
					accounts[i] = accounts[j];
					accounts[j] = temp;
				}
			}
		}

		cout << "Account Number\t" << "\tGiven Name\t" << "\tFamily Name\t" << "\tBalance\t" << endl;
		for (int i{ 0 }; i < sizeofarray; i++) {

			cout << accounts[i].accountNumber << "\t\t" << accounts[i].givenName << "\t\t" << accounts[i].familyName << "\t" << accounts[i].balance << "\t" << endl;

		}
	}

}