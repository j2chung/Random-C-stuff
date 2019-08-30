#include <iostream>
using namespace std;

// Define function here
void fillCup(double& cup, string& sweetener) {
    cup = 10;
    sweetener = "sugar";
    cout << "Coffee amount: " << cup << " oz.\n";
    cout << "Sweetener: " << sweetener << endl;
}

int main() {
        double cup = 0;
        string sweetener;
        fillCup(cup, sweetener);
        if (cup == 0) {
            cout << "Where's my coffee?\n";
        } else {
            cout << cup << "oz. coffee and " << sweetener << " too!\n";
            cout << "Time to shine!\n";
    }

    return 0;
}
