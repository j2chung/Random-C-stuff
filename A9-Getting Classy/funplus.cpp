
/**

- Get price 1 and Price 2 from the user
- Print the name and the price of each

  double price 1
  double price 2
  string price 1 name
  string price 2 name

  cin >> price 1
  cin >> price 2
  cin >> price 1 name
  cin >> price 2 name

  cout << price 1 and price 1 name
  cout << price 2 and price 2 name


  if (price 1 > price 2) {
      cout << price 1 is higher;
      } else {
      cout << price 2 is higher;
      }


  void priceInput(int& price1, int& price2, string& p1name, string& p2name) {

        cin >> price 1
        cin >> price 2
        cin >> price 1 name
        cin >> price 2 name
        }

  void comparePrice(int p1, int p2) {
    if (price 1 > price 2) {
          cout << price 1 is higher;
          } else {
          cout << price 2 is higher;
      }
    } */


#include <iostream>
using namespace std;

void priceInput(double& p1, double& p2, string& n1, string& n2) {
    cout << "For the first product: " << endl;
    cout << "Enter the product name: ";
    cin >> n1;
    cout << "Enter the price of " << n1 << ": ";
    cin >> p1;
    cout << "For the second product: " << endl;
    cout << "Enter the product name: ";
    cin >> n2;
    cout << "Enter the price of " << n2 << ": ";
    cin >> p2;
}

void print(double p1, double p2, string n1, string n2) {
    cout << "You entered: " << endl;
    cout << n1 << " " << p1 << endl;
    cout << n2 << " " << p2 << endl;
}

void comparePrice(double p1, double p2, string n1, string n2) {
    if (p1 > p2) {
        cout << n1 << " has a higher price" << endl;
    } else {
        cout << n2 << " has a higher price" << endl;
    }
}

int main() {
    double p1;
    double p2;
    string name1;
    string name2;

    priceInput(p1, p2, name1, name2);
    print(p1, p2, name1, name2);
    comparePrice(p1, p2, name1, name2);

}





