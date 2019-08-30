/**
    CS-11 Asn 6, loopychars.cpp
    Purpose: Loops and characters.

    @author Your Name
    @version 1.0 Date Completed
*/
#include <iostream>
using namespace std;

int main() {
    int n; // the integer number
    char ch; // the single character
    cout << "** Loopy Characters!**\n\n";
    cout << "Enter an integer between 1 and 20: ";
    cin >> n;
    cout << "Enter a single character: ";
    cin >> ch;
    cout << endl;

    // Repeating the char n times with a for-loop.
    cout << "#1. Printing " << ch << " " << n << " times:\n";
    // Put your code here
    for (int i = 1; i <= n; i++) {
		cout << ch;
	}
    cout << endl << endl;

    // Printing starting with char and the following n ASCII chars.
    cout << "#2. Printing starting with " << ch << " and the following " << n - 1
         << " ASCII characters:\n";
    // Put your code here
    for (int i = 0; i < n; i++) {
		cout << (char)(ch + i);
	}
    cout << endl << endl;

    // Repeating the char n times with stars on odd indexes.
    cout << "#3. Printing " << ch << " character " << n
         << " times substituting '*' on odd indexes:\n";
    // Put your code here
    for (int i = 0; i < n; i++) {
		if (i % 2 != 0) {
			cout << "*";
		} else {
			cout << ch;
		}
	}
    cout << endl << endl;

    // Repeating the character n times with tick marks (+) every 5 chars
    cout << "#4. Printing " << ch << " character " << n
         << " times substituting (+) every fifth character:\n";
    // Put your code here
    for (int i = 1; i <= n; i++) {
		if (i % 5 == 0) {
			cout << "+";
		} else {
			cout << ch;
		}
	}
    cout << endl << endl;

    cout << "#5. Printing " << n << " lines of the previous loop:\n";
    // Hint: put your for-loop from the previous challenge inside another
    // for-loop that has a different counting variable.
    // Put your code here
    for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= n; j++) {
			if (j % 5 == 0) {
				cout << "+";
			} else {
				cout << ch;
			}
		}
		cout << endl;
	}




    return 0;
}