/**
    CS-11 Asn 9, bear.cpp
    Purpose: Tells a bear story.

    @author Joseph Chung
    @version 1.0 11/1/17
*/

#include <iostream>
using namespace std;

const int BLACK_WEIGHT = 450;
const int BROWN_WEIGHT = 900;
const int POLAR_WEIGHT = 1000;

class Bear {
    public:

        /**
            Creates an object, bear.

        */

        Bear();

        /**
            Creates an object, bear.

            @param t Type of the bear
            @param w Weight of the bear
            @param c Color of the bear
        */

        Bear(string t, int w, string c);
        /**
            Returns the type of the bear.

            @return Type of the bear.
        */

        string getType() const;

        /**
            Returns the weight of the bear.

            @return Weight of the bear.
        */

        int getWeight() const;

        /**
            Returns the color of the bear.

            @return Color of the bear.
        */

        string getColor() const;


    private:
        string type;
        int weight;
        string color;
};

// Controls operation of the program.
int main() {

    Bear black("Black", BLACK_WEIGHT, "Black");
    Bear brown("Grizzly", BROWN_WEIGHT, "Brown");
    Bear polar("Polar", POLAR_WEIGHT, "White");

    cout << "***My Bear Stories***" << endl;
    cout << "The " << black.getWeight()  << "lb " << black.getType()
    << " bear with a " << black.getColor() << " coat of fur was climbing a tree.";
    cout << "\nMeanwhile a " << brown.getWeight() << "lb " << brown.getType()
    << "bear with " << brown.getColor() << " fur was fishing salmon.";
    cout << "\nThe " << polar.getWeight() << "lb " << polar.getType()
    << " bear also went fishing salmon but his " << polar.getColor()
    << " fur got dirty." << endl;

}

Bear::Bear() {
    type = "Black";
    weight = 350;
}

Bear::Bear(string t, int w, string c) {
    type = t;
    weight = w;
    color = c;
}

string Bear::getType() const{
    return type;
}

int Bear::getWeight() const{
    return weight;
}

string Bear::getColor() const{
    return color;
}

