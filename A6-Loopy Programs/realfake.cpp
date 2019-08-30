/**
    CS-11 Asn 6, loopychars.cpp
    Purpose: Real or fake news.

    @author Joseph Chung
    @version 1.0 10/11/17
*/

#include <iostream>
using namespace std;

	int main() {
		string key;

		while (cin >> key) {
			if (key == "(CNN)" || key == "(USAToday)") {
				cout << "real";
			} else if ( key == "(NationalReport)" || key == "(BeforeItsNews)" || key == "(EmpireNews)") {
				cout << "fake";
			}
		}

		return 0;
	}