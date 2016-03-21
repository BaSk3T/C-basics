#include "stdafx.h"
#include <iostream>

//Write a program that finds in given array of integers a sequence of given sum S(if present)

const int MAX_ARRAY_SIZE = 1000;

int main()
{
	int numberOfElements;
	int sumToReach;
	
	std::cout << "Enter sum: ";
	std::cin >> sumToReach;

	std::cout << "Enter number of elements: ";
	std::cin >> numberOfElements;

	int numbers[MAX_ARRAY_SIZE];

	for (int i = 0; i < numberOfElements; i++) {
		int number;

		std::cout << "Enter number: ";
		std::cin >> number;

		numbers[i] = number;
	}

	int numbersForSum[MAX_ARRAY_SIZE];
	bool isSumFound = false;
	int countOfElementsFormingSum = 0;

	for (int i = 0; i < numberOfElements; i++) {
		long currentSum = 0;

		for (int k = i; k < numberOfElements; k++) {
			currentSum += numbers[k];

			if (currentSum == sumToReach) {
				for (int j = 0; j <= k - i; j++) {
					numbersForSum[j] = numbers[i + j];
					countOfElementsFormingSum++;
				}

				isSumFound = true;
				break;
			}
			else if (currentSum > sumToReach) {
				break;
			}
		}

		if (isSumFound) {
			break;
		}
	}

	for (int i = 0; i < countOfElementsFormingSum; i++) {
		int number = numbersForSum[i];

		std::cout << number;

		if (i < countOfElementsFormingSum - 1) {
			std::cout << " ";
		}
		else {
			std::cout << std::endl;
		}
	}

    return 0;
}

