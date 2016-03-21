#include "stdafx.h"
#include <iostream>

//Write a program that finds the maximal increasing sequence in an array.

const int MAX_ARRAY_SIZE = 1000;

int main()
{
	int numberOfElements;

	std::cout << "Enter size of array: ";
	std::cin >> numberOfElements;

	int arrayOfNumbers[1000];

	for (int i = 0; i < numberOfElements; i++) {
		int number;

		std::cout << "Enter number: ";
		std::cin >> number;

		arrayOfNumbers[i] = number;
	}

	int countOfIncreasingSequence = 1;
	int maxCountOfIncreasingSequence = 1;

	int increasingSequence[MAX_ARRAY_SIZE];

	for (int i = 1; i < numberOfElements; i++) {
		int previousNumber = arrayOfNumbers[i - 1];
		int currentNumber = arrayOfNumbers[i];

		if (previousNumber < currentNumber) {
			countOfIncreasingSequence++;

			if (maxCountOfIncreasingSequence < countOfIncreasingSequence) {
				maxCountOfIncreasingSequence = countOfIncreasingSequence;

				for (int k = 0; k < maxCountOfIncreasingSequence; k++) {
					increasingSequence[k] = arrayOfNumbers[i - (maxCountOfIncreasingSequence - 1 - k)];
				}
			}
		}
		else {
			countOfIncreasingSequence = 1;
		}
	}

	for (int i = 0; i < maxCountOfIncreasingSequence; i++) {
		std::cout << increasingSequence[i];

		if (i < maxCountOfIncreasingSequence - 1) {
			std::cout << " ";
		}
		else {
			std::cout << std::endl;
		}
	}

    return 0;
}

