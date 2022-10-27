#include<iostream>
using namespace std;

int main() {

    //Internal Data
    int gryffindor{ 0 };
    int hufflepuff{ 0 };
    int ravenclaw{ 0 };
    int slytherin{ 0 };

    int answer1{ 0 };
    int answer2{ 0 };
    int answer3{ 0 };
    int answer4{ 0 };

    //Starting the quizz
    cout << "The Sorting Hat Quiz!" << endl;

    // Starting the questions
    // Question 1
    cout << "Q1) When I'm dead, I want people to remember me as: " << endl << "1) The Good" << endl << "2) The Great" << endl << "3) The Wise" << endl << "4) The Bold" << endl << "A:";
    cin >> answer1;

    if (answer1 == 1) {
        hufflepuff++;
    }
    else if (answer1 == 2) {
        slytherin++;
    }
    else if (answer1 == 3) {
        ravenclaw++;
    }
    else if (answer1 == 4) {
        gryffindor++;
    }
    else {
        cout << "Invalid input.";
    }

    //Question 2
    cout << "Q2)Dawn or Dusk? " << endl << "1) Dawn" << endl << "2) Dusk" << endl << "A:";
    cin >> answer2;

    if (answer1 == 1) {
        gryffindor++;
        ravenclaw++;
    }
    else if (answer1 == 2) {
        slytherin++;
        hufflepuff++;
    }
    else {
        cout << "Invalid input.";
    }

    //Question 3
    cout << "Q3)Which kind of instrument most pleases your ear? " << endl << "1) The violin" << endl << "2) The trumpet" << endl << "3) The piano" << endl << "4) The drum" << endl << "A:";
    cin >> answer3;

    if (answer1 == 1) {
        slytherin++;
    }
    else if (answer1 == 2) {
        hufflepuff++;
    }
    else if (answer1 == 3) {
        ravenclaw++;
    }
    else if (answer1 == 4) {
        gryffindor++;
    }
    else {
        cout << "Invalid input.";
    }

    //Question 4
    cout << "Which road tempts you most? " << endl << "1) The wide, sunny grassy lane" << endl << "2) The narrow, dark, lantern-lit alley" << endl << "3) The twisting,leaf-strewn path through woods" << endl << "4) The cobbled street lined (ancient buildings)" << endl << "A:";
    cin >> answer4;

    if (answer1 == 1) {
        hufflepuff++;
    }
    else if (answer1 == 2) {
        slytherin++;
    }
    else if (answer1 == 3) {
        gryffindor++;
    }
    else if (answer1 == 4) {
        ravenclaw++;
    }
    else {
        cout << "Invalid input.";
    }

    //Calcultion of points

    int max{ 0 };
    string house;

    if (gryffindor > max) {
        max = gryffindor;
        house = "Gryffindor";
    }
    if (hufflepuff > max) {
        max = hufflepuff;
        house = "hufflepuff";
    }
    if (ravenclaw > max) {
        max = ravenclaw;
        house = "ravenclaw";
    }
    if (slytherin > max) {
        max = slytherin;
        house = "slytherin";
    }

    cout << "A decision was made, you belong to " << house << "!\n";
}