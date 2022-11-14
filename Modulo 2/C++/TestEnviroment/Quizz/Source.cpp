#include<iostream>
using namespace std; 

void fct(int x, int y) {
	return x + y;
}

int main(){
	
	int result = 5 + fct(12, 12);
	
	cout << result;

}
