#include <iostream>
using namespace std;

int main() {
    // Enter your code here
	string word;
	int count = 0;
	while (cin >> word) {
	    // Add if statements here
	    if (word == "Shazam") {
		    cout << "Shazam is word " << count << endl;
		}
	}
    return 0;
}