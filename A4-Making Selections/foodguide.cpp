#include <iostream>
using namespace std;

int main() {
    cout << "Enter the temperture in degrees fahrenheit: ";
    int temp = 0;
    cin >> temp;
    cout << "Are you hungry? (y/n): ";
    char answer = 'n';
    cin >> answer;
    // Enter your code here
    bool hungry = (answer == 'y');

	if (hungry && temp >= 100){
		cout << "Eat ice cream\n";
	} else if (hungry && temp <= 0){
		cout << "Eat spicy good \n";
	}else if (!hungry) {
		cout << "Donot eat anything\n";
	}else {
		cout << "Eat favorite food\n";
	}

    return 0;
}