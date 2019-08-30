/**
    CS-11 Asn 3, longestword.cpp
    Purpose: Improve string manipulation skills.

    @author Joseph Chung
    @version 1.0 9/20/17 1.0
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string longWord = "pseudopseudohypoparathyroidism";

    cout << "***Long Words Worksheet***\n";
    cout << "The length of " << longWord << " is ";
    cout << longWord.length();
    cout << "The first letter index is 0 and the last letter index is ";
    cout << longWord.length() - 1;
    cout << endl;
    cout << "The first character is ";
	cout << longWord.substr(0 , 1);
    cout << endl;
    cout << "The last character is ";
    cout << longWord.substr(longWord.length() - 1, 1);
    cout << endl;
    cout << "Four or more words contained inside " << longWord << " are:\n";
    // Print 4 words using substr(index, numChars)
	cout << longWord.substr(20, 7) << endl;
	cout << longWord.substr(0, 6) << endl;
	cout << longWord.substr(12, 4) << endl;
	cout << longWord.substr(longWord.length() - 7, 4) << endl;
	cout << longWord.substr(16, 4) << endl;
    return 0;
}