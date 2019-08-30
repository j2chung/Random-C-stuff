#include <iostream>
using namespace std;

// Declare class here
class Car {
    public:
        void print() const;
        void read();
        Car();
        Car(string newName, double newPrice, double newMpg);
        string getName() const;
        void setName(string newName);
        double getPrice() const;
        void setPrice(double newPrice);
        double getMpg() const;
        void setMpg(double newMpg);


    private:
        string name;
        double price;
        double mpg;

};

int main() {
    // Construct objects here

    // Car mustang;
    //mustang.read();
    //mustang.print();
    cout << "Other cars for comaprison:\n";
    Car corolla("Toyota Corolla", 18500, 30);
    corolla.print();
    cout << "Testing get and set functions\n";
    Car tester("Calamity", 1000, 5);
    cout << "The mpg of tester is: "
         < tester.getMpg() << endl;
    tester.setMpg(25);
    cout << "Tester's MPG is now: ";
    tester.print();

    return 0;
}

Car::Car() {
    name = "nothing";
    price = 0;
    mpg = 0;
}

Car::Car(string newName, double newPrice, double newMpg) {
    name = newName;
    price = newPrice;
    mpg = newMpg;
}

void Car::read() {
    cout << "Enter a product name: ";
    cin >> name;
    cout << "Enter the price for a " << name << ": ";
    cin >> price;
    cout << "Enter the MPG for a " << name << ": ";
    cin >> mpg;
}

void Car::print() const{
    cout << name << " @ " << price << " with MPG: " << mpg << endl;
}

string Car::getName() const{
    return name;
}

void Car::setName(string newName) {
    name = newName;
}

double Car::getPrice() const{
    return price;
}

void Car::setPrice(double newPrice) {
    price = newPrice;
}

double Car::getMpg() const{
    return mpg;
}

void Car::setMpg(double newMpg) {
    mpg = newMpg;
}
