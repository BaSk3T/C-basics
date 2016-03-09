#include "stdafx.h"
#include <iostream>
#include <limits>

typedef std::numeric_limits<double> dbl;
typedef std::numeric_limits<float> flt;

//Which of the following values can be assigned to a variable of type float and which to a variable
//of type double: 34.567839023, 12.345, 8923.1234857, 3456.091 ?
//Write a program to assign the numbers in variables and print them to ensure no precision is lost.

int main()
{
	double firstNumber = 34.567839023;
	float secondNumber = 12.345;
	double thirdNumber = 8923.1234857;
	float fourthNumber = 3456.091;

	std::cout.precision(dbl::max_digits10);
	std::cout << "Used double " << firstNumber << std::endl;
	std::cout << "Used double " << thirdNumber << std::endl;

	std::cout.precision(flt::max_digits10);
	std::cout << "Used float " << secondNumber << std::endl;
	std::cout << "Used float " << fourthNumber << std::endl;

    return 0;
}

