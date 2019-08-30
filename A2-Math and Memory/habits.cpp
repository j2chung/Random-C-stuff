/**
    CS-11 Asn 2
    habits.cpp
    Purpose: Given the age and cost of daily habit, calculates how much the the habbit will cost in a year and how much it will cost until age 75

    @author Joseph Chung
    @version 1.0 9/12/17
*/

#include <iostream>
using namespace std;

int main() {
    double habitCost;
    int age;
    cout << "Your age:\n";
    cin >> age;
    cout << "Cost of daily habit:\n";
    cin >> habitCost;
    cout << "This year your habit will cost you $" << habitCost * 365 << "\n";
    cout <<"Between now and age 75, it will cost you $" << habitCost * 365 * (75 - age) << "!\n";
    cout << "Cost in millions of dollars is " << habitCost * 365 * (75 - age) * 0.000001 << "!\n";
    return 0;
}
