#include "stdafx.h"
#include <iostream>

//Write a program that finds the biggest of five numbers by using only five if statements.

int main()
{
	float firstNumber;
	float secondNumber;
	float thirdNumber;
	float fourthNumber;
	float fifthNumber;
	float biggestNumber;

	std::cout << "Enter first number: ";
	std::cin >> firstNumber;

	std::cout << "Enter second number: ";
	std::cin >> secondNumber;

	std::cout << "Enter third number: ";
	std::cin >> thirdNumber;

	std::cout << "Enter fourth number: ";
	std::cin >> fourthNumber;

	std::cout << "Enter fifth number: ";
	std::cin >> fifthNumber;


	if (firstNumber >= secondNumber && firstNumber >= thirdNumber && firstNumber >= fourthNumber && firstNumber >= fifthNumber) {
		biggestNumber = firstNumber;
	}
	else if (secondNumber >= firstNumber && secondNumber >= thirdNumber && secondNumber >= fourthNumber && secondNumber >= fifthNumber) {
		biggestNumber = secondNumber;
	}
	else if (thirdNumber >= firstNumber && thirdNumber >= secondNumber && thirdNumber >= fourthNumber && thirdNumber >= fifthNumber) {
		biggestNumber = thirdNumber;
	}
	else if (fourthNumber >= firstNumber && fourthNumber >= secondNumber && fourthNumber >= thirdNumber && fourthNumber >= fifthNumber) {
		biggestNumber = fourthNumber;
	}
	else if (fifthNumber >= firstNumber && fifthNumber >= secondNumber && fifthNumber >= thirdNumber && fifthNumber >= fourthNumber) {
		biggestNumber = fifthNumber;
	}

	std::cout << "Biggest number: " << biggestNumber << std::endl;

    return 0;
}

