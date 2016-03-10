#include "stdafx.h"
#include <iostream>

//Write a program that shows the sign(+, -or 0) of the product of three real numbers, without calculating it.
//Use a sequence of if operators.

int main() {
	float firstNumber;
	float secondNumber;
	float thirdNumber;

	std::cout << "Enter first number: ";
	std::cin >> firstNumber;

	std::cout << "Enter second number: ";
	std::cin >> secondNumber;

	std::cout << "Enter third number: ";
	std::cin >> thirdNumber;

	if (firstNumber == 0 || secondNumber == 0 || thirdNumber == 0) {
		std::cout << "0" << std::endl;
	}
	else if (firstNumber < 0 && secondNumber < 0 && thirdNumber < 0) {
		std::cout << "-" << std::endl;
	}
	else if (firstNumber >= 0 && secondNumber < 0 && thirdNumber < 0) {
		std::cout << "+" << std::endl;
	}
	else if (firstNumber < 0 && secondNumber >= 0 && thirdNumber < 0) {
		std::cout << "+" << std::endl;
	}
	else if (firstNumber < 0 && secondNumber < 0 && thirdNumber >= 0) {
		std::cout << "+" << std::endl;
	}
	else if (firstNumber < 0 || secondNumber < 0 || thirdNumber < 0) {
		std::cout << "-" << std::endl;
	}
	else {
		std::cout << "+" << std::endl;
	}

    return 0;
}

