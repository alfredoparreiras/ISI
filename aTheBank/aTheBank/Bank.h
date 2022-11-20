#pragma once
#include<vector>


class Bank {
	string nameOfTheBank;
	Person director;
	vector<Account> accounts;

	//Methods

	Bank(string nameOfBank) {
		Bank::nameOfTheBank = nameOfBank;
	}




};