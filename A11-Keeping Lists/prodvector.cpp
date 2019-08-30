#include <iostream>
#include <vector>
using namespace std;

class Product {
public:
    Product();
    Product(string newName, double newPrice);
    void read();
    void print() const;
private:
    string name;
    double price;
};

Product::Product() {
    name = "Unknown";
    price = 0.0;
}

Product::Product(string newName, double newPrice) {
    name = newName;
    price = newPrice;
}

void Product::read() {
    cout << "Enter the name of the product: ";
    cin >> ws;
    getline(cin, name);
    cout << "Enter the price for a " << name << ": ";
    cin >> price;
}

void Product::print() const {
    cout <<  name << " @ " << price << endl;
}

// Add a new product to the store
void addProduct(vector<Product>& store);

// List the products in the store
void listProducts(vector<Product>& store);

int main() {
    const int SIZE = 3;
    vector<Product> store(SIZE);
    store[0] = Product("Milk", 3.95);
    store[1] = Product("Bread", 2.99);
    store[2] = Product("Cheese", 3.95);

    int choice = 1;
    while (choice != 0) {
        cout << "\n0. Exit program\n"
             << "1. Report inventory\n"
             << "2. Add a new product\n"
             << "Choice (0-2): ";
        cin >> choice;
        if (choice == 1) {
            listProducts(store);
        } else if (choice == 2) {
            addProduct(store);
        } else if (choice != 0) {
            cout << "\nInvalid choice!\n";
        }
    }
    cout << "\nGoodbye!\n";
    // Enter new code here

    return 0;
}

void listProducts(vector<Product>& store) {
    cout << "\nListing products:\n";
    for (unsigned num = 0; num < store.size(); num++) {
        cout << (num + 1) << " ";
        store[num].print(); // call print() in Product
    }
}

void addProduct(vector<Product>& store) {
    cout << "\nAdding a new product:\n";
    Product prod;
    prod.read();
    store.push_back(prod);
}