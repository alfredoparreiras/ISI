#include"Container.h"

/*

- with a 5-liter vase and a 3-liter vase, get 2 liters of liquid in the 3-liter vase.

- with a 10-liter vase and a 3-liter vase, get 8 liters of liquid in the 10-liter vase.


*/

int main() {
	Container um(5);
	um.fillsContainer();
	cout << um.getCapacity();
}