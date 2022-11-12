#include<iostream>
using namespace std; 

/*
function validadeDouble
parameter : double number
validade and return


function validadeDoubleGreaterThan
parameter : double greater than

Translate : 
crie uma função chamada validateDouble que contém a entrada de um valor do tipo double.

crie uma função chamada validateDoubleGreaterThan que solicita a entrada de um valor do tipo double maior que um valor passado no parâmetro e o retorna. Essa função deve usar a função validaçãoDouble criada anteriormente para processar a entrada.
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