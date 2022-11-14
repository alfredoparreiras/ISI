#include<iostream>
using namespace std; 


int main() {

	int score{ 10 };
	int* score_ptr{&score}; // Ask john about this type of initializing.
	

	/* score_ptr = > Can hold an memory address of a variable of type int.The data is really important, if I create a pointer of type int, i can't point to address of an string variable. 
	 The size of a pointer variable is the same. It not deppend of the data type that we ara pointing. 
	*/
	/*score_ptr = &score;*/

	cout << score << endl; 
	cout << score_ptr<< endl;

	*score_ptr = 20; 

	/*DeReference > Now the pointer is pointing to the value storagedand no to the variable. We use the asterisk to declare the pointer and after that, it will be used to dereferencing.
	 It will change the value inside the variable but the value of *score_ptr will continue beeing the address of "score" .
	 */

	cout << score << endl;
	cout << score_ptr << endl;
	
	int* score_ptr2 = score_ptr;

	cout << endl;
	cout << score_ptr << endl; 
	cout << *score_ptr << endl; //Dereference again >> output 20. // 
	cout << score_ptr2 << endl;
	cout << *score_ptr2 << endl;


// try assing a const to a int_ptr
}

/*

Notes : 
value = 45 
Variable Name = var_number
memory address = axA23E3

To pass this address, we need to use "*" char.

 Using : 
 int *var ptr = &var_number

 Dynamique memory is when we manually delegate the address. Try to understand this better. 

 Using New Keyword to allocate storage dynamically.

 new = allocation on the heap.
 delete = deallocation of the storage



*/