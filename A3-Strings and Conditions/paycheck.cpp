/**
    CS-11 Asn 3, paycheck.cpp
    Purpose: Calculates the pay of an employee given the hourly rate and wage.

    @author Joseph Chung
    @version 1.0 9/20/17 1.0
*/

#include <iostream>
using namespace std;

int main() {
	string fn;
	string ln;
	float hrRate;
	float hrLstWk;
	float oPay;

	cout << "Enter your first name and last name: ";
	cin >> fn >> ln;
	cout << endl << "Enter your hourly rate: ";
	cin >> hrRate;
	cout << "Enter the number of hours you worked last week: ";
	cin >> hrLstWk;

	if( hrLstWk < 40){
		oPay = 0;
	} else {
		oPay = (hrLstWk - 40) * hrRate * 1.5;
	}

	cout << "+----------------------------------------+" << endl
	<< "\n" << " Pay Stub" << "\n";
	cout << " Regular pay  $" << hrRate * hrLstWk << endl;
	cout << " Overtime pay $" << oPay << endl;
	cout << " Gross pay    $" << hrRate * hrLstWk + oPay << endl;
	cout << " Social Sec.  $" << (hrRate * hrLstWk + oPay) * 0.062 << endl;
	cout << " Medicare     $" << (hrRate * hrLstWk + oPay) *0.0145 << endl;
	cout << " Net pay      $"
	<< (hrRate * hrLstWk + oPay) - ((hrRate * hrLstWk + oPay) * (0.062 + 0.0145))
	<< endl << "\n";
	cout << "+----------------------------------------+" << endl
	<< "\n" << " Pay to:  " << fn << " " << ln << endl;
	cout << " Amount of:  $"
	<< (hrRate * hrLstWk + oPay) - ((hrRate * hrLstWk + oPay) * (0.062 + 0.0145)) << endl;
	cout << "                 Signed: Mega Corp" << endl
	<< "\n";
	cout << "+----------------------------------------+" << endl;

	return 0;
}



