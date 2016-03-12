#include "stdafx.h"
#include <iostream>

//We are given an integer number n, a bit value v(v = 0 or 1) and a position p.
//Write a sequence of operators(a few lines of C# code) that modifies n to hold the value v at the position p
//from the binary representation of n while preserving all other bits in n.

int main() {
	unsigned int numberToModify = 62241;
	short bitToChangeAtPosition = 11;
	short bit = 0;
	unsigned int result;

	if (bit == 0) {
		int bitMask = ~(1 << bitToChangeAtPosition);
		result = bitMask & numberToModify;
	}
	else if (bit == 1) {
		int bitMask = 1 << bitToChangeAtPosition;
		result = bitMask | numberToModify;
	}

	std::cout << "Result: " << result << std::endl;

    return 0;
}

