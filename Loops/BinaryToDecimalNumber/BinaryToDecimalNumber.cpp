#include "stdafx.h"
#include <iostream>
#include <string>

//Using loops write a program that converts a binary integer number to its decimal form.
//The input is entered as string.The output should be a variable of type long.
//Do not use the built - in.NET functionality.

int main() {
	long resultNumber = 0;
	
	std::string numberInBinary;

	std::cout << "Enter number in binary numeric system: ";
	std::getline(std::cin, numberInBinary);

	int power = 1;
	for (int i = numberInBinary.size() - 1; i >= 0; i--)
	{
		int sign = numberInBinary.at(i) - 48;

		if (sign == 1) {
			resultNumber += sign * power;
		}

		power *= 2;
	}

	std::cout << resultNumber << std::endl;

    return 0;
}

