#include<iostream>
using namespace std; 

int main() {

	int temperatures[] = { 50,20,15,30,60,20 };
	double sum{ 0 }; 
	double average{ 0 };
	short count{ 0 };
	
	// New For Loop Structure 
	for (int temperature : temperatures) {
		
		sum = sum + temperature; 
		count += 1;
		average = sum / count;

	}
	
	int i{ 0 };
	while (i<5) {
		cout << i; 
		i++;
	}





	
	

}