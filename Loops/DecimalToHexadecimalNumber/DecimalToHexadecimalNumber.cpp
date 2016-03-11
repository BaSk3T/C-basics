#include "stdafx.h"
#include <iostream>
#include <string>

char getHexadecimalRepresentationOfDigit(short digit);

//Using loops write a program that converts an integer number to its hexadecimal representation.
//The input is entered as long.The output should be a variable of type string.
//Do not use the built - in.NET functionality.

int main() {
	unsigned long long numberInDecimal;

	std::cout << "Enter number in decimal numeric system: ";
	std::cin >> numberInDecimal;

	short numberOfBaseSystem = 10;
	short power = 0;

	std::string numberInHexadecimal = "";

	do
	{
		short digit = numberInDecimal % 16;
		numberInDecimal /= 16;
		
		char hexadecimalRepresentationOfDigit = getHexadecimalRepresentationOfDigit(digit);
		numberInHexadecimal += hexadecimalRepresentationOfDigit;

	} while (numberInDecimal > 0);

	for (int frontIndex = 0; frontIndex < numberInHexadecimal.size(); frontIndex++) {
		int behindIndex = numberInHexadecimal.size() - 1 - frontIndex;

		char frontChar = numberInHexadecimal.at(frontIndex);
		char behindChar = numberInHexadecimal.at(behindIndex);

		if (behindIndex <= frontIndex) {
			break;
		}

		numberInHexadecimal[frontIndex] = behindChar;
		numberInHexadecimal[behindIndex] = frontChar;
	}

	std::cout << numberInHexadecimal << std::endl;

    return 0;
}

char getHexadecimalRepresentationOfDigit(short digit) {
	char hexadecimalRepresentationOfDigit;

	switch (digit) {
	case 0:
		hexadecimalRepresentationOfDigit = '0';
		break;
	case 1:
		hexadecimalRepresentationOfDigit = '1';
		break;
	case 2:
		hexadecimalRepresentationOfDigit = '2';
		break;
	case 3:
		hexadecimalRepresentationOfDigit = '3';
		break;
	case 4:
		hexadecimalRepresentationOfDigit = '4';
		break;
	case 5:
		hexadecimalRepresentationOfDigit = '5';
		break;
	case 6:
		hexadecimalRepresentationOfDigit = '6';
		break;
	case 7:
		hexadecimalRepresentationOfDigit = '7';
		break;
	case 8:
		hexadecimalRepresentationOfDigit = '8';
		break;
	case 9:
		hexadecimalRepresentationOfDigit = '9';
		break;
	case 10:
		hexadecimalRepresentationOfDigit = 'A';
		break;
	case 11:
		hexadecimalRepresentationOfDigit = 'B';
		break;
	case 12:
		hexadecimalRepresentationOfDigit = 'C';
		break;
	case 13:
		hexadecimalRepresentationOfDigit = 'D';
		break;
	case 14:
		hexadecimalRepresentationOfDigit = 'E';
		break;
	case 15:
		hexadecimalRepresentationOfDigit = 'F';
		break;
	default:
		break;
	}

	return hexadecimalRepresentationOfDigit;
}