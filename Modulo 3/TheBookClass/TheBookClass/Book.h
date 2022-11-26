#pragma once
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Book {

	unsigned long long systemId;
	short publicationYear;
	unsigned short nbPages;
	string title;
	string ISBN13;

public: 

	//Constructor
	Book(unsigned long long systemId, short publicationYear, unsigned short nbPages,string title, string ISBN13);
	

	//Getters

	unsigned long long getSystemId();

	short getPublicationYear();

	unsigned short getNbPages();

	string getTitleName();

	string getISBN();

	//Setters
	void setSystemId(unsigned long long systemId);

	void setPublicationYear(short publicationYear);

	void setNbPages(unsigned short nbPages);

	void setTitleName(string title);

	void setISBN(string ISBN);


	//Generic Methods
	void display();

};