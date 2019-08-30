/**
    CS-11 Asn 2
    nibble2dec.cpp
    Purpose: Converts binary number (max 4 digits) to decimal.

    @author Joseph Chung
    @version 1.0 9/14/17
*/

#include <iostream>
using namespace std;

int main() {
	int binaryNumber;
	int fstDigit;
	int secDigit;
	int thrdDigit;
	int frthDigit;
	cout << "Enter a binary number between 0 and 1111: ";
	cin >> binaryNumber;
	fstDigit = (binaryNumber%10) * 1;
	secDigit = (binaryNumber/10)%10 * 2;
	thrdDigit = (((binaryNumber/10)/10)%10) * 4;
	frthDigit = ((((binaryNumber/10)/10)/10)%10) * 8;
	cout << "The decimal equivalent is: " << fstDigit + secDigit + thrdDigit + frthDigit;
	return 0;
}