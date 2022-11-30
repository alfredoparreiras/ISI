#pragma once
#include<vector>
#include<iostream>
#include"Account.h"
using namespace std; 


class Bank {
public:
	string nameOfTheBank;
	Person director;
	Account account;
	Account Accounts[5];
	unsigned int numbersOfAccounts{ 0 };

public:
	//Constructors
	Bank() = default;
	explicit Bank(string nameOfBank);

	//Methods
	//Open Account
	void openAccount(Account& account);

	
	
	// Setters 
	void setDirector(const Person& director);

	// Getters
	string getDirector();

	//Display
	void displayAccount(int index);
};