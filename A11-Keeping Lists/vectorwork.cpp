/**
    CS-11 Asn 11
    vectorwork.cpp
    Purpose: a worksheet to improve your skills with vectors.

    @author Joseph Chung
    @version 1.0 11/15/17
 */

#include <iostream>
#include <vector>
using namespace std;

/**
    Returns true if 10 appears as either the first or last element in the
    vector AND the vector size >= 1. Examples:
    first10Last({1, 2, 10}) ? true
    first10Last({10, 1, 2, 3}) ? true
    first10Last({13, 10, 1, 2, 3}) ? false

    @param data The vector to test.
    @param return true if 10 is the first or last element; otherwise false.
*/
bool first10Last(const vector<int>& data);


/**
    Returns true if the first element and the last element are equal
    AND the vector size >= 1. Examples:
    equalFirstLast({1, 2, 3}) ? false
    equalFirstLast({1, 2, 3, 1}) ? true
    equalFirstLast({1, 2, 1}) ? true

    @param data The vector to test.
    @param return true if 10 is the first or last element; otherwise false.
*/
bool equalFirstLast(const vector<int>& data);



/**
    Prints all the elements in a vector to the console on one line.
    SDo NOT print commas between elements. Examples:
    printVector({1,2,3}) -> 1 2 3
    printVector({10, 30, 50, 79, 85}) -> 10 30 50 79 85
    printVector({5}) -> 5

    @param data The vector to print.
*/
void printVector(const vector<int>& data);


/**
    Adds 2 to each element in the vector. Examples:
    plus2({1,2,3}) -> {3, 4, 5}
    plus2({10, 30, 50, 79, 85}) -> {12, 32, 52, 81, 87}
    plus2({5}) -> {7}

    @param data The vector to modify.
*/
void plus2(vector<int>& data);



/**
    Multiplies each element in the vector by itself. Examples:
    square({1,2,3}) -> {1, 4, 9}
    square({3, 5, 6, 8, 9}) -> {9, 25, 36, 64, 81}
    square({5}) -> {25}

    @param data The vector to modify.
*/
void square(vector<int>& data);


int main()
{
    //Remove comments as you develop functions.
    bool answer;
    cout << boolalpha;;
    cout << "***Testing first10Last***" << endl;
    const int A3 = 3, A10 = 10, A13 = 13;
    vector<int> data1 = {1, 2, A10};
    answer = first10Last(data1);
    cout << "first10Last1 should be true: " << answer << endl;
    vector<int> data2 = {A10, 1, 2, A3};
    answer = first10Last(data2);
    cout << "first10Last2 should be true: " << answer << endl;
    vector<int> data3 = {A13, A10, 1, 2, A3};
    answer = first10Last(data3);
    cout << "first10Last3 should be false: " << answer << endl;


    //Remove comments as you develop functions.
    cout << "\n***Testing equalFirstLast***"<< endl;
    vector<int> data4 = {1, 2, A3};
    answer = equalFirstLast(data4);
    cout << "equalFirstLast1 should be false: " << answer << endl;
    const int A20 = 20, A50 = 50, A60 = 60, A80 = 80, A90 = 90;
    vector<int> data5 = {A10, A20, A50, A60, A80, A90, A10};
    answer = equalFirstLast(data5);
    cout << "equalFirstLast2 should be true: " << answer << endl;
    vector<int> data6 = {1};
    answer = equalFirstLast(data6);
    cout << "equalFirstLast3 should be true: " << answer << endl;


    //Remove comments as you develop functions.
    cout << "\n***Testing printVector***" << endl;
    vector<int> data7 = {1, 2, A3};
    cout << "printVector1 should be 1 2 3: ";
    printVector(data7);
    const int A30 = 30, A79 = 79, A85 = 85;
    vector<int> data8 = {A10, A30, A50, A79, A85};
    cout << "printVector2 should be 10 30 50 79 85: ";
    printVector(data8);
    const int A5 = 5;
    vector<int> data9 = {A5};
    cout << "printVector3 should be 5: ";
    printVector(data9);



    //Remove comments as you develop functions.
    cout << "\n***Testing plus2***" << endl;
    plus2(data7);
    cout << "plus2a should be 3 4 5: ";
    printVector(data7);
    plus2(data8);
    cout << "plus2b should be 12 32 52 81 87: ";
    printVector(data8);
    plus2(data9);
    cout << "plus2c should be 7: ";
    printVector(data9);


    //Remove comments as you develop functions.
    cout << "\n***Testing squareArray***" << endl;
    vector<int> data10 = {1, 2, A3};
    square(data10);
    cout << "square1 should be 1 4 9: ";
    printVector(data10);
    const int A6 = 6, A8 = 8, A9 = 9;
    vector<int> data11 = {A3, A5, A6, A8, A9};
    square(data11);
    cout << "square2 should be 9 25 36 64 81: ";
    printVector(data11);
    vector<int> data12 = {A5};
    square(data12);
    cout << "square3 should be 25: ";
    printVector(data12);


    cout << "***End of Tests***" << endl;

    return 0;

}

bool first10Last(const vector<int>& data) {
    if (data[0] == 10 || data[data.size() - 1] == 10) {
        return true;
    } else {
        return false;
    }
}

bool equalFirstLast(const vector<int>& data) {
    if (data[0] == data[data.size() - 1]) {
        return true;
    } else {
        return false;
    }
}

void printVector(const vector<int>& data) {
    for (unsigned i = 0; i < data.size(); i++) {
        cout << data[i] << " ";
    }
}

void plus2(vector<int>& data) {
    for (unsigned i = 0; i < data.size(); i++) {
        data[i] += 2;
    }
}

void square(vector<int>& data) {
    for(unsigned i = 0; i < data.size(); i++) {
        data[i] = data[i] * data[i];
    }
}