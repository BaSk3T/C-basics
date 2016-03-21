#include "stdafx.h"
#include <iostream>
#include <vector>

//Write a program that reads an array of integers and removes from it a minimal number of elements in such a way that
//the remaining array is sorted in increasing order.
//Print the remaining sorted array.

const int MAX_ARRAY_SIZE = 10000;

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

	std::vector<std::vector<int>> sortedArrays(numberOfElements);

	for (int i = 0; i < numberOfElements; i++) {
		int currentNumber = numbers[i];

		sortedArrays[i].push_back(currentNumber);

		int indexOfLastInsert = 0;

		for (int j = i + 1; j < numberOfElements; j++) {
			int compareNumber = numbers[j];

			if (currentNumber <= compareNumber) {
				if (sortedArrays[i][indexOfLastInsert] <= compareNumber) {
					indexOfLastInsert++;
				}
				else {
					sortedArrays[i].pop_back();
				}

				sortedArrays[i].push_back(compareNumber);
			}
		}
	}

	int indexOfLongestArray = -1;
	int numberOfLongestArray = 0;

	for (int i = 0; i < numberOfElements; i++) {
		if (numberOfLongestArray < sortedArrays[i].size()) {
			numberOfLongestArray = sortedArrays[i].size();
			indexOfLongestArray = i;
		}
	}

	for (int i = 0; i < numberOfLongestArray; i++) {
		int number = sortedArrays[indexOfLongestArray][i];

		std::cout << number;

		if (i < numberOfLongestArray - 1) {
			std::cout << " ";
		}
		else {
			std::cout << std::endl;
		}
	}

	return 0;
}

