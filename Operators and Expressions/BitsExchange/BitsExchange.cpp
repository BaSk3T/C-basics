#include "stdafx.h"
#include <iostream>

short getBitAtPositionInNumber(short position, unsigned int number);
unsigned int changeBitAtPositionInNumber(short position, unsigned int number, int bit);

//Write a program that exchanges bits 3, 4 and 5 with bits 24, 25 and 26 of given 32 - bit unsigned integer.

int main()
{
	unsigned int numberToChange = 2369124121;
	int bit3, bit4, bit5, bit24, bit25, bit26;

	bit3 = getBitAtPositionInNumber(3, numberToChange);
	bit4 = getBitAtPositionInNumber(4, numberToChange);
	bit5 = getBitAtPositionInNumber(5, numberToChange);
	bit24 = getBitAtPositionInNumber(24, numberToChange);
	bit25 = getBitAtPositionInNumber(25, numberToChange);
	bit26 = getBitAtPositionInNumber(26, numberToChange);

	numberToChange = changeBitAtPositionInNumber(3, numberToChange, bit24);
	numberToChange = changeBitAtPositionInNumber(24, numberToChange, bit3);

	numberToChange = changeBitAtPositionInNumber(4, numberToChange, bit25);
	numberToChange = changeBitAtPositionInNumber(25, numberToChange, bit4);

	numberToChange = changeBitAtPositionInNumber(5, numberToChange, bit26);
	numberToChange = changeBitAtPositionInNumber(26, numberToChange, bit5);

	std::cout << "Result: " << numberToChange << std::endl;

    return 0;
}

short getBitAtPositionInNumber(short position, unsigned int number)
{
	int bitMask = 1 << position;
	short result = (number & bitMask) >> position;

	return result;
}

unsigned int changeBitAtPositionInNumber(short position, unsigned int number, int bit)
{
	unsigned int result;

	if (bit == 0) {
		int bitMask = ~(1 << position);
		result = bitMask & number;
	}
	else if (bit == 1) {
		int bitMask = 1 << position;
		result = bitMask | number;
	}

	return result;
}
