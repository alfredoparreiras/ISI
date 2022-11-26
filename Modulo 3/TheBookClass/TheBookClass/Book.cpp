#include"Book.h"

/*
	unsigned long long systemId;
	short publicationYear;
	unsigned short nbPages;
*/

//Constructor
Book::Book(unsigned long long systemId, short publicationYear, unsigned short nbPages, string title, string ISBN13) {

	(*this).systemId = systemId;
	this->publicationYear = publicationYear;
	Book::nbPages = nbPages;
	this->title = title;
	this->ISBN13 = ISBN13;

}

//Getters

unsigned long long Book::getSystemId() {
	return systemId; 
};

short Book::getPublicationYear() {
	return publicationYear;

};

unsigned short Book::getNbPages() {
	return nbPages;

};

string Book::getTitleName() {
	return title;
}

string Book::getISBN() {
	return ISBN13;
}

//Setters
void Book::setSystemId(unsigned long long systemId) {
	Book::systemId = systemId;
};

void Book::setPublicationYear(short publicationYear) {
	Book::publicationYear = publicationYear;
};

void Book::setNbPages(unsigned short nbPages) {
	Book::nbPages = nbPages;
};

void Book::setTitleName(string title) {
	this->title = title;
}

void Book::setISBN(string ISBN) {
	this->ISBN13 = ISBN;
}


//Generic Methods
void Book::display() {
	
	cout << left << "System ID: " << getSystemId() << endl
		<< "Title : " << getTitleName() << endl
		<< "ISBN : " << getISBN() << endl
		<< "Year of publication: " << getPublicationYear() << endl
		<< "Number of Pages: " << getNbPages() << endl;
		
}