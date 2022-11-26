#include<iostream>
#include<vector>
using namespace std; 

struct Date {
	short year{ 1990 };
	short month{ 1 };
	short day{ 1 };
};

struct Movies {
	string name; 
	Date releasedDate;
	bool isPopular;
};

int main() {

	// Structured Biding 

	/*Movies hardToDie{ "Hard To Die", 2008, true };
	auto [name, yearReleased, isPopular] { hardToDie};
	cout << name;*/


	// Vector of Structs

	//vector<Movies> movie;
	//movie.push_back({ "Terminator",1980,true });
	//movie.push_back({ "Terminator II",1988,true });
	//movie.push_back({ "King Lion",1995,true });

	//for (const auto& movies : movie) { // We have this variable wil reference one of the movies in the vector. This way we will not copy the value to the variable, we will just reference the valie inside the object.
	//	cout << movies.name << " and " << movies.yearReleased << endl;
	//}

	// Nesting Structure
	
	Movies hardToDie{ "Hard To Die", 
		{2008,11,20}, 
		true };


	cout << hardToDie.releasedDate.day;
}