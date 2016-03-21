#include "stdafx.h"
#include <iostream>

//Write a program that reads three integer numbers N, K and S and an array of N elements from the console.
//Find in the array a subset of K elements that have sum S or indicate about its absence.

const int MAX_ARRAY_SIZE = 10000;

int main()
{
	int sumToReach;

	std::cout << "Enter sum: ";
	std::cin >> sumToReach;

	int numberOfSubset;

	std::cout << "Enter number of elements of subset: ";
	std::cin >> numberOfSubset;

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

    return 0;
}

