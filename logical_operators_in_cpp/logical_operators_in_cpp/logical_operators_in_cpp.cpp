/*
    Logical operators in C++:
    && = check if two conditions are true.
    || = check if at least once of the two conditions are true
    ! = reverses the logical state of its operand
*/
#include <iostream>
using namespace std;

int main()
{
    int temp;
    cout << "Enter a temperature" << endl;
    cin >> temp;

    bool isSunny = true;

    if(temp > 0 && temp < 30){          // can use || her aswell
        cout << "The temperature is cozy" << endl;
    
    }
    else {
        cout << "The temp is bad" << endl;
    }

    if(!isSunny){       // Checks if its NOT sunny as sunny is set to true
        cout << "It is sunny outside" << endl;
    }
    else {
        cout << "It is cloudy outside" << endl;
    }


    return 0;
}   

