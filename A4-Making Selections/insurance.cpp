#include <iostream>
using namespace std;

int main() {
    cout << "Enter marital status (s=single, m=married): ";
    string maritalStatus;
    cin >> maritalStatus;
    cout << "Enter your age in years: ";
    int age;
    cin >> age;

        // Enter your code here

    int premium = 0;
    if (maritalStatus == "m") {
        // code if married

            if (age < 21) {
                premium = 1200;
            } else if (age <= 29) {
                premium = 1000;
            } else {
                premium = 800;
        }

    } else {
        // code if single

        if (age < 21) {
            premium = 1500;
        } else if (age <= 29) {
            premium = 1200;
        } else {
            premium = 1000;
        }
    }

    cout << "Premium is " << premium;

    return 0;
}
