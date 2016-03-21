#include "stdafx.h"
#include <iostream>
#include <string>

//Write a program that, depending on the user’s choice, inputs an int, double or string variable.
//If the variable is int or double, the program increases it by one.
//If the variable is a string, the program appends * at the end.
//Print the result at the console.Use switch statement.

int main()
{
	int type;
	std::string text;

	std::cout << "1 --> int" << std::endl;
	std::cout << "2 --> double" << std::endl;
	std::cout << "3 --> string" << std::endl;

	std::cout << "Please choose a type: ";
	std::cin >> type;

	switch (type) {
	case 1:
		int number;
		std::cout << "Please enter an int: ";
		std::cin >> number;
		number++;

		std::cout << "Int increased: " << number << std::endl;
		break;
	case 2:
		double doubleNumber;
		std::cout << "Please enter a double: ";
		std::cin >> doubleNumber;
		doubleNumber++;

		std::cout << "Double increased: " << doubleNumber << std::endl;
		break;
	case 3:
		std::cout << "Please enter a string: ";
		std::cin >> text;

		text += "*";
		std::cout << "Asterisk added to string: " << text << std::endl;
		break;
	default:
		break;
	}

	return 0;
}

