#include <iostream>
using namespace std;

/*38 –	Write an algorithm that displays a table for converting Celsius units into Fahrenheit units. 
The table should display all of the values from 
–40 to 40 degrees Celsius, at increments of 5 degrees.  The conversion formula is:
F= 1.8×C+32
*/

int main() {
	int celsius{ 0 };
	int fahrenheit{ 0 };
	int minCelsius = -40;
	int maxCelsius = 40;

	for (celsius = minCelsius; celsius <= maxCelsius; celsius+=5) {
		fahrenheit = (9.5) * celsius + 32;

		cout << "The temperature in Celsius is " << celsius << " and in Farenheit is " << fahrenheit << endl;
	}


}