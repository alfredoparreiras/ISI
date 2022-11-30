#include"Account.h"

//Constructor 
Account::Account(double accountNumber, const Person& person, double balance, double interestRate) {
	Account::accountNumber = accountNumber;
	Account::person = person;
	Account::balance = balance;
	Account::interestRate = interestRate;
}

//Getters

double Account::getInterestRate() {
	return interestRate;
}

double Account::getBalance() {
	return balance;
};

double Account::getAccountNumber() {
	cout << "My Account Number is : " << endl;
	return accountNumber;
};

string Account::getAccountHolder() {
	return Account::person.display();

};

//Displaying Info Account

void Account::accountDisplay() {
	cout << "\tYour Account information is : " << endl;
	cout << "\tYour account number: " << accountNumber << endl;
	cout << "\tYour account balance: " << balance << endl;
	cout << "\tYour account interest rate: " << interestRate << endl;
	cout << "\tThis account belong to : " << person.display() << endl;

}





bool Account::deposit(double amount) {
	if (amount > 0) {
		Account::balance += amount;
		return true;
	}
	return false;
}

bool Account::withdrawal(double withdrawal) {
	if (balance > withdrawal) {
		Account::balance -= withdrawal;
		cout << "Your Operation was sucessfull. Your new balance is " << balance << endl;
		return true;
	}

	cout << "Operation declined. Your balance is smaller than the amount you have in balance ";

	return false;
}