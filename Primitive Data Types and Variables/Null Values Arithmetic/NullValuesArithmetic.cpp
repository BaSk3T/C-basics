#include "stdafx.h"
#include <iostream>

//Create a program that assigns null values to an integer and to a double variable.
//Try to print these variables at the console.
//Try to add some number or the null literal to these variables and print the result.

int main() {
	int firstNumber = NULL;
	double secondNumber = NULL;

	std::cout << "First number: " << firstNumber << std::endl;
	std::cout << "Second number: " << secondNumber << std::endl;

	firstNumber += 10;
	secondNumber += 0.5;

	std::cout << "First number: " << firstNumber << std::endl;
	std::cout << "Second number: " << secondNumber << std::endl;

    return 0;
}

