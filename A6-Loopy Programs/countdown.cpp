#include <iostream>
using namespace std;

int main() {
    // Enter your code here
    cout << "\nNASA Mission Control readying for liftoff\n";
    cout << "NASA Mission Control readying for liftoff.\n";
    cout <<  "Initializing countdown from 10...\n";

    for (int countdown = 10; countdown >= 0; countdown--) {
        // countdown statements here
        cout << countdown;
        cout << endl;
    }
    cout << endl;
    cout << "We have liftoff!";

    return 0;
}
