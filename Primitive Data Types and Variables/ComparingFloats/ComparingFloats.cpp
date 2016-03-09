#include "stdafx.h"
#include <iostream>
#include <string>

//Write a program that safely compares floating - point numbers(double) with precision eps = 0.000001.
//Note: Two floating - point numbers a and b cannot be compared directly by a == b because of the nature of the floating - point arithmetic.
//Therefore, we assume two numbers are equal if they are more closely to each other than a fixed constant eps.

int main()
{
	double firstNumber = 4.999999;
	double secondNumber = 4.999998;

	float eps = 0.000001;

	bool equal = std::abs(firstNumber - secondNumber) < eps;
	std::string equalAsText = equal ? "yes" : "no";

	std::cout << "Equal: " << equalAsText << std::endl;

    return 0;
}

