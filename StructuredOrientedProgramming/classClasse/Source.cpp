#include<iostream>
using namespace std; 



int main() {

	//int x{ 5 };
	//int* xPtr = &x;
	//int** p = &xPtr;


	//cout << "0 is the address of variable x " << p << endl;
	//cout << "1 address store of 	" << *p << endl;
	//cout << "2	" << &xPtr << endl;
	//cout << "3	" << **p << endl;
	//cout << "4	" << &p << endl;
	//cout << "5	" << &*p << endl;
	//cout << "6	" << *&p << endl;
	//cout << "7	" << &**p << endl;
	//cout << "8	" << *&*p << endl;
	//cout << "9	" << **&p << endl;
	//cout << "10	" << *xPtr << endl;
	//cout << "11	" << &xPtr << endl;
	//cout << "12	" << &x << endl;
	//cout << "13	" << *&x << endl;
	//cout << "14 " << &p << endl;

	//int letter{ 10 };
	//int* p1 = &letter;
	//int** p2 = &p1;

	//cout << **&p1 << endl;
	//cout << *&letter << endl;
	//cout << *p2 << endl;
	//cout << *p1 << endl;

	//cout << *p1 << endl;
	//cout << *p2 << endl;

	int shopper{ 10 };
	int* pShopper{ &shopper };
	int** ptr{ &pShopper };
	

	//cout << "*ptr = " << *ptr <<" *&pShopper" << *&pShopper << endl;

	cout << &&ptr << endl;




	


	













}