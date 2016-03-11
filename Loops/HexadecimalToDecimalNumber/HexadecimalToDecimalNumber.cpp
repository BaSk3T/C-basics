#include "stdafx.h"
#include <iostream>
#include <string>

short getDecimalRepresentationOfHexadecimalDigit(char digit);

//Using loops write a program that converts a hexadecimal integer number to its decimal form.
//The input is entered as string.The output should be a variable of type long.
//Do not use the built - in.NET functionality.

int main() {
	std::string hexadecimalNumber;

	std::cout << "Enter number in hexadecimal numeric system: ";

	std::getline(std::cin, hexadecimalNumber);

	short numberOfBaseSystem = 16;
	short power = 0;

	unsigned long long numberInDecimal = 0;

	for (int i = hexadecimalNumber.size() - 1; i >= 0; i--) {
		char digit = hexadecimalNumber.at(i);
		short decimalRepresentationOfDigit = getDecimalRepresentationOfHexadecimalDigit(digit);

		numberInDecimal += decimalRepresentationOfDigit * std::pow(numberOfBaseSystem, power);
		power++;
	}

	std::cout << numberInDecimal << std::endl;

	return 0;
}

short getDecimalRepresentationOfHexadecimalDigit(char digit) {
	short decimalRepresentationOfDigit;

	switch (digit) {
	case '0':
		decimalRepresentationOfDigit = 0;
		break;
	case '1':
		decimalRepresentationOfDigit = 1;
		break;
	case '2':
		decimalRepresentationOfDigit = 2;
		break;
	case '3':
		decimalRepresentationOfDigit = 3;
		break;
	case '4':
		decimalRepresentationOfDigit = 4;
		break;
	case '5':
		decimalRepresentationOfDigit = 5;
		break;
	case '6':
		decimalRepresentationOfDigit = 6;
		break;
	case '7':
		decimalRepresentationOfDigit = 7;
		break;
	case '8':
		decimalRepresentationOfDigit = 8;
		break;
	case '9':
		decimalRepresentationOfDigit = 9;
		break;
	case 'A':
		decimalRepresentationOfDigit = 10;
		break;
	case 'B':
		decimalRepresentationOfDigit = 11;
		break;
	case 'C':
		decimalRepresentationOfDigit = 12;
		break;
	case 'D':
		decimalRepresentationOfDigit = 13;
		break;
	case 'E':
		decimalRepresentationOfDigit = 14;
		break;
	case 'F':
		decimalRepresentationOfDigit = 15;
		break;
	default:
		break;
	}

	return decimalRepresentationOfDigit;
}
