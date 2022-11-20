
#include"Author.h"






int main() {

	Author alfredo;
	alfredo.setName("Alfredo Parreira");
	alfredo.setContribution(40);
	alfredo.display();
	cout << endl;

	Author rehman("Rehman", -40);
	rehman.display();
	rehman.setContribution(-60);
	rehman.display();





}