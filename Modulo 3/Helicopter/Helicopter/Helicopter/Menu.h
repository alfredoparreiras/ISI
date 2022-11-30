#pragma once

#include <string>
#include <iostream>
#include "Helicopter.h"
using namespace std;

class Menu
{
public:
	/*first way
	Helicopter helicopter;	
	Menu(Helicopter helicopter);
	*/
	//second way
	Helicopter* helicopter;
	Menu();

	void playGame();
};
