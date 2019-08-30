#include <iostream>
#include <vector>
using namespace std;

void showNames(vector<string>& names) {
    for (unsigned i = 0; i <names.size(); i++) {
        cout << names [i] << endl;
    }
}

int main() {
    // Enter your code here
    vector<string> names(3);
    names[0] = "Able Ableson";
    names [1] = "Baker Bakerson";
    names [2] = "Charlie Charleston";
    names.push_back("Dogg Dogson");
    names.push_back("Catt Catterson");

    cout << "Enter a list of names\n"
         << "When finished enter the word: done\n";
    string input;
    do {
        getline(cin, input);
        if (input != "done") {
            names.push_back(input);
        }
    } while (input != "done");

    cout << "\nThe first name on the list is: " << names[0] << endl;
    cout << "The last name on the list is:  " << names[names.size() - 1]
    << "\n" << endl;

    showNames(names);



    return 0;
}
