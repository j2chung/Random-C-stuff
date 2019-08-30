#include <iostream>
using namespace std;

    int main(){
        int var;

        cout << "Enter a positive number for the ending loop count: ";
        cin >> var;

        for(int x = 1 ; x <= var; x++) {
            if (x % 7 == 0 && x % 5 == 0) {
                cout << "Had a great fall" <<endl;
            } else if (x % 5 == 0) {
                cout << "Humpty" << endl;
            } else if (x % 7 == 0) {
                cout << "Dumpty" << endl;
            } else {
                cout << x << endl;
            }
        }

        return 0;

    }
