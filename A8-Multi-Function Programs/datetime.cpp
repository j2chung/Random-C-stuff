/**
    CS-11 Asn 8, datetime.cpp
    Purpose: Date and time conversions.

    @author Joseph Chung
    @version 1.0 10/25/16
*/


#include <iostream>
using namespace std;

void formatDateMDY(int month, int day, int year, char dateSep) {
    cout << month << dateSep << day << dateSep << year << endl;
}

void formatDateDMY(int day, int month, int year, char dateSep) {
    cout << day << dateSep << month << dateSep << year << endl;
}

void formatDateYMD(int year, int month, int day, char dateSep) {
    cout << year << dateSep << month << dateSep << day << endl;
}



void formatTime12(int hour, int minute, bool am) {
    cout << hour << ":" << minute;

    if(am == true) {
        cout << "pm";
    } else {
        cout << "am";
    }
}

void formatTime24(int hour, int minute, bool am) {
     const int HOUR_ADD = 12;
     int nhour = hour;
     if (am == true) {
     nhour += HOUR_ADD;
     }

     cout << nhour << ":" << minute;
}


int main() {

    int year;
    int month;
    int day;
    char dateSep;
    int hour;
    int minute;
    string pm;
    bool am = true;

    cout << "Welcome! This program will print dates and times" << endl;
    cout << "in a variety of world-wide styles!" << endl;
    cout << "\nPlease enter the current year: ";
    cin >> year;
    cout << "Please enter the current month: ";
    cin >> month;
    cout << "Please enter the current day: ";
    cin >> day;
    cout << "Please enter a single character separator: ";
    cin >> dateSep;
    cout << "\nPlease enter the current hour: ";
    cin >> hour;
    cout <<"Please enter the current minutes: ";
    cin >> minute;
    cout << "Please enter whether it is \"morning\" or \"afternoon\": ";
    cin >> pm;
    cout << endl;

    if (pm == "Afternoon" || "afternoon") {
        am = true;
    } else {
        am = false;
    }

    cout << "Date in MDY style: ";
    formatDateMDY(month, day, year, dateSep);

    cout << "Date in DMY style: ";
    formatDateDMY(day, month, year, dateSep);

    cout << "Date in YMD style: ";
    formatDateYMD(year, month, day, dateSep);

    cout << "\nTime in the 12-hour clock style: ";
    formatTime12(hour, minute, am);

    cout << "\nTime in the 24-hour clock style: ";
    formatTime24(hour, minute, am);

    cout << endl;
    cout << "\nBye! See you another day!";

}


