#pragma once
#include<iostream>
#include<string>
using namespace std; 



class Editor {
	string publisherName;


public:
	//Constructors 
	Editor() {};
	Editor(string publisherName) {
		if (publisherName.length() < 75) {
			Editor::publisherName = publisherName;
		}
		else {
			cout << "Please, insert a publisher name with less then 75 characters.";
		}
	}

	//Methods Prototypes

	void setPublisherName(string publisherName);
	string getPublisherName();
	void displayData();
};