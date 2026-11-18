// while_loops_in_cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    std::string name;

    // Endless loop until you enter your name as long as the condition remains true

    while(name.empty()) {
        std::cout << "Please enter your name: " << std::endl;
        std::getline(std::cin, name);
    }

    std::cout << "Hello " << name << std::endl;

    // Infinite loop that doesnt end
    /*
    while (1 == 1) {
        std::cout << "Help i am stuck in an infinite loop";
    }
    */


    // Do while loops repeat a block of code if the condition is true
    // Useful for repeating user inputs to complete a task again

    int number;

    do {
        std::cout << "Enter a positive number: ";
        std::cin >> number;

    } while (number < 0);

    std::cout << "The # is: " << number;

    return 0;
}

