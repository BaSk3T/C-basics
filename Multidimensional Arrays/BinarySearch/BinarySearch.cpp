#include "stdafx.h"
#include <iostream>
#include <algorithm>

//Write a program, that reads from the console an array of N integers and an integer K, sorts the array and using the
//method Array.BinSearch() finds the largest number in the array which is ≤ K.

int binarySearch(int array[], int length, int numberToSearch);

const int MAX_ARRAY_SIZE = 10000;

int main()
{
	int numberToSearch;

	std::cout << "Enter number to search: ";
	std::cin >> numberToSearch;

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

	for (int i = numberToSearch; i >= 0; i--) {
		int foundNumber = binarySearch(numbers, numberOfElements, i);

		if (foundNumber >= 0) {
			std::cout << "Number found: " << foundNumber << std::endl;
			break;
		}
	}

    return 0;
}

int binarySearch(int array[], int length, int numberToSearch)
{
	int copyOfArray[MAX_ARRAY_SIZE];

	for (int i = 0; i < length; i++) {
		copyOfArray[i] = array[i];
	}

	std::sort(copyOfArray, copyOfArray + length);

	int indexOfFound = -1;
	int leftIndex = 0;
	int rightIndex = length - 1;

	while (leftIndex <= rightIndex) {
		int midIndex = (rightIndex + leftIndex) / 2;

		int currentNumber = copyOfArray[midIndex];

		if (currentNumber == numberToSearch) {
			return copyOfArray[midIndex];
		}
		else if (currentNumber < numberToSearch) {
			leftIndex = midIndex + 1;
		}
		else if (currentNumber > numberToSearch) {
			rightIndex = midIndex - 1;
		}
	}

	return indexOfFound;
}

