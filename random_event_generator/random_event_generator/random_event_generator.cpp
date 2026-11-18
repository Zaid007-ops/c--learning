// random_event_generator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>

int main()
{
    int randNum;
    srand(time(0));
    std::cout << "Please enter a whole number" << std::endl;
    std::cin >> randNum;
    randNum = rand() % 5 + 1;       // Generate a number between 1 - 5 and then prints a prize from case 1-5

    switch (randNum) {
        case 1: std::cout << "You win a sticker \n";
            break;
        case 2: std::cout << "You win a shirt \n";
            break;
        case 3: std::cout << "You win a car \n";
            break;
        case 4: std::cout << "You win a gift card \n";
            break;
        case 5: std::cout << "You win concert tickets \n";
            break;
    }

    return 0;
}

