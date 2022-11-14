#include <iostream>
using namespace std; 

/*
1.	Create an algorithm that displays the following sequence of values. 
Write one version of the pseudocode that uses the FOR loop, and another that uses the WHILE  or DO…WHILE loop. 
It is not required for the display to be on a single line:

     		5 3 1 -1 -3 -5
*/


int main() {

    for (int i = 5; i >= 0; ++i) {
       cout << i;
       if (i == 1) {
           for (i = 1; i <= 5; i++) {
               cout << i;
               break;  
           }
       }
    };


};