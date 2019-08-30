#include <iostream>
using namespace std;

int main() {
    // Enter your code here\
    double a, b, c ,d;

    cout << "Enter the price of the first pizza";
    cin >> a;
    cout << "Enter the price of the second pizza";
    cin >> b;
    cout << "Enter the area of the first pizza";
    cin >> c;
    cout << "Enter the area of the second pizza";
    cin >> d;
    compareTo(a, b, c, d);

    return 0;
}

void compareTo(double a, double b, double size, double size2) {
    if (a/size) > b/(size2) {
        cout << "The first pizza has a better cost per area";
    } else {
        cout << "The second pizza has a better cost per area";
    }
}