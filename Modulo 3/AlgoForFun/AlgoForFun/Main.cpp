#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Vectors with numbers names/
vector<string> ones{ "","one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
vector<string> teens{ "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen","sixteen", "seventeen", "eighteen", "nineteen" };
vector<string> tens{ "", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };


// Spliting numbers to access the index position of the correspondent number.
string nameForNumber(long number) {
    if (number < 10) {
        return ones[number];
    }
    else if (number < 20) {
        return teens[number - 10];
    }
    else if (number < 100) {
        return tens[number / 10] + ((number % 10 != 0) ? " " + nameForNumber(number % 10) : "");
    }
    else if (number < 1000) {
        return nameForNumber(number / 100) + " hundred" + ((number % 100 != 0) ? " " + nameForNumber(number % 100) : "");
    }
    else if (number < 1000000) {
        return nameForNumber(number / 1000) + " thousand" + ((number % 1000 != 0) ? " " + nameForNumber(number % 1000) : "");
    }
    else if (number < 1000000000) {
        return nameForNumber(number / 1000000) + " million" + ((number % 1000000 != 0) ? " " + nameForNumber(number % 1000000) : "");
    }
    else if (number < 1000000000000) {
        return nameForNumber(number / 1000000000) + " billion" + ((number % 1000000000 != 0) ? " " + nameForNumber(number % 1000000000) : "");
    }
    return "error";
}

// Number Validation 
long numberValidation() {

    long value;
    cin >> value;

    while (cin.fail() || cin.peek() != '\n' || value <= 0) {
        cin.clear(); // change the fail state.
        cin.ignore(512, '\n'); // clear the buffer
        cout << "Warning !! You need to enter a valid data : ";
        cin >> value;
    }

    cin.ignore(512, '\n');

    return value;

}


// Printing 
int main(){
    long input;

    do {
        cout << "Enter a Positive number : ";
        input = numberValidation();
        cout << "\n" << nameForNumber(input) << endl;
    } while (input > 0);

    return 0;
}