#include<iostream>
#include"Person.h"
#include"Account.h"
#include"Bank.h"
using namespace std; 


int main() {

	Person Alfredo("Alfredo");

	Account um{ 20202,Alfredo,2020.20,.15 };
	Account dois{ 1202,Alfredo,20220.20,.125 };

	Bank BTG("btg");
	BTG.setDirector(Alfredo); 
	
	BTG.openAccount(um,202022, Alfredo, 1000, .15);
	BTG.openAccount(dois, 202022, Alfredo, 1000, .15);


	/*BTG.openAccount(,13212, Alfredo, 2000, .2);
	cout << BTG.numbersOfAccounts << endl;*/
	BTG.displayAccount(1);





	

}