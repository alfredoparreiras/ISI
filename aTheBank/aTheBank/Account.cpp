#include"Account.h"
#include<iostream>
using namespace std;

void Account::display() {
	cout << "\tYour Account information is : " << endl;
	cout << "\tYour account number: " << accountNumber << endl;
	cout << "\tYour account balance: " << balance << endl;
	cout << "\tYour account interest rate: " << interestRate << endl;
	cout << "\This account belong to : " << "person" << endl;

}

string Account::set_name(string name) {

}

double Account::set_interestRate(double interestRate) {
	Account::interestRate = interestRate;
}

double Account::set_Deposit(double deposit) {
	Account::balance += deposit;
}

double Account::set_Withdraw(double withdrawal) {
	Account::balance += withdrawal;
}