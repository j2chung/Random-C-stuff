/**
    filework.cpp
    Purpose: a worksheet to improve your skills with files, functions, objects
    and vectors.

    @author Joseph Chung
    @version 1.0 11/24/17
 */
#include <cstdlib>   // for exit()
#include <fstream>   // for file I/O
#include <iostream>  // for cout
#include <vector>    // for vectors
#include "helper.cpp" // worksheet helper, see 12.4.1
using namespace std;

/**
    Read a file of integers and returns the data via reference parameters.

    @param myInts The vector of integers to read into.
    @param fileName The name of the file to read from.
    @see: Lesson 12.1.2, Exercise 12.1
*/
void readInts(vector<int>& myInts, string fileName);


/**
    Read a file of strings and returns the data via reference parameters.

    @param myStrs The vector of integers to read into.
    @param fileName The name of the file to read from.
    @see: Lesson 12.1.2, 12.1.4
*/
void readStrs(vector<string>& myStrs, string fileName);



/**
    Read a file of strings with spaces and returns the data via reference
    parameters.

    @param myNames The vector of integers to read into.
    @param fileName The name of the file to read from.
    @see: Lesson 12.1.3
*/
void readNames(vector<string>& myNames, string fileName);



/**
    Opens the file and calls Product::read(ifstream&) in a while-loop
    to read all the product names and prices from the file, storing the
    data in the single vector<product> myProds.

    @param myProds The vector of integers to read into.
    @param fileName The name of the file to read from.
    @see: Lesson 12.3.5, Exercises 12.2, 12.3
*/
void readProds(vector<Product>& myProds, string fileName);


int main() {
    vector<int> myInts;
    vector<string> myStrs;
    vector<string> names;
    vector<Product> prods;
    setup(); // create files: ints.txt, strs.txt, names.txt, prods.txt

   //Remove comments as you develop functions.
    cout << "\n***Testing readInts***"<< endl;
    readInts(myInts, "ints.txt");
    cout << "readInts vector size should be 3: " << myInts.size() << endl;
    cout << "readInts0 should be 27: " << myInts[0] << endl;
    cout << "readInts1 should be 39: " << myInts[1] << endl;
    cout << "readInts2 should be 42: " << myInts[2] << endl;


   //Remove comments as you develop functions.
    cout << "\n***Testing readStrs***"<< endl;
    readStrs(myStrs, "strs.txt");
    cout << "readStrs vector size should be 3: " << myStrs.size() << endl;
    cout << "readStrs0 should be C++: " << myStrs[0] << endl;
    cout << "readStrs1 should be still: " << myStrs[1] << endl;
    cout << "readStrs2 should be rules: " << myStrs[2] << endl;


   //Remove comments as you develop functions.
    cout << "\n***Testing readNames***"<< endl;
    readNames(names, "names.txt");
    cout << "readNames vector size should be 4: " << names.size() << endl;
    cout << "readNames0 should be Sophie Engineer: " << names[0] << endl;
    cout << "readNames1 should be Emma Hacker: " << names[1] << endl;
    cout << "readNames2 should be John Q Public: " << names[2] << endl;
    const int IDX3 = 3;
    cout << "readNames3 should be Joe Schmoe: " << names[IDX3] << endl;


   //Remove comments as you develop functions.
    cout << "\n***Testing readProds***"<< endl;
    readProds(prods, "products.txt");
    cout << "readProds vector size should be 3: " << prods.size() << endl;
    cout << "readProds0 should be Milk @ 3.95: ";
    prods[0].print();
    cout << "readProds1 should be Fresh bread @ 2.99: ";
    prods[1].print();
    cout << "readProds2 should be Cheddar cheese @ 4.99: ";
    prods[2].print();


    cout << "\n***End of Tests***" << endl;
    return 0;
}

void readInts(vector<int>& myInts, string fileName) {
    int num;
    ifstream fin;
    fin.open(fileName.c_str());
        if (fin.fail()) {
        cout << "Input file failed to open.\n";
        exit(-1);
    }

    while (fin >> num) {
        myInts.push_back(num);

    }

    fin.close();
}

void readStrs(vector<string>& myStrs, string fileName) {
    string temp;
    ifstream fin;
    fin.open(fileName.c_str());
        if (fin.fail()) {
        cout << "Input file failed to open.\n";
        exit(-1);
    }

    while(fin >> temp) {
        myStrs.push_back(temp);
    }

    fin.close();
}

void readNames(vector<string>& myNames, string fileName) {
    string temp;
    ifstream fin;
    fin.open(fileName.c_str());
        if (fin.fail()) {
        cout << "Input file failed to open.\n";
        exit(-1);
    }

    while(getline(fin, temp)) {
        myNames.push_back(temp);
    }

    fin.close();
}

void readProds(vector<Product>& myProds, string fileName) {
    ifstream fin;
    fin.open(fileName.c_str());
        if (fin.fail()) {
        cout << "Input file failed to open.\n";
        exit(-1);
    }
    while (fin.good()) {
        Product list;
        list.read(fin);
        if (fin.good()) {
            myProds.push_back(list);
        }
    }
    fin.close();
}