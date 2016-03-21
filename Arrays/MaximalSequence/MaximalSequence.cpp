#include "stdafx.h"
#include <iostream>

//Write a program that finds the maximal sequence of equal elements in an array.

const int MAX_ARRAY_SIZE = 1000;

int main()
{
	int numberOfElements;

	std::cout << "Enter size of array: ";
	std::cin >> numberOfElements;

	int arrayOfNumbers[MAX_ARRAY_SIZE];

	for (int i = 0; i < numberOfElements; i++) {
		int number;

		std::cout << "Enter number: ";
		std::cin >> number;

		arrayOfNumbers[i] = number;
	}

	int maxCountOfEqualElements = 1;
	int maxNumberForEqualElements;

	int countOfEqualElements = 1;

	for (int i = 1; i < numberOfElements; i++) {
		int previousNumber = arrayOfNumbers[i - 1];
		int currentNumber = arrayOfNumbers[i];

		if (previousNumber == currentNumber) {
			countOfEqualElements++;

			if (maxCountOfEqualElements < countOfEqualElements) {
				maxCountOfEqualElements = countOfEqualElements;
				maxNumberForEqualElements = currentNumber;
			}
		}
		else {
			countOfEqualElements = 1;
		}
	}

	for (int i = 0; i < maxCountOfEqualElements; i++) {
		std::cout << maxNumberForEqualElements;

		if (i < maxCountOfEqualElements - 1) {
			std::cout << " ";
		}
		else {
			std::cout << std::endl;
		}
	}

    return 0;
}

