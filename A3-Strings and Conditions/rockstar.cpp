/**
    CS-11 Asn 3, rockstar.cpp
    Purpose: Gives a rockstar name

    @author Joseph Chung
    @version 1.0 9/20/17 1.0
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	string fn;
	string favColor;
	int birthM;

	cout << "Welcome! This program will tell you your \"Rock\" Star Name" << endl;
	cout << "Please enter your first name: ";
	cin >> fn;
	cout << "Please enter your favorite color: ";
	cin >> favColor;
	cout << "Please enter your birth month (1-12): ";
	cin >> birthM;
	cout << "Your \"Rock\" Star Name is: ";
	cout << fn << " the " << favColor << " ";
	if (birthM == 1){
		cout << "Garnet";
	} else if (birthM == 2){
		cout << "Amethyst";
	} else if (birthM == 3){
		cout << "Aquamarine";
	} else if (birthM == 4){
		cout << "Diamond";
	} else if (birthM == 5){
		cout << "Emerald";
	} else if (birthM == 6){
		cout << "Pearl";
	} else if (birthM == 7){
		cout << "Ruby";
	} else if (birthM == 8){
		cout << "Peridot";
	} else if (birthM == 9){
		cout << "Sapphire";
	} else if (birthM == 10){
		cout << "Opal";
	} else if (birthM == 11){
		cout << "Topaz";
	} else {
		cout << "Zircon";
	}
	return 1;
}