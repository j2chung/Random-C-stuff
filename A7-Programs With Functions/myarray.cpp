/*
Linear Search Algorithm
... write the algorithm here
- declare array and array length
array[length]
- declare the value you want to find with user input
cin >> value
- loop the whole array with the for loop
for (i = 0; i<=length; i++)
- use an if statement to find the value of the element that corresponds with your value
if (array[i] == value)
- if no such value exists say that it was not found
cout << not found
*/

#include <iostream>
using namespace std;

    int main() {

        const int LENGTH = 5;
        double total = 0;
        double temp[LENGTH] = {1.0,2.0,3.0,4.0,5.0};

        for (int i = 0; i < LENGTH; i++) {
            cout << temp[i] << endl;
            total += temp[i];
        }

        cout << total << endl;

        return 0;

    }
