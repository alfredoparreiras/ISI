#include<iostream>
using namespace std; 

/*
function validadeDouble
parameter : double number
validade and return


function validadeDoubleGreaterThan
parameter : double greater than

Translate : 
crie uma fun��o chamada validateDouble que cont�m a entrada de um valor do tipo double.

crie uma fun��o chamada validateDoubleGreaterThan que solicita a entrada de um valor do tipo double maior que um valor passado no par�metro e o retorna. Essa fun��o deve usar a fun��o valida��oDouble criada anteriormente para processar a entrada.
*/

//FUNCTIONS PROTOTYPES
double validateDouble();
double validateDoubleGreaterThan(double greaterNumber);

int main() {
	cout << validateDoubleGreaterThan(24);
}

double validateDouble() {
	double number;
	
	while (1) {
		cout << "Enter a number : ";
		cin >> number;
		if (cin.good()) {
			break;
		}
		else {
			cout << "Invalid input! Please input a numberical value : ";
			cin.clear();
			cin.ignore(512, '\n');
		}
	}

	return number;
}

double validateDoubleGreaterThan(double greaterNumber) {
	float firstImput = validateDouble();
	
	cout << "Enter a Number : ";
	cin >> greaterNumber;
	
	if (greaterNumber > firstImput) {
		return greaterNumber;
	}
	else {
		cout << "You need to insert a value greater than the first one.";
	}
}