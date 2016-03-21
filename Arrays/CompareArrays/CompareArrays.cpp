#include "stdafx.h"
#include <iostream>

//Write a program that reads two integer arrays from the console and compares them element by element.

const int MAX_ARRAY_SIZE = 1000;

int main()
{
	int firstArray[MAX_ARRAY_SIZE];
	int secondArray[MAX_ARRAY_SIZE];

	int numberOfElements;
	
	std::cout << "Enter size of array: "; 
	std::cin >> numberOfElements;

	for (int i = 0; i < numberOfElements; i++) {
		int numberForElement;
		
		std::cout << "Enter number for first array: ";
		std::cin >> numberForElement;

		firstArray[i] = numberForElement;
	}

	std::cout << std::endl;

	for (int i = 0; i < numberOfElements; i++) {
		int numberForElement;

		std::cout << "Enter number for second array: ";
		std::cin >> numberForElement;

		secondArray[i] = numberForElement;
	}

	std::cout << std::endl;

	for (int i = 0; i < numberOfElements; i++) {
		int numberFromFirstArray = firstArray[i];
		int numberFromSecondArray = secondArray[i];

		if (numberFromFirstArray == numberFromSecondArray) {
			std::cout << "Numbers " << numberFromFirstArray << " : " << numberFromSecondArray << " are equal" << std::endl;
			continue;
		}

		int greater = numberFromFirstArray > numberFromSecondArray ? numberFromFirstArray : numberFromSecondArray;

		std::cout << numberFromFirstArray << " : " << numberFromSecondArray << " greater is: " << greater << std::endl;
	}

    return 0;
}

