// if_statements_in_cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

/*

    If statements execute a block of code if a condition is true.
    If not then it wont execute it.

    A switch is an alternative to using many else if statements.

*/

using namespace std;

int main()
{
    int age;
	cout << "Enter your age: "
        << endl;
    cin >> age;

    if  (age >= 18) 
    {
        cout << "You are eligible to vote." << endl;
    }
    else
    {
        cout << "You are not eligible to vote" << endl;
    }
    
    return 0;
}

