/**
    CS-11 Asn 7, funwork.cpp
    Purpose: Practice writing functions.

    @author Joseph Chung
    @version 1.0 10/19/2017
*/

#include <iostream>
using namespace std;

/**
    Given two int values, return their sum; unless the two values are the same,
    then return double their sum.
    @param a The first value to test.
    @param b The second value to test.

    Test cases:
    sumDouble(1, 2) ? 3
    sumDouble(3, 2) ? 5
    sumDouble(2, 2) ? 8
*/
int sumDouble(int a, int b)
{
    // Add your code
    int c = a + b;

    if (a == b) {
    	return c * 2;  // update the return statement
	} else {
		return c;
	}
}

/**
    Given 2 ints, a and b, return true if one of them is 10 or if their sum
    is 10.
    @param a The first value to test.
    @param b The second value to test.

    Test cases:
    makes10(9, 10) ? true
    makes10(9, 9) ? false
    makes10(1, 9) ? true
*/
bool makes10(int a, int b)
{
    // Add your code
    if ( a + b == 10 || a == 10 || b == 10) {
    	return true; // update the return statement
	} else {
		return false;
	}
}

/*
    We have two monkeys, a and b, and the parameters aSmile and bSmile indicate
    if each is smiling. We are in trouble if they are both smiling or if
    neither of them is smiling. Return true if we are in trouble.
    @param aSmile Set true if monkey a is smiling; else set false.
    @param bSmile Set true if monkey b is smiling; else set false.

    Test cases:
    monkeyTrouble(true, true) ? true
    monkeyTrouble(false, false) ? true
    monkeyTrouble(true, false) ? false
*/
bool monkeyTrouble(bool aSmile, bool bSmile)
{
    // Add your code
    if ((aSmile == true && bSmile == true) || (aSmile == false && bSmile == false)) {
    	return true;  // update the return statement.
	} else {
		return false;
	}
}

/**
    Return true if the given non-negative number is a multiple of 3 or a
    multiple of 5. Use the % "modulus" operator.
    @param num The value to test.

    Test cases:
    or35(3) ? true
    or35(10) ? true
    or35(8) ? false
*/
bool or35(int num)
{
    // Add your code
    if (num % 3 == 0 || num % 5 == 0) {
    	return true;  // update the return statement
	} else {
		return false;
	}
}

/**
    Given a string, return a new string where "not " has been added to the
    front. However, if the string already begins with "not", return the string
    unchanged.
    @param str The string to test and modify.

    Test cases:
    notString("candy") ? "not candy"
    notString("x") ? "not x"
    notString("not bad") ? "not bad"
*/
string notString(string str)
{
    // Add your code
    if (str.substr(0,3) == "not") {
    	return str;  // update the return statement
	} else {
		return "not " + str;
	}
}

/**
    Return a new string where the first and last chars have been exchanged.
    @param str The string to modify.

    Test cases:
    frontBack("code") ? "eodc"
    frontBack("a") ? "a"
    frontBack("ab") ? "ba"
*/
string frontBack(string str)
{
    // Add your code
    string front = str.substr(0,1);
    string back = str.substr((str.length() - 1), 1);
    string middle = str.substr(1,(str.length() - 1) - 1);

	if (str.length() == 1) {
		return str;
	} else {
		return back + middle + front;  // update the return statement
	}
}

/**
    Given 3 int values, return true if 1 or more of them are teen.
    We'll say that a number is "teen" if it is in the range 13..19 inclusive.
    @param num1 The first number to test for teenness.
    @param num2 The second number to test for teenness.
    @param num3 The third number to test for teenness.

    Test cases:
    hasTeen(13, 20, 10) ? true
    hasTeen(20, 19, 10) ? true
    hasTeen(20, 10, 13) ? true
*/
bool hasTeen(int num1, int num2, int num3)
{
    // Add your code
    if ((num1 <= 19 || num1 >= 13) || (num2 <= 19 || num2 >= 13) || (num3 <= 19 || num3 >= 13)) {
   		return true;  // update the return statement
	} else {
		return false;
	}
}

int main()
{
    const int TV3 = 3, TV8 = 8, TV9 = 9, TV10 = 10;
    const int TV13 = 13, TV19 = 19, TV20 = 20, TV45 = 45;
    int result;
    bool answer;
    string value;
    cout << boolalpha;
    cout << "*** Testing sumDouble ***"<< endl;
    result = sumDouble(1, 2);
    cout << "sumDouble1 should be 3: " << result << endl;
    result = sumDouble(TV3, 2);
    cout << "sumDouble2 should be 5: " << result <<endl;
    result = sumDouble(2, 2);
    cout << "sumDouble3 should be 8: " << result << endl;

    cout << "\n*** Testing makes10 ***"<< endl;
    answer = makes10(TV9, TV10);
    cout << "makes10a should be true: " << answer << endl;
    answer = makes10(TV9, TV9);
    cout << "makes10b should be false: " << answer << endl;
    answer = makes10(1, TV9);
    cout << "makes10c should be true: " << answer << endl;

    cout << "\n*** Testing monkeyTrouble ***"<< endl;
    answer = monkeyTrouble(true, true);
    cout << "monkeyTrouble1 should be true: " << answer << endl;
    answer = monkeyTrouble(false, false);
    cout << "monkeyTrouble2 should be true: " << answer << endl;
    answer = monkeyTrouble(true, false);
    cout << "monkeyTrouble3 should be false: " << answer << endl;

    cout << "\n*** Testing or35 ***"<< endl;
    answer = or35(TV3);
    cout << "or35a should be true: " << answer << endl;
    answer = or35(TV10);
    cout << "or35b should be true: " << answer << endl;
    answer = or35(TV8);
    cout << "or35c should be false: " << answer << endl;

    cout << "\n*** Testing notString ***"<< endl;
    value = notString("candy");
    cout << "notString1 should be not candy: " << value << endl;
    value = notString("x");
    cout << "notString2 should be not x: " << value << endl;
    value = notString("not bad");
    cout << "notString3 should be not bad: " << value << endl;

    cout << "\n*** Testing frontBack ***"<< endl;
    value = frontBack("code");
    cout << "frontBack1 should be eodc: " << value << endl;
    value = frontBack("a");
    cout << "frontBack2 should be a: " << value << endl;
    value = frontBack("ab");
    cout << "frontBack3 should be ba: " << value << endl;

    cout << "\n*** Testing hasTeen ***"<< endl;
    answer = hasTeen(TV13, TV20, TV10);
    cout << "hasTeen1 should be true: " << answer << endl;
    answer = hasTeen(TV20, TV19, TV10);
    cout << "hasTeen2 should be true: " << answer << endl;
    answer = hasTeen(TV20, TV10, TV13) ;
    cout << "hasTeen3 should be true: " << answer << endl;
    answer = hasTeen(TV20, TV10, TV45) ;
    cout << "hasTeen4 should be false: " << answer << endl;

    cout << "\n*** End of Tests ***" << endl;

    return 0;
}