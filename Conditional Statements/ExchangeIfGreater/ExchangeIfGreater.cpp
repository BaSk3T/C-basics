#include "stdafx.h"
#include <iostream>

//Write an if - statement that takes two double variables a and b and exchanges their values if the first one is greater than
//the second one.As a result print the values a and b, separated by a space.

int main()
{
	double firstNumber;
	double secondNumber;

	std::cout << "Enter first number: ";
	std::cin >> firstNumber;

	std::cout << "Enter second number: ";
	std::cin >> secondNumber;

	if (firstNumber > secondNumber)
	{
		double oldValue = firstNumber;
		firstNumber = secondNumber;
		secondNumber = oldValue;
	}

	std::cout << firstNumber << " " << secondNumber << std::endl;

    return 0;
}

