#include <iostream>
using namespace std;

int main() {
    string firstName, lastName, fullName, initials;
    cout << "First name: \n";
    cin >> firstName;
    cout << "Last name: \n";
    cin >> lastName;
    fullName = firstName + " " + lastName;
    cout << "Full Name: " << fullName << "!\n";
    cout << "Welcome \"" << fullName << "\"!\n";

    initials = firstName.substr(0, 1)
        + lastName.substr(0, 1);
    cout << "Your initials: " << initials << "\n";
    return 0;
}


