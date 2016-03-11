#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <string>

//You are given n integers(given in a single line, separated by a space).
//Write a program that checks whether the product of the odd elements is equal to the product of the even elements.
//Elements are counted from 1 to n, so the first element is odd, the second is even, etc.

int main() {
	std::string numbers;

	std::getline(std::cin, numbers);

	std::istringstream iss(numbers);

	short countOfNumbers = 1;

	int oddProduct = 1;
	int evenProduct = 1;

	do
	{
		std::string numberAsText;
		iss >> numberAsText;
		
		if (numberAsText == "") {
			continue;
		}

		int number = std::stoi(numberAsText);

		if (countOfNumbers % 2 == 0) {
			evenProduct *= number;
		}
		else {
			oddProduct *= number;
		}

		countOfNumbers++;

	} while (iss);

	std::string result = oddProduct == evenProduct ? "yes" : "no";

	std::cout << result << std::endl;

	return 0;
}