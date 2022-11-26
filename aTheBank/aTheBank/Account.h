#pragma once
#include"Person.h"
#include<iostream>
using namespace std; 



class Account {
	double accountNumber;
	Person person;
	double balance;
	double interestRate;

public:
	//Constructor
	Account(double accountNumber, const Person& person, double balance, double interestRate);


	//Getters

	double getInterestRate();
	double getBalance();
	double getAccountNumber();
	Person getAccountHolder();

	//Displaying Info Account
	void accountDisplay();

	//Operations
	bool deposit(double amount);
	bool withdrawal(double withdrawal);
};