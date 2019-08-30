/**
    helper.cpp
    Purpose: worksheet helper file for reading and writing files.
    DO NOT CHANGE ANY CODE IN THIS FILE.

    @author Ed Parrish
    @version 1.0 11/13/2017
 */

#include <fstream>   // for file I/O
#include <iostream>  // for cout
#include <cstdlib>   // for exit()
#include <vector>    // for vectors
using namespace std;

class Product
{
    public:
    /**
        Default constructor assigns default values to member variables
    */
    Product();
    /**
        Overloaded constructor assigns parameters to member variables

        @param newName name for a product.
        @param newPrice price for a product.
    */
    Product(string newName, double newPrice);
    /**
        Read data from file for both name and price member variables.

        @param fin The input file stream to read.
    */
    void read(ifstream& fin);
    /**
        Write both name and price member variables to ofstream.

        @param fout The output file stream to write.
    */
    void write(ofstream& fout);
    /**
        Display the name and price member variables to the console like:
        Milk @ 3.95
    */
    void print() const;

    private:
    string name;
    double price;
};

Product::Product()
{
    price = 0;
}

Product::Product(string newName, double newPrice) {
    name = newName;
    price = newPrice;
}

void Product::read(ifstream& fin)
{
    fin >> ws;
    getline(fin, name);
    fin >> price;
}

void Product::print() const
{
    cout << name << " @ " << price << endl;
}

void Product::write(ofstream& fout)
{
    fout << name << endl << price << endl;
}

// Write file of numbers
void writeInts(const vector<int> nums, string fileName) {
    ofstream fout(fileName.c_str());
    if (fout.fail()) {
        cout << "Output file " << fileName << " failed to open.\n";
        exit(-1);
    }
    for (unsigned i = 0; i < nums.size(); i++)
    {
        fout << nums[i] << endl;
    }
    fout.close();
}

// Write file of strings
void writeStrs(const vector<string> strs, string fileName) {
    ofstream fout(fileName.c_str());
    if (fout.fail()) {
        cout << "Output file " << fileName << " failed to open.\n";
        exit(-1);
    }
    for (unsigned i = 0; i < strs.size(); i++)
    {
        fout << strs[i] << endl;
    }
    fout.close();
}

// Write file of products
void writeObjs(vector<Product> prods, string fileName) {
    ofstream fout(fileName.c_str());
    if (fout.fail()) {
        cout << "Output file " << fileName << " failed to open.\n";
        exit(-1);
    }
    for (unsigned i = 0; i < prods.size(); i++)
    {
        prods[i].write(fout);
    }
    fout.close();
}

// Write all the files for the worksheet
void setup() {
    const vector<int> dataInt = { 27, 39, 42 };
    writeInts(dataInt, "ints.txt");
    const vector<string> dataStr = { "C++", "still", "rules" };
    writeStrs(dataStr, "strs.txt");
    const vector<string> names = {
        "Sophie Engineer",
        "Emma Hacker",
        "John Q Public",
        "Joe Schmoe"
    };
    writeStrs(names, "names.txt");
    vector<Product> prods = {
        Product("Milk", 3.95),
        Product("Fresh bread", 2.99),
        Product("Cheddar cheese", 4.99)
    };
    writeObjs(prods, "products.txt");
}