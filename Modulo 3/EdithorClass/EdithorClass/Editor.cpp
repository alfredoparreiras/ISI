#include"Editor.h"


void Editor::setPublisherName(string publisherName) {
	if (publisherName.length() < 75) {
		Editor::publisherName = publisherName;
	}
	else {
		cout << "Please, insert a publisher name with less then 75 characters.";
	}
}

string Editor::getPublisherName() {
	return Editor::publisherName;
}

void Editor::displayData() {

	cout << Editor::publisherName;
}