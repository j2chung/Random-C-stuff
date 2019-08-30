/**
    CS-11 Asn 7, funwork.cpp
    Purpose: Practice writing functions.

    @author Joseph Chung
    @version 1.0 10/19/2017
*/

#include <iostream>
using namespace std;

/**
    Given one int value, return the string "even" or "odd"
    if 0 is inputted, return "Zero"
    @param a The first value to test.

    Test cases:
    evenOdd(10) ? Even
    evenOdd(13) ? Odd
    evenOdd(44) ? Zero
*/
string evenOdd(int a)
{
    // Add your code
    if (a == 0) {
    	return "Zero";  // update the return statement
	} else if (a % 2 == 0) {
		return "Even";
	} else {
		return "Odd";
}


}

int main()
{
	string answer;

    cout << "\n*** Testing evenOdd ***"<< endl;
    answer = evenOdd(10);
    cout << "evenOdd1 should be Even: " << answer << endl;
    answer = evenOdd(13);
    cout << "evenOdd2 should be Odd: " << answer << endl;
    answer = evenOdd(0) ;
    cout << "evenOdd3 should be Zero: " << answer << endl;


    cout << "\n*** End of Tests ***" << endl;

    return 0;
}