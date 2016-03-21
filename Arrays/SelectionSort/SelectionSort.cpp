#include "stdafx.h"
#include <iostream>

//Sorting an array means to arrange its elements in increasing order.Write a program to sort an array.
//Use the Selection sort algorithm : Find the smallest element, move it at the first position, find the smallest from the rest,
//move it at the second position, etc.

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

	for (int i = 0; i < numberOfElements; i++) {
		int currentNumber = numbers[i];
		int smallestNumber = numbers[i];
		int indexOfSmallestNumber;

		for (int k = i + 1; k < numberOfElements; k++) {
			int numberToCompareWith = numbers[k];

			if (smallestNumber > numberToCompareWith) {
				smallestNumber = numberToCompareWith;
				indexOfSmallestNumber = k;
			}
		}

		if (currentNumber > smallestNumber) {
			int oldValue = currentNumber;
			numbers[i] = smallestNumber;
			numbers[indexOfSmallestNumber] = oldValue;
		}
	}

	for (int i = 0; i < numberOfElements; i++) {
		int number = numbers[i];

		std::cout << number;

		if (i < numberOfElements - 1) {
			std::cout << " ";
		}
		else {
			std::cout << std::endl;
		}
	}

    return 0;
}

