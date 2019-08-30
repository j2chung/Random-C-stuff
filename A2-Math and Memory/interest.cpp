/**
    CS-11 Asn 2, interest.cpp
    Purpose: Improve math and variable skills.

    @author Joseph Chung
    @version 1.0 9/14/17
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double principal, rate;
    int term, numPeriods;

    cout << "***Interest Worksheet***\n";
    cout << "Principal amount: ";
    cin >> principal;
    cout << "Percent interest rate: ";
    cin >> rate;
    cout << "Length of term (years): ";
    cin >> term;
    cout << "Number of compounding periods: ";
    cin >> numPeriods;
    cout << endl;
    // convert rate from percent to decimal

    cout << "Simple interest is ";
    // output simple interest here
    cout << principal*(rate*0.01)*term;
    cout << endl;

    cout << "Compounded interest is ";
    // output compound interest here
    cout << principal * pow((1 + (rate*0.01)/numPeriods), term * numPeriods) - principal;
    cout << endl;

    cout << "Continuously compounded interest is ";
    // output continuously compounded interest here
    cout << principal * exp((rate*0.01) * term) - principal;
    cout << endl;

    return 0;
}