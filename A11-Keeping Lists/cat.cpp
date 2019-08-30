#include <iostream>
#include <vector>
using namespace std;

// Add class Cat here

class Cat {
    public:
        Cat(string n, int a);
        Cat();
        int getAge() const;
        string getName() const;

    private:
        string name;
        int age;

};

void printOldest(const vector<Cat>& cats);


int main() {
    ///Uncomment after developing class.
    vector<Cat> cats(3);
    cats[0] = Cat("Fluffy", 7);
    cats[1] = Cat("Garfield", 5);
    cats[2] = Cat("Kitty", 3);

    // Uncomment after defining printOldest()
    printOldest(cats);
    return 0;
}


Cat::Cat() {
    name = "Cat";
    age = 0;
}

Cat::Cat(string n, int a) {
    name = n;
    age = a;
}

int Cat::getAge() const{
    return age;
}

string Cat::getName() const{
    return name;
}


void printOldest(const vector<Cat>& cats) {
    int old = 0;

    for (unsigned i = 0; i < cats.size() - 1; i++) {
        if (cats[i].getAge() > cats[old].getAge()) {
            old = i;
        }
    }
    cout << "Oldest cat is " << cats[old].getName() << "at " << cats[old].getAge() << " years.";
}


