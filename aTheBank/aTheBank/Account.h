#pragma once
#include"Person.h"


class Account {
	double accountNumber;
	Person person;
	double balance;
	double interestRate;


	//Methods
	Account(double accountNumber, Person person, double balance, double interestRate) {
		Account::accountNumber = accountNumber;
		Account::person = person;
		Account::balance = balance;
		Account::interestRate = interestRate;
	}

	void display() {
		cout << "\tYour Account information is : " << endl;
		cout << "\tYour account number: " << accountNumber << endl;
		cout << "\tYour account balance: " << balance << endl;
		cout << "\tYour account interest rate: " << interestRate << endl;
		cout << "\This account belong to : " << "person" << endl;

	}

	string set_name(string name) {}

	double set_interestRate(double interestRate) {}

	double set_Deposit(double deposit) {}

	double set_Withdraw(double withdrawal) {}
};