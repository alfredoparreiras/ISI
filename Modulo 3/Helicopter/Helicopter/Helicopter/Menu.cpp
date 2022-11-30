#include "Helicopter.h"
#include <iostream>
#include "Menu.h"
using namespace std;
/*
please pay attention: the base of this code has been done
by @jared chevalier or @francois capone. 
I have take that code and made changes to it. 
26 nov 2022 @dara aghamirkarimi
*/


/*
first way
Menu::Menu(Helicopter h) {
	helicopter = h;
}
*/

//second way
Menu::Menu() {
	 helicopter = new Helicopter();
}


void Menu::playGame() {

		while (true)
		{
			cout << "--------------------------------" << endl;;
			cout << "1 - Start" << endl;
			cout << "2 - Stop" << endl;
			cout << "3 - Fly up" << endl;
			cout << "4 - Fly down" << endl;
			cout << "5 - Land" << endl;
			cout << "6 - Refuel" << endl;
			cout << "7 - Exit" << endl;
			cout << endl;;

			cout << "Select an option: 1, 7 " << endl;
			int selection;
			cin >> selection;
			bool success;

			switch (selection)
			{
			case 1:				
				success = (*helicopter).startEngine();
				if (success)
				{
					cout << "Starting engine." << endl;
					cout << (*helicopter).toString() << endl;
				}
				else
				{
					cout << "    Error: Failed to start engine." << endl;
				}
				break;

			case 2:
				success = (*helicopter).stopEngine();
				if (success)
				{
				
					cout << (*helicopter).toString() << endl;;
				}
				else
				{
					cout << "    Error: Failed to stop engine." << endl;
				}
				break;

			case 3:
				success = (*helicopter).flyToAltitude((*helicopter).getAltitude() + 400);
				if (success)
				{
					cout << "Flying upward." << endl;
					cout << (*helicopter).toString() << endl;
				}
				else
				{
					cout << "    Error: Failed to fly upward." << endl;
				}
				break;

			case 4:
				success = (*helicopter).flyToAltitude((*helicopter).getAltitude() - 400);
				if (success)
				{
					cout << "Flying downward." << endl;
					cout << (*helicopter).toString() << endl;
				}
				else
				{
					cout << "    Error: Failed to fly downward." << endl;
				}
				break;

			case 5:
				success = (*helicopter).flyToAltitude(0);
				if (success)
				{
					cout << "Landing." << endl;
					cout << (*helicopter).toString() << endl;
				}
				else
				{
					cout << "    Error: Failed to land." << endl;
				}
				break;

			case 6:
				success = (*helicopter).refuel(Helicopter::MaxFuelLevel - (*helicopter).getFuelLevel());
				if (success)
				{
					cout << "Refueling helicopter." << endl;
					cout << (*helicopter).toString() << endl;
				}
				else
				{
					cout << "    Error: Failed to refuel." << endl;
				}
				break;

			case 7:
				selection= 0;
			}

			if ((*helicopter).isExploded())
			{
				cout << "Helicopter crashed and exploded!" << endl;
				selection= 0;
			}
		}
		
	}
