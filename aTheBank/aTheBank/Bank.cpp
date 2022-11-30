#include"Bank.h"

// Constructor
Bank::Bank(string nameOfBank) : nameOfTheBank{ nameOfBank } {};

void Bank::openAccount(Account& account) {
	
	account.
	 Accounts[numbersOfAccounts] = account;
	 numbersOfAccounts++;
	 
	 return true;


};


//Methods

void Bank::setDirector(const Person& director) {

	this->director = director;

}

string Bank::getDirector(){
	
	return Bank::director.display();
}

void Bank::displayAccount(int index){

	cout << Accounts[index].getAccountNumber() << endl;
	cout << Accounts[index].getAccountHolder() << endl;
	cout << Accounts[index].getInterestRate() << endl;
	cout << Accounts[index].getBalance() << endl;
}


