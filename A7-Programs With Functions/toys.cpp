/**
    CS-11 Asn 7, toys.cpp
    Purpose: Counts toys and money

    @author Joseph Chung
    @version 1.0 10/19/2017
*/

#include <iostream>
using namespace std;


    double numtoys(double x);


    int main() {
        double iVal; //initial value
        double copy;
        double price[] = {1.99, 2.49, 3.98, 4.99, 5.49, 6.98, 7.99, 10.75};
        cout << "Enter the amount of money to spend: ";
        cin >> iVal;
        int toys = numtoys(iVal);

        for (int i = 0; i < 8; i++) {
            copy = iVal;
            iVal = iVal - price[i];
            if (iVal < 0) {
                iVal = copy;
            }
        }
        cout << "Number of toys: " << toys << endl;
        cout << "Money remaining: " << iVal << endl;
        return 0;
    }

    double numtoys(double x) {
        double price[] = {1.99, 2.49, 3.98, 4.99, 5.49, 6.98, 7.99, 10.75};
        double toys;
        double a = x;

        for (int i = 0; i < 8; i++) {
            toys = i;
            a = a - price[i];
            if (a < 0) {
                toys = toys - 2;
            }
        }
        return toys;
    }
