#include<iostream>
using namespace std; 

//This is an important concept when we work with functions. 



void greet(string &name) {
	
	cout << "Hello " << name; 
	name = "Outro nome";
}



int main() {

	string name{ "alfredo parreira silva da costa nascimento" };
	greet(name);
	cout << name; 
	/*
	The output of this code above will be 100. This happens because  increasePrice functions take a copy of price variable, store in its argument, do the increase but didn't change de value of price, because it was a copy of the value. If we put a cout inside the function , we have 120 as output. But the value storaged inside the main remains 100.

	To acesses and changes the value of price (int main) we have to options : 
	1] pass a reference to the parameter of the functions, we do that adding an "&" before the parameter's name 


	void incrasePrice(double &price){
		price *= 1.2; 
	}

	int main(){

	double price{100};
	increasePrice(price); 
	cout << price; // Output : 120. 
	}

	2] Add an return statement (using the correct data type) and reassing the value of price with the return of the function. 

	double incrasePrice(double price){
		price *= 1.2;
	}

	int main(){

	double price{100};
	price = increasePrice(price);
	cout << price; // Output : 120.
	}

	Important ! Usually we dont need to use this kind of operation with small amount of data, like an integer. Usually it is used for larger amount of data, like strings. 

	*/

}