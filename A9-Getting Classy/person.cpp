/**
    CS-11 Asn 9, person.cpp
    Purpose: Lists out names and income.

    @author Joseph Chung
    @version 1.0 11/1/17
*/

#include <iostream>
#include <iomanip>
using namespace std;

const int NAME_WIDTH = 18;
const int AGE_WIDTH = 6;
const int INCOME_WIDTH = 11;

class Person {

    public:

        /**
            Creates an object, person.

        */

        Person();

        /**
            Creates an object, person.

            @param newName Name of the person.
            @param newAge Age of the person.
            @param newIncome Income of the person.
        */

        Person(string n, int a, double i);

        /**
            Returns the name of the person.

            @return name of the person.
        */

        string getName() const;

        /**
            Returns the age of the person.

            @return age of the person.
        */

        int getAge() const;

        /**
            Returns the income of the person.

            @return income of the person.
        */

        double getIncome() const;

        /**
            Sets the name of the person.

            @param newName Name of the person.
        */

        void setName(string newName);

        /**
            Sets the age of the person.

            @param newAge Age of the person.
        */

        void setAge(int newAge);

        /**
            Sets the income of the person.

            @param newIncome Income of the person.
        */

        void setIncome(double newIncome);

        /**
            Prints the name, age and income.

        */

        void print() const;

    private:
        string name;
        int age;
        double income;

};

// Controls operation of the program.
int main() {

    Person ed("Ed Parrish", 42, 72470.42);
    Person emma("Emma Hacker", 24, 71916.24);
    Person john("John Q Public", 37, 55775.37);

    cout << "Person of Intrest:" << endl;
    cout << setw(NAME_WIDTH) << left << "Name"
    << setw(AGE_WIDTH) << left << "Age"
    << setw(INCOME_WIDTH) << left << "Income"
    << endl;

    ed.print();
    emma.print();
    john.print();

    return 0;

}

Person::Person() {
    age = 0;
    income = 0;
}

Person::Person(string n, int a, double i) {
    name = n;
    age = a;
    income = i;
}

string Person::getName() const{
    return name;
}

int Person::getAge() const{
    return age;
}

double Person::getIncome() const{
    return income;
}

void Person::setName(string newName) {
    name = newName;
}

void Person::setAge(int newAge) {
    age = newAge;
}

void Person::setIncome(double newIncome) {
    income = newIncome;
}

void Person::print() const{
    cout << setw(NAME_WIDTH) << left << name
    << setw(AGE_WIDTH) << left << age
    << setw(INCOME_WIDTH) << left << income
    << endl;
}
