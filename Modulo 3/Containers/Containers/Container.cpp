#include"Container.h"


//Getters
double Container::getCapacity() {
	
	return capacity;

};
double Container::getVolume() {
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

	dest.volume = Container::volume;

};