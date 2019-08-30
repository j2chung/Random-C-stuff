#include <iostream>
#include <climits>
using namespace std;

int main() {
    // Enter your code here
    double sumScores = 0;
    double nextScore = 0;
    int count = 0;

    do {
        count ++;
        cout << "Enter score #" << count << ": ";
        cin >> nextScore;

        if (cin.fail()) {
            cout << "Error: please enter a number: ";
            cin.clear();
            cin.ignore(INT_MAX, '\n');
        } else if (nextScore >= 0) {
            sumScores += nextScore;
        }

    } while (nextScore >= 0);

    cout << "Sum of Scores: " << sumScores << endl;

    return 0;
}
