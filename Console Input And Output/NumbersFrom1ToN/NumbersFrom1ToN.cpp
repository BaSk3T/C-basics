#include "stdafx.h"
#include <iostream>

//Write a program that reads an integer number n from the console and prints all the numbers in the interval[1..n], each on a single line.

int main()
{
	int number;

	std::cout << "Enter number: ";
	std::cin >> number;

	for (int i = 1; i <= number; i++) {
		std::cout << i << std::endl;
	}

    return 0;
}

