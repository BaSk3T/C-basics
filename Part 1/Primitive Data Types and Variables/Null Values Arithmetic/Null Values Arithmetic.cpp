#include "stdafx.h"
#include <iostream>

using namespace std;

//Create a program that assigns null values to an integer and to a double variable.
//Try to print these variables at the console.
//Try to add some number or the null literal to these variables and print the result.

int main()
{
	int firstNumber = NULL;
	double secondNumber = NULL;

	cout << "First number: " << firstNumber << std::endl;
	cout << "Second number: " << secondNumber << std::endl;

	firstNumber += 10;
	secondNumber += 0.5;

	cout << "First number: " << firstNumber << std::endl;
	cout << "Second number: " << secondNumber << std::endl;

    return 0;
}

