#include <iostream>
using namespace std;

int main() {
    // Enter your code here
    int max = 0;
    cout << "This program writes lists of numbers.\n";
    cout << "Enter the maximum number: ";
    cin >> max;
    cout << "for loop:\n";
    for (int i = 1; i <= max; i++) {
        cout << i << endl;
    }

    return 0;
}
