#include<iostream>
using namespace std; 

/*Function: displayWeekDay
Must use switch case*/


//ENUM
enum daysOfWeek {
	Lundi, Mardi,Mercredi, Jeudi, Vendredi, Samedi, Dimanche, 
};

//FUNCTION PROTOTYPE
void DisplayWeekDay(int);


int main() {
	cout << "Le jour de la semaine est : ";
	DisplayWeekDay(4);
}

void DisplayWeekDay(int day) {

	switch (day){
	case 0: 
		daysOfWeek::Lundi;
		cout << "Lundi";
		break;
	case 1:
		daysOfWeek::Mardi;
		cout << "Mardi";
		break;
	case 2:
		daysOfWeek::Mercredi;
		cout << "Mercredi";
		break;
	case 3:
		daysOfWeek::Jeudi;
		cout << "Jeudi";
		break;
	case 4:
		daysOfWeek::Vendredi;
		cout << "Vendredi";
		break;
	case 5:
		daysOfWeek::Samedi;
		cout << "Samedi";
		break;
	case 6:
		daysOfWeek::Dimanche;
		cout << "Dimanche";
		break;
	default:
		cout << "Switch Error";
		break;
	}

}