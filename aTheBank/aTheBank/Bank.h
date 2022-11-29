#pragma once
#include<vector>
#include<iostream>
#include"Account.h"
using namespace std; 


class Bank {
	string nameOfTheBank;
	Person director;
	Account account;
	Account Accounts[5];

public:
	//Constructors
	Bank() = default;
	explicit Bank(string nameOfBank);

	//Methods
	//Open Account
	/*
	Account openAccount(double accountNumber, const Person& person, double balance, double interestRate) : account(accountNumber, person, balance, interestRate);*/

	
	



};