/**
    CS-11 Asn 4, icecream.cpp
    Purpose: Choose the flavor and order your icecream.

    @author Joseph Chung
    @version 1.0 9/27/17
*/

#include <iostream>
using namespace std;
    int main() {
		string order;
		string yn;
		bool repeat = true;
		bool failsafe;

		while (repeat == true) {
			failsafe = true;
			cout << "Welcome to the Really Cool Ice Creamery!"
			<< endl;
			cout << endl;
			cout << "Enter the ice cream order code: ";
			cin >> order;

			if (order.substr(0, 2) == "CH") {
				cout << order.substr(2, order.length() - 1) << " ";
				cout << "Chocolate";
				failsafe = false;
			} else if (order.substr(0, 2) == "CC") {
				cout << order.substr(2, order.length() - 1) << " ";
				cout << "Chocolate Chocolate Chip";
				failsafe = false;
			} else if (order.substr(0, 2) == "CM") {
				cout << order.substr(2, order.length() - 1) << " ";
				cout << "Chocolate Mint";
				failsafe = false;
			} else if (order.substr(0, 2) == "HC") {
				cout << order.substr(2, order.length() - 1) << " ";
				cout << "Horchata";
				failsafe = false;
			} else if (order.substr(0, 2) == "MC") {
				cout << order.substr(2, order.length() - 1) << " ";
				cout << "Mocha Chip";
				failsafe = false;
			} else if (order.substr(0, 2) == "RR") {
				cout << order.substr(2, order.length() - 1) << " ";
				cout << "Rocky Road";
				failsafe = false;
			} else if (order.substr(0, 2) == "SB") {
				cout << order.substr(2, order.length() - 1) << " ";
				cout << "Strawberry";
				failsafe = false;
			} else if (order.substr(0, 2) == "VB") {
				cout << order.substr(2, order.length() - 1) << " ";
				cout << "Vanilla Bean";
				failsafe = false;
			}

			if (failsafe == true) {
				cout << "We don't have that flavor.";
			}

			cout << endl;
			cout << "Another order? (y/n) ";
			cin >> yn;

			if (yn == "y") {
				repeat = true;
			} else {
				repeat = false;
			}

			cout << endl;
		}
		cout << "Your ice cream order will be right up!";

		return 0;
	}