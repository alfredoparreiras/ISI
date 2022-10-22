#include <iostream>
using namespace std;
int main()
{

	/*	1. Perform the analysis, design, and implementation for the following problem :
	  We want to read the distance between two cities(in km) and the speed(in km / h)
	  at which a vehicle is driving, in order to be able to display the duration(in hours)
	  of the vehicle�s trip between the two cities.Use the following formula :
	  */
	double distance;
	double speed;
	double time;
	cout << "what is the distance between the city you want to go and the place from where you want to do " << endl;
	cin >> distance;
	cout << "what will be the minimum speed of your car you will be driving " << endl;
	cin >> speed;
	cout << "you are gonna take " << (time = distance / speed) << "hours to reach at your destination " << endl;


}
