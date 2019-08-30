#include <fstream>
#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

class Product {
public:
    Product();
    Product(string newName, double newPrice);
    void print() const;
    void read(ifstream& fin);
private:
    string name;
    double price;
};

Product::Product() {
    name = "none";
    price = 0.0;
}

Product::Product(string newName, double newPrice) {
    name = newName;
    price = newPrice;
}

void Product::print() const {
    cout <<  name << " @ " << price << endl;
}

// Read product data from a file.
void readFile(vector<Product>& list, string filename);

// List the products in the store.
void listProducts(const vector<Product>& store);

// Write vector of objects to the file.
void writeFile(vector<Product>& store, string fileName);

int main() {
    vector<Product> list;
    int choice;
    do { // simple menu
        cout << "\nSelect an option:\n";
        cout << "0. Exist program.\n";
        cout << "1. Load data from file.\n";
        cout << "2. Print data in vector.\n";
        cout << "3. Write data to a file.\n";
        cout << "Choice: ";
        cin >> choice;
        if (choice == 1) {
            // readFile(list, "products2.txt");
        } else if (choice == 2) {
            listProducts(list);
        } else if (choice == 3) {
            // writeFile(list, "saved.txt");
        } else if (choice != 0) {
            cout << "Please enter a number from 0 - 3.\n";
        }
    } while (choice != 0);
    cout << "Goodbye.\n";

    return 0;
}

void listProducts(const vector<Product>& list) {
    for (unsigned i = 0; i < list.size(); i++) {
        Product temp = list[i];
        temp.print();
    }
}

void Product::read(ifstream& fin) {
    fin >> ws;
    fin >> name;
    fin >> price;
}

void readFile(vector<Product>& list, string filename) {
    ifstream fin;
    fin.open(filename.c_str());
        if(fin.fail()) {
            cout <<" it failed";
    // test if the stream failed to open
    // while the file stream is good
    while (fin.good()) {
        Product temp;
        temp.read(fin);
        if(fin.good()) {
            list.push_back(temp);
        }
    }
    fin.close();

        // construct a temporary object
        // call the read() function on the object
        // if no error during read()
            // then push onto back of vector
    // close the stream after the loop ends
}