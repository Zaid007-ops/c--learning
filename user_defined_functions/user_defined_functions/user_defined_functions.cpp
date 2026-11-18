// user_defined_functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

/*
        User Defined functions in C++
*/

// A function is a block of reusable code

// Function can also be called outside the main function by declaring it before the main function

void text();    // This allows you to keep main() funciton at the top


int main()
{
    std::string name;
    std::cin >> name;

    text();         // Call the function text
    text(name);         // Function can be called multiple times 


    return 0;
}


void text() {

   
    
    std::cout << "Please enter your name\n";
    
    std::cout << "Hello " << name;

}
