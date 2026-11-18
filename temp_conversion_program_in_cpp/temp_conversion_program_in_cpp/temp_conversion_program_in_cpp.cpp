/*
    temp_conversion_program_in_cpp.cpp : 
*/

#include <iostream>
using namespace std;

int main()
{
    double temp; 
    char unit;
    cout << "What unit would you like to convert to?" << endl;
    cout << "C = Celsius\n";
    cout << "F = Farhenheit\n";

    cin >> unit;

    if(unit == 'F' || unit == 'f'){
        cout << "Enter the temperature in Celcius" << endl;
        cin >> temp;
        temp = (1.8 * temp) + 32;
        cout << "Temperature is: " << temp << "F" << endl;
    }
    else if (unit == 'C' || unit == 'c') {
        cout << "Enter a temperature in Farhenheit" << endl;
        cin >> temp;
        temp = (temp - 32) / 1.8;
        cout << "Temperature is: " << temp << "C" << endl;
    }
    else {
        cout << "Please only enter C or F" << endl;
    }
   


    return 0;
}

