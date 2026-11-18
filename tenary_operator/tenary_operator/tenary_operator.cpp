/*
    Ternary operator ?: is the replacement to an if/else statement
    condiiton ? expression1: expression2;
*/

#include <iostream>
using namespace std;
int main()
{
    int grade;
    int number;

    cout << "Enter your total score" << endl;
    cin >> grade;

    cout << "Please enter a number" << endl;
    cin >> number;

    grade >= 60 ? cout << "You pass" << endl : cout << "You fail" << endl;
    
    number % 2 == 1 ? cout << "Is ODD" << endl : cout << "Is EVEN" << endl;

    /*
    if(grade >= 60)
    {
        cout << "You pass" << endl;

    }
    else{
        cout << "Your faile" << endl;
    }

        */

    // You can also write it as this

    bool hungry = false;

    cout << (hungry ? "You are hungry" : "You are full");


    return 0;
}

