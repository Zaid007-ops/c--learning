// number_guessing_game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>

/*
        RANDOM NUMBER GUESSING GAME
*/

int main()
{
    int randNum;
    int guess;
    int tries = 0;

    srand(time(NULL));

    randNum = (rand() % 100) + 1;                   // Gives a random number fomr 1 - 100

    std::cout << "******** NUMBER GUESSING GAME ********\n";

    do{
        std::cout << "Please enter a number from 1 - 100: ";
        std::cin >> guess;
        tries++;

        if (guess > randNum) {
            std::cout << "YOUR TOO HIGH\n";
            
        }
        else if (guess < randNum) {
            std::cout << "YOUR TOO LOW\n";
            
        }
        else {
            std::cout << "YOU ARE CORRECT CONGRATS! # of tries: " << tries << '\n';

        }

    } while (guess != randNum); {

    }


    
    
    
    return 0;
}
