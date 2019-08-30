#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Enter your code here

    srand(time(0));

    for(int i = 0; i < 10; i++) {
        int die1 = 1 + rand() % 6;
        int die2 = 1 + rand() % 6;
        cout << "You rolled a " << die1
        << " and a " << die2 << endl;
    }

    return 0;

}
