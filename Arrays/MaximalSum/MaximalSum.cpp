#include "stdafx.h"
#include <iostream>

//Write a program that finds the sequence of maximal sum in given array.

const int MAX_ARRAY_SIZE = 1000;

int main()
{
	int numberOfElements;

	std::cout << "Enter number of elements: ";
	std::cin >> numberOfElements;

	int numbers[MAX_ARRAY_SIZE];

	for (int i = 0; i < numberOfElements; i++) {
		int number;

		std::cout << "Enter number: ";
		std::cin >> number;

		numbers[i] = number;
	}

	int numbersOfMaximalSum[MAX_ARRAY_SIZE];
	int maxSum = 0;
	int numberOfElementsInMaxSum = 0;

	for (int i = 0; i < numberOfElements; i++) {
		int currentSum = 0;

		for (int k = i; k < numberOfElements; k++) {
			int currentNumber = numbers[k];

			currentSum += currentNumber;

			if (maxSum < currentSum) {
				maxSum = currentSum;
				numberOfElementsInMaxSum = k - i + 1;

				for (int j = 0; j <= k - i; j++) {
					numbersOfMaximalSum[j] = numbers[i + j];
				}
			}
		}
	}

	for (int i = 0; i < numberOfElementsInMaxSum; i++) {
		int number = numbersOfMaximalSum[i];

		std::cout << number;

		if (i < numberOfElementsInMaxSum - 1) {
			std::cout << " ";
		}
		else {
			std::cout << std::endl;
		}
	}

    return 0;
}

