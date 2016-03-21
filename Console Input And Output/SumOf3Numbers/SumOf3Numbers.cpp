#include "stdafx.h"
#include <iostream>

//Write a program that reads 3 real numbers from the console and prints their sum.

int main()
{
	float firstNumber = 5.5;
	float secondNumber = 4.5;
	float thirdNumber = 20.1;

	float sum = firstNumber + secondNumber + thirdNumber;

	std::cout << firstNumber << " + " << secondNumber << " + " << thirdNumber << " = " << sum << std::endl;

    return 0;
}

