// for_loops_in_cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    for (int i = 1; i <= 10; i++) {         // Incrememnts i by 1 or u cn do i += 2 to increase by 2 or do i-- to decrement
        std::cout << i << '\n';

    }
    std::cout << "Happy new year\n";

    // Break = break out of a loop
    // Continue = skip current iteration

    for (int i = 1; i <= 20; i++) {
        if (i == 13) {
            continue;
        }
        std::cout << i << '\n';
    }

    
    return 0;
}

