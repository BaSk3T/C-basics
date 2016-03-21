#include "stdafx.h"
#include <iostream>
#include <algorithm>

//Write a program that reads two integer numbers N and K and an array of N elements from the console.
//Find in the array those K elements that have maximal sum.

bool descendingComparer(int firstNumber, int secondNumber);

const int MAX_ARRAY_SIZE = 1000;

int main()
{
	int numberOfElements;
	int numberOfElementsForMaxSum;

	std::cout << "Enter number of elements: ";
	std::cin >> numberOfElements;

	std::cout << "Enter number of elements for max sum: ";
	std::cin >> numberOfElementsForMaxSum;

	int numbers[MAX_ARRAY_SIZE];

	for (int i = 0; i < numberOfElements; i++) {
		int number;

		std::cout << "Enter number: ";
		std::cin >> number;

		numbers[i] = number;
	}

	std::sort(numbers, numbers + numberOfElements, descendingComparer);

	long maxSum = 0;

	for (int i = 0; i < numberOfElementsForMaxSum; i++) {
		maxSum += numbers[i];
	}

	std::cout << "Max sum: " << maxSum << std::endl;

    return 0;
}

bool descendingComparer(int firstNumber, int secondNumber)
{
	return firstNumber > secondNumber;
}
