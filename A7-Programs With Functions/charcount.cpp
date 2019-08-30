/**
    CS-11 Asn 7, charcount.cpp
    Purpose: Finding unique letters in your name.

    @author Joseph Chung
    @version 1.0 10/19/2017
*/


#include <iostream>
using namespace std;


/**
    Counts the number of letters in str that match the unique letters
    (not spaces) of my name.

    @param str a string with a word or phrase
    @return the number of letters.
*/

    int countLetters(string str) {

        string name [] = {"J", "o", "s", "e", "p", "h", "C", "u", "n", "g"};
        int unique = 0;

        for (unsigned int i = 0; i < (unsigned)str.length(); i++) {
            for (int j = 0; j < 10; j++) {
                if (name[j] == str.substr(i, 1)) {
                    unique ++;
                    j = 11;
                }
            }

        }
        return unique;
    }



    int main() {

        string word;
        int num;
        int exit = 1;

        while (exit == 1) {
            cout << "Enter a word or phrase (x to exit): ";
            getline(cin, word);

            if (word == "x") {
                exit = 2;
            } else {
            num = countLetters(word);
            cout << "The input contains " << num <<" letters of your name";
			}
			cout << "\n";
        }
		cout << "You have a name we can count on!";

        return 0;
    }



