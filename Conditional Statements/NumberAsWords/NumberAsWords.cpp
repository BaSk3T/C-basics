#include "stdafx.h"
#include <iostream>
#include <string>

//Write a program that converts a number in the range[0…999] to words, corresponding to the English pronunciation

int main() {
	std::string number;

	std::cout << "Enter number: ";
	std::getline(std::cin, number);

	std::string result;

	if (number.size() == 3)
	{
		switch (number[0])
		{
		case '1':
			result = "one hundred";
			break;
		case '2':
			result = "two hundred";
			break;
		case '3':
			result = "three hundred";
			break;
		case '4':
			result = "four hundred";
			break;
		case '5':
			result = "five hundred";
			break;
		case '6':
			result = "six hundred";
			break;
		case '7':
			result = "seven hundred";
			break;
		case '8':
			result = "eight hundred";
			break;
		case '9':
			result = "nine hundred";
			break;
		default:
			break;
		}
		if (number[2] != '0')
		{
			result += " and ";
		}
		switch (number[1])
		{
		case '0':
			result += "";
			break;
		case '1':
			switch (number[2])
			{
			case '1':
				result += "eleven";
				break;
			case '2':
				result += "twelve";
				break;
			case '3':
				result += "thirteen";
				break;
			case '4':
				result += "fourteen";
				break;
			case '5':
				result += "fifteen";
				break;
			case '6':
				result += "sixteen";
				break;
			case '7':
				result += "seventeen";
				break;
			case '8':
				result += "eighteen";
				break;
			case '9':
				result += "nineteen";
				break;
			default:
				break;
			}
			break;
		case '2':
			result += "twenty ";
			break;
		case '3':
			result += "thirty ";
			break;
		case '4':
			result += "forty ";
			break;
		case '5':
			result += "fifty ";
			break;
		case '6':
			result += "sixty ";
			break;
		case '7':
			result += "seventy ";
			break;
		case '8':
			result += "eighty ";
			break;
		case '9':
			result += "ninety ";
			break;
		default:
			break;
		}
		if (number[1] != '1')
		{
			switch (number[2])
			{

			case '0':
				result += "";
				break;
			case '1':
				result += "one";
				break;
			case '2':
				result += "two";
				break;
			case '3':
				result += "three";
				break;
			case '4':
				result += "four";
				break;
			case '5':
				result += "five";
				break;
			case '6':
				result += "six";
				break;
			case '7':
				result += "seven";
				break;
			case '8':
				result += "eight";
				break;
			case '9':
				result += "nine";
				break;
			default:
				break;

			}
		}
	}
	if (number.size() == 2)
	{
		switch (number[0])
		{
		case '0':
			result += "";
			break;
		case '1':
			switch (number[1])
			{
			case '0':
				result += "ten";
				break;
			case '1':
				result += "eleven";
				break;
			case '2':
				result += "twelve";
				break;
			case '3':
				result += "thirteen";
				break;
			case '4':
				result += "fourteen";
				break;
			case '5':
				result += "fifteen";
				break;
			case '6':
				result += "sixteen";
				break;
			case '7':
				result += "seventeen";
				break;
			case '8':
				result += "eighteen";
				break;
			case '9':
				result += "nineteen";
				break;
			default:
				break;
			}
			break;
		case '2':
			result += "twenty ";
			break;
		case '3':
			result += "thirty ";
			break;
		case '4':
			result += "forty ";
			break;
		case '5':
			result += "fifty ";
			break;
		case '6':
			result += "sixty ";
			break;
		case '7':
			result += "seventy ";
			break;
		case '8':
			result += "eighty ";
			break;
		case '9':
			result += "ninety ";
			break;
		default:
			break;
		}
		if (number[0] != '1')
		{
			switch (number[1])
			{

			case '0':
				result += "";
				break;
			case '1':
				result += "one";
				break;
			case '2':
				result += "two";
				break;
			case '3':
				result += "three";
				break;
			case '4':
				result += "four";
				break;
			case '5':
				result += "five";
				break;
			case '6':
				result += "six";
				break;
			case '7':
				result += "seven";
				break;
			case '8':
				result += "eight";
				break;
			case '9':
				result += "nine";
				break;
			default:
				break;

			}
		}
	}
	if (number.size() == 1)
	{
		switch (number[0])
		{
		case '0':
			result += "zero";
			break;
		case '1':
			result += "one";
			break;
		case '2':
			result += "two";
			break;
		case '3':
			result += "three";
			break;
		case '4':
			result += "four";
			break;
		case '5':
			result += "five";
			break;
		case '6':
			result += "six";
			break;
		case '7':
			result += "seven";
			break;
		case '8':
			result += "eight";
			break;
		case '9':
			result += "nine";
			break;
		default:
			break;
		}
	}
	
	std::cout << result << std::endl;
	
    return 0;
}