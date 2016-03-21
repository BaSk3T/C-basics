#include "stdafx.h"
#include <iostream>
#include <string>

//Using loops write a program that converts a binary integer number to its decimal form.
//The input is entered as string.The output should be a variable of type long.
//Do not use the built - in.NET functionality.

int main()
{
	long resultNumber = 0;
	
	std::string numberInBinary;

	std::cout << "Enter number in binary numeric system: ";
	std::cin >> numberInBinary;

	for (int i = 0; i < numberInBinary.size(); i++) {
		signed char bit = numberInBinary[i] - '0';

		resultNumber <<= 1;
		resultNumber |= bit;
	}

	std::cout << resultNumber << std::endl;

    return 0;
}

