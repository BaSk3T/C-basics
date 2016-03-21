#include "stdafx.h"
#include <iostream>

//Write a program that compares two char arrays lexicographically(letter by letter).

const int MAX_ARRAY_SIZE = 1000;

int main()
{
	char firstArray[MAX_ARRAY_SIZE];
	char secondArray[MAX_ARRAY_SIZE];

	int numberOfElements;

	std::cout << "Enter size of array: ";
	std::cin >> numberOfElements;

	for (int i = 0; i < numberOfElements; i++) {
		char charForArray;

		std::cout << "Enter char for first arrray: ";
		std::cin >> charForArray;
		
		firstArray[i] = charForArray;
	}

	std::cout << std::endl;

	for (int i = 0; i < numberOfElements; i++) {
		char charForArray;

		std::cout << "Enter char for second arrray: ";
		std::cin >> charForArray;

		secondArray[i] = charForArray;
	}

	std::cout << std::endl;

	for (int i = 0; i < numberOfElements; i++) {
		char charFromFirstArray = firstArray[i];
		char charFromSecondArray = secondArray[i];

		if (charFromFirstArray == charFromSecondArray) {
			std::cout << "Chars " << charFromFirstArray << " : " << charFromSecondArray << " are the same" << std::endl;
			continue;
		}

		char greater = charFromFirstArray > charFromSecondArray ? charFromFirstArray : charFromSecondArray;

		std::cout << charFromFirstArray << " : " << charFromSecondArray << " greater is: " << greater << std::endl;
	}

    return 0;
}

