// random_number_generator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>            // Include random number library 




int main()
{
	// psuedo-random = NOT truly random but its close

	srand(time(NULL));

	int num = (rand() % 6) + 1;			// Takeswhat ever number we roll, divide it by 6, and gives the remainder. (6 sided dice RANDOM NUMBER FROM 1 - 6)
	std::cout << num;


	
	return 0;

}


