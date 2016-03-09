#include "stdafx.h"
#include <iostream>

//Write a program that reads a number n and prints on the console the first n members 
//of the Fibonacci sequence(at a single line, separated by comma and space - , ) : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, ….

int main()
{
	int number;

	std::cout << "Enter number of fibonacci sequence numbers to show: ";
	std::cin >> number;

	if (number == 1)
	{
		std::cout << "0";
	}
	else if (number == 2)
	{
		std::cout << "0 1";
	}
	else
	{
		int firstNumber = 0;
		int secondNumber = 1;

		std::cout << "0 1 ";

		for (int i = 0; i < number - 2; i++)
		{
			int number = firstNumber + secondNumber;
			firstNumber = secondNumber;
			secondNumber = number;

			std::cout << number << ", ";
		}
	}
	
	std::cout << std::endl;

    return 0;
}

