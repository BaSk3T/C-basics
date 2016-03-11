#include "stdafx.h"
#include <iostream>

//Write a program that reads from the console a positive integer number n(1 ≤ n ≤ 20) and prints a matrix like in the
//examples below.Use two nested loops.

int main() {
	int number;

	std::cout << "Enter number: ";
	std::cin >> number;

	for (int i = 0; i < number; i++) {
		for (int j = i + 1; j <= i + number; j++) {
			std::cout << j;

			if (j != i + number) {
				std::cout << " ";
			}
		}

		std::cout << std::endl;
	}

    return 0;
}

