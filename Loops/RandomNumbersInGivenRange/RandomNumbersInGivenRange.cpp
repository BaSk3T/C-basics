#include "stdafx.h"
#include <iostream>
#include <ctime>

int random(int low, int high);

//Write a program that enters 3 integers n, min and max(min != max) and prints n random numbers in the range[min...max].

int main() {
	int number;
	int min;
	int max;

	std::cout << "Enter number: ";
	std::cin >> number;

	std::cout << "Enter min: ";
	std::cin >> min;

	std::cout << "Enter max: ";
	std::cin >> max;

	if (min == max) {
		std::cout << "Min cannot be equal to max" << std::endl;
		return 0;
	}

	for (int i = 0; i < number; i++) {
		std::cout << random(min, max);

		if (i < number - 1) {
			std::cout << " ";
		}
		else {
			std::cout << std::endl;
		}
	}

    return 0;
}

int random(int low, int high) {
	return (rand() + time(0)) % (high - low + 1) + low;
}