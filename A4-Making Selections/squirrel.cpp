/**
    CS-11 Asn 4, squirrel.cpp
    Purpose: Logic worksheet based on squirrels.

    @author Joseph Chung
    @version 1.0 9/27/17
*/

#include <iostream>
using namespace std;

int main() {
    const int LOW = 20, MARG = 50, BASIC = 80, MULTIPLE = 7;
    const int TEMP_LOW = 60, TEMP_HIGH = 90;
    const int PARTY_LOW = 40, PARTY_HIGH = 60;
    int nuts = 0, temperature = 0;
    bool isWeekend = false;
    cout << "***** Squirrel Logic *****\n\n";
    cout << "This worksheet prints information about squirrels that depends\n";
    cout << "on the answers to the following questions.\n";
    cout << "Enter the number of nuts: ";
    cin >> nuts;
    cout << "Enter the temperature: ";
    cin >> temperature;
    cin >> boolalpha; // require true or false for bool input.
    cout << boolalpha; // display true or false for bool values.
    cout << "Enter 0 for weekday and 1 for weekend: ";
    cout << "Enter true for weekend and false for weekday: ";
    cin >> isWeekend;
    cout << endl;

    /*
        Squirrels may chitter or chatter depending on the number of nuts in
        their hoard. Given an int value for the number of nuts, say "Chitter!"
        if the number of nuts is odd, otherwise say "Chatter!". Use the
        modulus (%) operator.
    */
    cout << "The squirrel says ";
    // *** Enter code here ***

   if (nuts % 2 == 1){
	   cout << "Chatter!";
   } else if (nuts % 2 == 0){
	   cout << "Chitter!";
   }

    cout << endl;

    /*
        Squirrels keep nuts for the winter to east when other food is scarce.
        Given an int value for the number of nuts, print both the number of
        nuts in storage and a message as follows:
        < 20 --> is low food, more nuts please
        21 - 49 -- is marginal food, more nuts please
        50 - 79 --> is basic food, more nuts please
        80+ --> is better food, more nuts please
    */
    // *** Enter code here ***
    cout << endl;

    if (nuts <= LOW) {
		cout << nuts << " is low food, more nuts please";
	} else if (nuts > LOW && nuts < MARG) {
		cout << nuts << " is marginal food, more nuts please";
	} else if (nuts >= MARG && nuts < BASIC) {
		cout << nuts << " is basic food, more nuts please";
	} else {
		cout << nuts << " is better food, more nuts please";
	}

	cout << endl;

     /*
        Squirrels spend most of the day playing. In particular, they play if
        the temperature is between 60 and 90 inclusive. Given an int value for
        the temperature, print "playing" if the squirrels are playing or print
        "resting" if the squirrels are not playing.
     */
    cout << "When the temperature is " << temperature << ", squirrels are ";
    // *** Enter code here ***
    if (temperature <= TEMP_LOW && temperature >= TEMP_HIGH) {
		cout << "playing";
	} else {
		cout << "resting";
	}

    cout << "." << endl << endl;

    /*
        Squirrels cannot count well but love the number 7 and its multiples.
        Print the word "Bark! if the number of nuts is a multiple of 7 or if
        the number of nuts is one more than a multiple of 7. Otherwise print
        "Cry!". Use the modulus (%) operator. Include the double quotes for
        full credit. For example:
        6 --> "Cry!"
        7 --> "Bark!"
        8 --> "Bark!"
        9 --> "Cry!"
    */
    cout << "When a squirrel has " << nuts << " nuts it says \"";
    // *** Enter code here ***
    if (nuts % MULTIPLE == 0 || nuts % MULTIPLE == 1){
		cout << "Bark!\"";
	} else {
		cout << "Cry!\"";
	}

    cout << endl;

    /*
        Squirrels are nuts about parties. A squirrel party is successful when
        the number of nuts is between 40 and 60 inclusive. However, on weekends
        squirrels allow parties with no upper limit on nuts. Depending on the
        number of nuts at the party and whether or not it is a weekend,
        print "good party" or "bad party". Here are some examples:
        (nuts == 30, isWeekend == false) --> bad party :(
        (nuts == 50, isWeekend == false) --> good party!
        (nuts == 70, isWeekend == true) --> good party!

    */
    cout << "With " << nuts << " nuts on a ";
    if (isWeekend) {
        cout << "weekend, it is a ";
    } else {
        cout << "weekday, it is a ";
    }
    // *** Enter code here ***
    if (isWeekend == true && nuts >= PARTY_LOW) {
		cout << "good party!";
	} else if (isWeekend == false && nuts >= PARTY_LOW && nuts <= PARTY_HIGH) {
		cout << "good party!";
	} else {
		cout << "bad party :(";
	}

    cout << endl;

    return 0;
}