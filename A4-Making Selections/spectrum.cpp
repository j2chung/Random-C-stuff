/**
    CS-11 Asn 4, spectrum.cpp
    Purpose: Identifying the Electromagnetic Spectrum

    @author Joseph Chung
    @version 1.0 9/27/17
*/

#include <iostream>
#include <cmath>
using namespace std;
    int main() {
		bool repeat = true;
		string str;
		double WL;
		const double RW = pow(10, -1);
		const double MW = pow(10, -3);
		const double IR = 7 * pow(10, -7);
		const double VL = 4 * pow(10, -7);
		const double UV = pow(10, -8);
		const double XR = pow(10, -11);

		while (repeat == true){
			cout << "Enter a wavelength and I will report the band of \n";
			cout << "the electromagnetic spectrum." << endl;
			cout << endl;
			cout << "Enter a wavelength in meters: ";
			cin >> WL;

			if (WL >= RW) {
				cout << "Radio wave";
			} else if (WL < RW && WL >= MW) {
				cout << "Microwaves";
			} else if (WL < MW && WL >= IR) {
				cout << "Infared";
			} else if (WL < IR && WL >= VL) {
				cout << "Visible light";
			} else if (WL < VL && WL >= UV) {
				cout << "Ultraviolet";
			} else if (WL < UV && WL >= XR) {
				cout << "X-rays";
			} else {
				cout << "Gamma rays";
			}

			cout << endl;
			cout << "Run again? (y/n) ";
			cin >> str;

			if (str == "y") {
				repeat = true;
			} else {
				repeat = false;
			}

			cout << endl;

		}

		return 0;
	}