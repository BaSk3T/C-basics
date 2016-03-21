#include "stdafx.h"
#include <iostream>
#include <algorithm>

//Write a program that finds the index of given element in a sorted array of integers by using the Binary search algorithm.

const int MAX_ARRAY_SIZE = 1000;

int main()
{
	int numberOfElements;
	int searchedNumber;

	std::cout << "Enter number to search for: ";
	std::cin >> searchedNumber;

	std::cout << "Enter number of elements: ";
	std::cin >> numberOfElements;

	int numbers[MAX_ARRAY_SIZE];

	for (int i = 0; i < numberOfElements; i++) {
		int number;

		std::cout << "Enter number: ";
		std::cin >> number;

		numbers[i] = number;
	}

	std::sort(numbers, numbers + numberOfElements);

	int indexOfFoundNumber;
	int lowerIndex = 0;
	int higherIndex = numberOfElements - 1;

	while (true) {
		int middleIndex = (lowerIndex + higherIndex) / 2;
		int numberInMiddle = numbers[middleIndex];

		if (numberInMiddle == searchedNumber) {
			indexOfFoundNumber = middleIndex;
			break;
		}
		else if (searchedNumber < numberInMiddle) {
			higherIndex = middleIndex - 1;
		}
		else if (searchedNumber > numberInMiddle) {
			lowerIndex = middleIndex + 1;
		}
	}

	std::cout << "Index of found number: " << indexOfFoundNumber << std::endl;

	return 0;
}

