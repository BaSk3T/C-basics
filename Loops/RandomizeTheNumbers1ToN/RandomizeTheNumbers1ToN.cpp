#include "stdafx.h"
#include <iostream>
#include <vector>
#include <ctime>

int getRandomIndex(int number);

//Write a program that enters in integer n and prints the numbers 1, 2, …, n in random order.

int main() {
	int number;

	std::cout << "Enter number: ";
	std::cin >> number;

	std::vector<int> numbers(number);

	for (int i = 1; i <= number; i++) {
		while (true) {
			int randomIndex = getRandomIndex(number);

			if (numbers[randomIndex] != 0) {
				continue;
			}
			else {
				numbers[randomIndex] = i;
				break;
			}
		}
	}

	for (int i = 0; i < numbers.size(); i++) {
		std::cout << numbers.at(i);

		if (i < numbers.size() - 1) {
			std::cout << " ";
		}
		else {
			std::cout << std::endl;
		}
	}

    return 0;
}

int getRandomIndex(int number) {
	return (std::rand() + +time(0)) % number;
}
