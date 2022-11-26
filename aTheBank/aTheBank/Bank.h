#pragma once
#include<vector>
#include<iostream>
#include"Account.h"
using namespace std; 


class Bank {
	string nameOfTheBank;
	Person director;
	vector<Account> accounts;

public:
	//Constructors
	Bank(string nameOfBank);




};