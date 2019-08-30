#include <iostream>
#include <fstream>   // for file I/O
#include <cstdlib>   // for exit()
using namespace std;

void readFile(string filename){
    while (fin.good()) {
        string name;
        double price;
        fin >> ws; // clear whitespace including newlines
        getline(fin, name);
        fin >> price;
        if (fin.good()) { // verify not end-of-file
            cout << name << " @ " << price << endl;
        }
}
}

int main() {
    // Enter code here
    readFile("products.txt");

    return 0;
}