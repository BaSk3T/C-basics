#include "stdafx.h"
#include <iostream>
#include <string>

//Write a program that asks for a digit(0 - 9), and depending on the input, shows the digit as a word(in English).
//Print “not a digit” in case of invalid input.
//Use a switch statement.

int main() {
	std::string digitEnter;

	std::cout << "Enter digit: ";
	std::getline(std::cin, digitEnter);

	if (digitEnter.size() > 1) {
		std::cout << "Not a digit!" << std::endl;
		return 0;
	}

	char digit = digitEnter[0];

	switch (digit) {
	case '0': std::cout << "zero" << std::endl;
		break;
	case '1': std::cout << "one" << std::endl;
		break;
	case '2': std::cout << "two" << std::endl;
		break;
	case '3': std::cout << "three" << std::endl;
		break;
	case '4': std::cout << "four" << std::endl;
		break;
	case '5': std::cout << "five" << std::endl;
		break;
	case '6': std::cout << "six" << std::endl;
		break;
	case '7': std::cout << "seven" << std::endl;
		break;
	case '8': std::cout << "eight" << std::endl;
		break;
	case '9': std::cout << "nine" << std::endl;
		break;
	default:
		std::cout << "Not a digit!" << std::endl;
		break;
	}

    return 0;
}

