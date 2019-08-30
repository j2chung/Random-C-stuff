/**
    CS-11 Asn 2
    clock.cpp
    Purpose: Calculates the elapsed time given the current time.

    @author Joseph Chung
    @version 1.0 9/13/17
*/

#include <iostream>
using namespace std;


int main(){
	int curClkHrs;
	int curClkMin;
	int elClkHrs;
	int elClkMin;
	cout << "Enter the clock hours: \n";
	cin >> curClkHrs;
	cout << "Enter the clock minutes: \n";
	cin >> curClkMin;
	cout << "Current time is " << curClkHrs << ":" << curClkMin << "\n";
	cout << "Enter the elapsed hours: \n";
	cin >> elClkHrs;
	cout << "Enter the elapsed minutes: \n";
	cin >> elClkMin;
	cout << "New time is " << (curClkHrs + elClkHrs)%12 << ":" << (curClkMin + elClkMin)%60 << "\n";
	return 0;
}
