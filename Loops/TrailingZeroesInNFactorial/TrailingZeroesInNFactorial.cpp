#include "stdafx.h"
#include <iostream>
#include <string>

//Write a program that calculates with how many zeroes the factorial of a given number n has at its end.

int main() {
	int number;

	std::cout << "Enter number: ";
	std::cin >> number;

	unsigned long long factorialOfNumber = 1;

	for (int i = 1; i <= number; i++) {
		factorialOfNumber *= i;
	}

	short numberOfTrailingZeros = 0;

	while (true) {
		short digit = factorialOfNumber % 10;
		factorialOfNumber /= 10;

		if (digit == 0) {
			numberOfTrailingZeros++;
		}
		else {
			break;
		}
	}

	std::cout << numberOfTrailingZeros << std::endl;

    return 0;
}

