#include "stdafx.h"
#include <iostream>

//Write an expression that checks for given integer if its third digit from right - to - left is 7.

int main()
{
	int numberToCheck = 9999799;
	int digit = (numberToCheck / 100) % 10;

	std::cout << "Third digit from right to left is 7" << std::endl;

	if (digit == 7)
	{
		std::cout << "true" << std::endl;
	}
	else
	{
		std::cout << "false" << std::endl;
	}

    return 0;
}

