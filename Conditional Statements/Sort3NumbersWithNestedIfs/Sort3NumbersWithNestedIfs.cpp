#include "stdafx.h"
#include <iostream>

//Write a program that enters 3 real numbers and prints them sorted in descending order.
//Use nested if statements.
//Note: Don’t use arrays and the built - in sorting functionality.

int main()
{
	float firstNumber;
	float secondNumber;
	float thirdNumber;

	std::cout << "Enter first number: ";
	std::cin >> firstNumber;

	std::cout << "Enter second number: ";
	std::cin >> secondNumber;

	std::cout << "Enter third number: ";
	std::cin >> thirdNumber;

	if (firstNumber >= secondNumber && firstNumber >= thirdNumber) {
		if (secondNumber >= thirdNumber) {
			std::cout << firstNumber << " " << secondNumber << " " << thirdNumber << std::endl;
		}
		else if (thirdNumber >= secondNumber) {
			std::cout << firstNumber << " " << thirdNumber << " " << secondNumber << std::endl;
		}
	}
	else if (secondNumber >= firstNumber && secondNumber >= thirdNumber) {
		if (firstNumber >= thirdNumber) {
			std::cout << secondNumber << " " << firstNumber << " " << thirdNumber << std::endl;
		}
		else if (thirdNumber >= firstNumber) {
			std::cout << secondNumber << " " << thirdNumber << " " << firstNumber << std::endl;
		}
	}
	else if (thirdNumber >= firstNumber && thirdNumber >= secondNumber) {
		if (firstNumber >= secondNumber) {
			std::cout << thirdNumber << " " << firstNumber << " " << secondNumber << std::endl;
		}
		else if (secondNumber >= firstNumber) {
			std::cout << thirdNumber << " " << secondNumber << " " << firstNumber << std::endl;
		}
	}

    return 0;
}

