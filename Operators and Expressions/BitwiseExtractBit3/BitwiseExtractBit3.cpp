#include "stdafx.h"
#include <iostream>

//Using bitwise operators, write an expression for finding the value of the bit #3 of a given unsigned integer.
//The bits are counted from right to left, starting from bit #0.
//The result of the expression should be either 1 or 0.

int main()
{
	unsigned int numberToCheck = 62241;
	short bitMask = 1 << 3;

	int result = (numberToCheck & bitMask) >> 3;

	std::cout << "Bit at #3 is: " << result << std::endl;

    return 0;
}

