#include "stdafx.h"
#include <iostream>

//Write a program that enters from the console a positive integer n and prints all the numbers from 1 to n not divisible
//by 3 or 7, on a single line, separated by a space.

int main()
{
	int number;

	std::cout << "Enter number: ";
	std::cin >> number;

	for (int i = 1; i <= number; i++) {
		if (i % 3 == 0 || i % 7 == 0) {
			continue;
		}

		std::cout << i;

		if (i != number) {
			std::cout << " ";
		}
	}

	std::cout << std::endl;

    return 0;
}

