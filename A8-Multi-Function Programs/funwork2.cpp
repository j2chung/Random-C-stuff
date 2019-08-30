/**
    CS-11 Asn 8, funwork2.cpp
    Purpose: Practice writing functions.

    @author Joseph Chung
    @version 1.0 10/26/17
*/
#include <iostream>
using namespace std;

/**
    Given a char that is a valid letter (a-z or A-Z). Capitalize the letter
    if it is lower case, else leave the letter unaltered if it is upper Case.
    @param letter The letter to test and change.

    Test cases:
    capitalize('a') -> 'A'
    capitalize('A') -> 'A'
*/
void capitalize(char& letter) {
    if (letter >= 97) {
        letter = letter - 32;
    }
}

/**
    Given a string, alters any blank spaces in the string to commas.
    @param str The string to test and change.
    Hint: Use a for loop, and string indexing

    Test cases:
    spaceToComma("cats hats bats") -> "cats,hats,bats"
    spaceToComma("I love cake! ") -> "I,love,cake!,"
*/
void spaceToComma(string& str) {
    string copy;
    for (unsigned int i = 0; i < (unsigned) str.length() - 1; i++) {
        if (str.substr(i, 1) == " ") {
            copy = copy + ",";
        } else {
            copy = copy + str.substr(i,1);
        }
    }
    str = copy;
}

/**
    Given an array of ints, return true if 10 is either the first or last
    element in the array. The array will be size 1 or more.
    @param data The array to test.
    @param size The number of element in the array.
    @return true if 10 is either the first or last element; else false.

    Test cases:
    first10Last([1, 2, 10], 3) ? true
    first10Last([10, 1, 2, 3], 4) ? true
    first10Last([13, 10, 1, 2, 3], 5) ? false
*/
bool first10Last(const int data[], int size) {
    if (data[size - 1] == 10 || data[0] == 10) {
        return true;
    } else {
        return false;
    }
}


/**
    Prints the contents of an array with a for loop all on one line with a
    space between each number. Ends by printing a newline.
    @param data The array to test.
    @param size The number of element in the array.
*/
void printArray(const int data[], int size) {
    for (int i = 0; i < size; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}

/**
    Given an array of ints, add 2 to each element in the array.
    Call the printArray() at the end of the function before returning.
    Remember arrays are automatically like pass by reference.

    Test cases:
    arrayPlus2([1,2,3],3) -> [3, 4, 5]
    arrayPlus2([10, 30, 50, 79, 85], 5) -> [12, 32, 52, 81, 87]
    arrayPlus2([5], 1) -> [7]
*/
void arrayPlus2(int data[], int size) {
    for (int i = 0; i < size; i++) {
        data[i] = data[i] + 2;
        cout << data[i] << " ";
    }
}

int main()
{
    bool answer = false;
    cout << boolalpha;

    cout << "***Testing capitalize***"<< endl;
    char letter = 'a';
    capitalize(letter);
    cout << "capitalize1 should be A: " << letter << endl;
    letter = 'A';
    capitalize(letter);
    cout << "capitalize2 should be A: " << letter << endl;
    letter = 'z';
    capitalize(letter);
    cout << "capitalize3 should be Z: " << letter << endl;

    cout << "\n***Testing spaceToComma***"<< endl;
    string list = "a B z";
    spaceToComma(list);
    cout << "spaceToComma1 should be a,B,z: " << list << endl;
    list = "cats hats bats";
    spaceToComma(list);
    cout << "spaceToComma2 should be cats,hats,bats: " << list << endl;
    list = "I love cake! ";
    spaceToComma(list);
    cout << "spaceToComma3 should be I,love,cake!,: " << list << endl;

    cout << "\n***Testing first10Last***"<< endl;
    const int array1[] = {1, 2, 10};
    const int SIZE1 = 3;
    answer = first10Last(array1, SIZE1);
    cout << "first10Last1 should be true: " << answer << endl;
    const int array2[] = {10, 1, 2, 3};
    const int SIZE2 = 4;
    answer = first10Last(array2, SIZE2);
    cout << "first10Last2 should be true: " << answer << endl;
    const int array3[] = {13, 10, 1, 2, 3};
    const int SIZE3 = 5;
    answer = first10Last(array3, SIZE3);
    cout << "first10Last3 should be false: " << answer << endl;

    cout << "\n***Testing printArray***" << endl;
    int array4[] = {1, 2, 3};
    const int SIZE4 = 3;
    cout << "printArray1 should be 1 2 3: ";
    printArray(array4, SIZE4);
    int array5[] = {10, 30, 50, 79, 85};
    const int SIZE5 = 5;
    cout << "printArray2 should be 10 30 50 79 85: ";
    printArray(array5, SIZE5);
    int array6[] = {5};
    const int SIZE6 = 1;
    cout << "printArray3 should be 5: ";
    printArray(array6, SIZE6);

    cout << "\n***Testing arrayPlus2***" << endl;
    cout << "arrayPlus2a should be 3 4 5: ";
    arrayPlus2(array4, SIZE4);
    cout << "arrayPlus2b should be 12 32 52 81 87: ";
    arrayPlus2(array5, SIZE5);
    cout << "arrayPlus2c should be 7: ";
    arrayPlus2(array6, SIZE6);

    cout << "\n*** End of Tests ***" << endl;

    return 0;
}
