#include "stdafx.h"
#include <iostream>
#include <map>

//Write a program that finds the most frequent number in an array.

const int MAX_ARRAY_SIZE = 1000;

int main()
{
	int numberOfElements;

	std::cout << "Enter number of elements: ";
	std::cin >> numberOfElements;

	int numbers[MAX_ARRAY_SIZE];
	std::map<int, int> result;

	for (int i = 0; i < numberOfElements; i++) {
		int number;

		std::cout << "Enter number: ";
		std::cin >> number;

		numbers[i] = number;
		result[number] = 0;
	}

	for (int i = 0; i < numberOfElements; i++) {
		result[numbers[i]]++;
	}

	int countOfFrequentNumber = 0;
	int frequentNumber;

	for each (std::pair<int, int> pair in result) {
		
		if (countOfFrequentNumber < pair.second) {
			frequentNumber = pair.first;
			countOfFrequentNumber = pair.second;
		}
	}

	std::cout << frequentNumber << "(" << countOfFrequentNumber << ")times" << std::endl;

    return 0;
}

