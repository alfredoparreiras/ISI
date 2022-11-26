#include"Container.h"

/*

- with a 5-liter vase and a 3-liter vase, get 2 liters of liquid in the 3-liter vase.

- with a 10-liter vase and a 3-liter vase, get 8 liters of liquid in the 10-liter vase.


*/

int main() {

	// 5 Liters and 3 Liters
	/*Container one("One", 5);
	one.fillsContainer();
	Container two("Two", 3);
	one.transferContainer(two);
	two.emptyContainer();
	one.transferContainer(two);
	cout << two.getCapacity() << endl;
	cout << two.getVolume() << endl;*/
	
	// 10 Liters and 8 Liters

	Container three("Three", 10);
	three.fillsContainer();
	cout << three.getCapacity() << endl;
	cout << three.getVolume() << endl;
	Container four("Four", 3);
	three.transferContainer(four);
	cout << three.getCapacity() << endl;
	cout << three.getVolume() << endl;
	cout << four.getCapacity() << endl;
	cout << four.getVolume() << endl;





}