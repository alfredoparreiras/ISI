#include"Container.h"

//Constructor 
Container::Container(string name, double capacity) : name{ name }, capacity{ capacity } {};
	


//Getters
double Container::getCapacity() {
	cout << "This is the capacity of container : " << this->name << endl;
	return capacity;

};
double Container::getVolume() {
	cout << "This is the volume of container : " << this->name << endl;	
	return volume;
};

//Actions
void Container::emptyContainer() {
	volume = 0;
};

void Container::fillsContainer() {
	volume = capacity;
};

void Container::transferContainer(Container& dest) {
	
	if (dest.capacity >= volume) {
		dest.volume = volume;
		if (volume - dest.capacity < 0) {
			volume = 0;
		}
		else {
			volume = (volume - dest.capacity);
		}
	}
	else {
		dest.volume = dest.capacity; // 5 / 3 = 5 - 3 = 2
		volume = volume - dest.capacity;


	}
};