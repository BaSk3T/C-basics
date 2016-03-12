#include "stdafx.h"
#include <iostream>

//Write a program that gets two numbers from the console and prints the greater of them.
//Try to implement this without if statements.

int main() {
	float firstNumber;
	float secondNumber;

	std::cout << "Enter first number: ";
	std::cin >> firstNumber;

	std::cout << "Enter second number: ";
	std::cin >> secondNumber;


	std::cout << std::fmax(firstNumber, secondNumber) << std::endl;

    return 0;
}

