#include "stdafx.h"
#include <iostream>
#include <string>

int main() {
	int number;

	std::cout << "Enter number in decimal numeric system: ";
	std::cin >> number;

	std::string numberInBinary = "";

	do
	{
		int bit = number % 2;
		number /= 2;

		if (bit == 1) {
			numberInBinary += '1';
		}
		else if (bit == 0) {
			numberInBinary += '0';
		}
	} while (number > 0);

	for (int frontIndex = 0; frontIndex < numberInBinary.size(); frontIndex++) {
		int behindIndex = numberInBinary.size() - 1 - frontIndex;

		char frontChar = numberInBinary.at(frontIndex);
		char behindChar = numberInBinary.at(behindIndex);

		if (behindIndex <= frontIndex) {
			break;
		}

		numberInBinary[frontIndex] = behindChar;
		numberInBinary[behindIndex] = frontChar;
	}

	std::cout << numberInBinary << std::endl;

    return 0;
}

