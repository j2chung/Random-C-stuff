/**
    dCS-11 Asn 12, contactfile.cpp
    Purpose: Lists out names and income and does other functions.

    @author Joseph Chung
    @version 1.0 11/24/17
*/

#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
#include <cstdlib>
using namespace std;

const int NAME_WIDTH = 18;
const int AGE_WIDTH = 6;
const int INCOME_WIDTH = 11;
const int DECIMAL = 2;
const int TWO = 2;
const int THREE = 3;
const int FOUR = 4;
const int FIVE = 5;

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
            Outputs income, age and name.

        */

        void read();

        /**
            Loads information about this Person from the file stream.

            @param fin A file input stream connected to the files with the
            data to load.
        */

        void read(ifstream& fin);

        /**
            Writes information about this Person to the file stream.

            @param fout A file output stream connected to the file in
            which to save the data.
        */

        void write(ofstream& fout) const;

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

/**
    Writes contact data to an output file.

    @param list The vector of Person objects.
    @param fileName The name of the file to which to write.
*/

void saveData(const vector<Person>& list, string fileName);

/**
    Loads all contact data from the specified file name and
    returns the data in a vector of Person objects.

    @param list The list of contacts read from the file.
    @param fileName The name of the file from which to read.
*/

void loadData(vector<Person>& contact, string fileName);


/**
    Adds new contact.

    @param contact The vector where the contact is located

*/

void addContact(vector<Person>& contact);

/**
    removes contact.

    @param contact The vector where the contact is located

*/
void removeContact(vector<Person>& contact);

/**
    Sorts contact by age.

    @param contact The vector where the contact is located

*/
void byAge(vector<Person>& contact);

// Controls operation of the program.
int main() {
    const int SIZE = 0;
    int key = 0;
    int choice;
    string name;
    double income;
    int del;

    vector<Person> contact (SIZE);
    //contact[0] = Person ("Sophie Engineer", 42, 102280.00);
    //contact[1] = Person ("Emma Hacker", 24, 71916.24);
    //contact[2] = Person ("John Q Public", 37, 55775.37);

    loadData(contact, "contacts.txt");
    saveData(contact, "list.txt");

    while (key == 0) {
        cout << "Please choose one of the following operations: " << endl;
        cout << "0. Exit program" << endl;
        cout << "1. List contacts" << endl;
        cout << "2. Add a contact" << endl;
        cout << "3. Delete a contact" << endl;
        cout << "4. Change contact income" << endl;
        cout << "5. List by age range" << endl;
        cout << "Choice (0-5): ";
        cin >> choice;
        cout << "\n";
        cin.ignore();

        if (choice == 0) {
            exit(-1);
        } else if (choice == 1) {

            cout << "Contact list:" << endl;
            cout << setw(NAME_WIDTH) << left << " # Name"
            << setw(AGE_WIDTH) << left << "Age"
            << setw(INCOME_WIDTH) << left << "Income"
            << endl;

            for (unsigned i = 0; i < contact.size(); i++) {
                cout << " " << i + 1 << " ";
                contact[i].print();
            }
            cout <<endl;

        } else if( choice == TWO) {

            addContact(contact);
            cout << endl;

        } else if ( choice == THREE) {

            removeContact(contact);\
            cout << endl;

        } else if (choice == FOUR) {
            cout << "Change income for a contact:" << endl;
            cout << "Contact list:" << endl;
            cout << setw(NAME_WIDTH) << left << " # Name"
            << setw(AGE_WIDTH) << left << "Age"
            << setw(INCOME_WIDTH) << left << "Income"
            << endl;
            for (unsigned i = 0; i < contact.size(); i++) {
                cout << " " << i + 1 << " ";
                contact[i].print();
            }
            cout << "Enter the number of the contact: ";
            cin >> del;
            cout << "Enter the new income: ";
            cin >> income;
            contact[del - 1].setIncome(income);
            cout << endl;

        } else if (choice == FIVE) {

            byAge(contact);
        }
    }

    return 0;

}

void byAge(vector<Person>& contact) {
    int min;
    int max;
    int test;

    cout << "Searching by Age" << endl;
    cout << "Enter the minimum age: ";
    cin >> min;
    cout << "Enter the maximum age: ";
    cin >> max;

    cout << "Contact list:" << endl;
    cout << setw(NAME_WIDTH) << left << "Name"
    << setw(AGE_WIDTH) << left << "Age"
    << setw(INCOME_WIDTH) << left << "Income"
    << endl;

    for(unsigned i = 0; i < contact.size() - 1; i++) {
        test = contact[i].getAge();
        if (test >= min && test <= max) {
            contact[i].print();
        }
    }
    cout << endl;
}

void addContact(vector<Person>& contact) {
    string name;
    int age;
    double income;

    cout << "Adding a new contact:" << endl;
    cout << "Enter the name of the person: ";
    getline(cin, name);
    cout << "Enter the age for "<< name << ": ";
    cin >> age;
    cout << "Enter the income for " << name << ": ";
    cin >> income;
    contact.push_back(Person());
    contact[contact.size() - 1] = Person (name, age, income);
}

void removeContact(vector<Person>& contact) {

    int del;

    cout << "Deleting a contact:" << endl;
    cout << "Contact list:" << endl;
    cout << setw(NAME_WIDTH) << left << " # Name"
    << setw(AGE_WIDTH) << left << "Age"
    << setw(INCOME_WIDTH) << left << "Income"
    << endl;
    for (unsigned i = 0; i < contact.size(); i++) {
        cout << " " << i + 1 << " ";
        contact[i].print();
    }
    cout << "Enter the number of the contact: ";
    cin >> del;
    for (unsigned i = del; i < contact.size(); i++) {
        contact[i - 1] = contact[i];
    }
    contact.pop_back();
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

void Person::read(ifstream& fin){
    fin >> ws;
    getline(fin, name);
    fin >> age;
    fin >> income;
}

void loadData(vector<Person>& contact, string fileName) {
    ifstream fin;
    fin.open(fileName.c_str());
        if (fin.fail()) {
        cout << "Input file failed to open.\n";
        exit(-1);
    }
    while (fin.good()) {
        Person list;
        list.read(fin);
        if (fin.good()) {
            contact.push_back(list);
        }
    }
    fin.close();
}

void saveData(const vector<Person>& contact, string fileName) {
    ofstream fout;
    fout.open(fileName.c_str());
    if (fout.fail()) {
        cout << "Output file failed to open. \n";
        exit(-1);
    }
    for (unsigned i = 0; i < contact.size(); i++)
        {
            contact[i].write(fout);
    }
    fout.close();
}

void Person::write(ofstream& fout) const{
    fout << name << endl;
    fout << "\n";
    fout << age << endl;
    fout << "\n";
    fout << income << endl;
    fout << "\n";
}

void Person::read() {
    cout << "Enter the name of the person: ";
    getline(cin, name);
    cout << "Enter the age for "<< name << ": ";
    cin >> age;
    cout << "Enter the income for " << name << ": ";
    cin >> income;
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
    << setw(INCOME_WIDTH) << left << setprecision(2) <<
    fixed << income
    << endl;
}
