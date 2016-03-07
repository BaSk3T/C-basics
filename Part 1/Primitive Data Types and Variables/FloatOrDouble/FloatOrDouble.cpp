#include "stdafx.h"
#include <iostream>
#include <limits>

using namespace std;

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

	cout.precision(dbl::max_digits10);
	cout << "Used double " << firstNumber << std::endl;
	cout << "Used double " << thirdNumber << std::endl;

	cout.precision(flt::max_digits10);
	cout << "Used float " << secondNumber << std::endl;
	cout << "Used float " << fourthNumber << std::endl;

    return 0;
}

