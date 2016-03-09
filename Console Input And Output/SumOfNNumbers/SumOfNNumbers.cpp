#include "stdafx.h"
#include <iostream>

//Write a program that enters a number n and after that enters more n numbers and calculates and prints their sum.

int main()
{
	int numberOfInputs;
	float sum = 0;

	std::cout << "Enter number of inputs: ";
	std::cin >> numberOfInputs;

	for (int i = 0; i < numberOfInputs; i++)
	{
		float number;

		std::cout << "Enter number: ";
		std::cin >> number;

		sum += number;
	}

	std::cout << "Sum: " << sum << std::endl;

    return 0;
}

