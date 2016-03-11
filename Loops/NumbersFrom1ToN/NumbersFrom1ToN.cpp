#include "stdafx.h"
#include <iostream>

//Write a program that enters from the console a positive integer n and prints all the numbers from 1 to n, on a single line,
//separated by a space.

int main() {
	int number;

	std::cout << "Enter number: ";
	std::cin >> number;

	for (int i = 1; i <= number; i++) {
		std::cout << i;

		if (i != number) {
			std::cout << " ";
		}
		else {
			std::cout << std::endl;
		}
	}

    return 0;
}

