#include <iostream>
using namespace std;

//Function definition goes here
void printsquares(int x) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}


int main() {
    int length = 1;

    while (length > 0) {
        cout << "\nI will print squares for you!\n";
        cout << "Enter the length of a side (-1 to quit): ";
        cin >> length;
        //code to call function
        printsquares(length);
    }
    cout << "Thanks for \"squaring\" with me!" << endl;

    return 0;
}
