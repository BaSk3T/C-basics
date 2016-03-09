#include "stdafx.h"
#include <iostream>

//Write a program that finds the biggest of three numbers.

int main()
{
	float firstNumber;
	float secondNumber;
	float thirdNumber;
	float biggestNumber;

	std::cout << "Enter first number: ";
	std::cin >> firstNumber;

	std::cout << "Enter second number: ";
	std::cin >> secondNumber;

	std::cout << "Enter third number: ";
	std::cin >> thirdNumber;

	if (firstNumber > secondNumber && firstNumber > thirdNumber)
	{
		biggestNumber = firstNumber;
	}
	else if (secondNumber > firstNumber && secondNumber > thirdNumber)
	{
		biggestNumber = secondNumber;
	}
	else if (thirdNumber > firstNumber && thirdNumber > secondNumber)
	{
		biggestNumber = thirdNumber;
	}

	std::cout << "Biggest number: " << biggestNumber << std::endl;

	return 0;
}

