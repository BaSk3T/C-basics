#include "stdafx.h"
#include <iostream>

//Write a program that reads from the console a sequence of n integer numbers and returns the minimal, the maximal number,
//the sum and the average of all numbers(displayed with 2 digits after the decimal point).
//The input starts by the number n(alone in a line) followed by n lines, each holding an integer number.
//The output is like in the examples below.

int main() {
	int numberOfNumbersToEnter;

	std::cout << "Enter number of numbers you are going to enter: ";
	std::cin >> numberOfNumbersToEnter;

	int min = INT16_MAX;
	int max = INT16_MIN;
	int sum = 0;
	double average;

	for (int i = 0; i < numberOfNumbersToEnter; i++) {
		int number;

		std::cout << "Enter number: ";
		std::cin >> number;

		if (number < min) {
			min = number;
		}

		if (number > max) {
			max = number;
		}

		sum += number;
	}

	average = (double)sum / numberOfNumbersToEnter;

	std::cout << "Min: " << min << std::endl;
	std::cout << "Max: " << max << std::endl;
	std::cout << "Sum: " << sum << std::endl;
	std::cout << "Average: " << average << std::endl;

    return 0;
}

