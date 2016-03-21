#include "stdafx.h"
#include <iostream>

bool isSubsetOfTwoNumbersIsZero(int firstNumber, int secondNumber);
bool isSubsetOfThreeNumbersIsZero(int firstNumber, int secondNumber, int thirdNumber);
bool isSubsetOfFourNumbersIsZero(int firstNumber, int secondNumber, int thirdNumber, int fourthNumber);
bool isSubsetOfFiveNumbersIsZero(int firstNumber, int secondNumber, int thirdNumber, int fourthNumber, int fifthNumbers);

//We are given 5 integer numbers.Write a program that finds all subsets of these numbers whose sum is 0.
//Assume that repeating the same subset several times is not a problem.

int main()
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int subsets = 0;

	std::cout << "Enter \"a\": ";
	std::cin >> a;

	std::cout << "Enter \"b\": ";
	std::cin >> b;

	std::cout << "Enter \"c\": ";
	std::cin >> c;

	std::cout << "Enter \"d\": ";
	std::cin >> d;

	std::cout << "Enter \"e\": ";
	std::cin >> e;

	if (isSubsetOfTwoNumbersIsZero(a, b)) {
		std::cout << a << " " << b << " = 0" << std::endl;
		subsets++;
	}
	if (isSubsetOfTwoNumbersIsZero(a, c)) {
		std::cout << a << " " << c << " = 0" << std::endl;
		subsets++;
	}
	if (isSubsetOfTwoNumbersIsZero(a, d)) {
		std::cout << a << " " << d << " = 0" << std::endl;
		subsets++;
	}
	if (isSubsetOfTwoNumbersIsZero(a, e)) {
		std::cout << a << " " << e << " = 0" << std::endl;
		subsets++;
	}
	if (isSubsetOfTwoNumbersIsZero(b, c)) {
		std::cout << b << " " << c << " = 0" << std::endl;
		subsets++;
	}
	if (isSubsetOfTwoNumbersIsZero(b, d)) {
		std::cout << b << " " << d << " = 0" << std::endl;
		subsets++;
	}
	if (isSubsetOfTwoNumbersIsZero(b, e)) {
		std::cout << b << " " << e << " = 0" << std::endl;
		subsets++;
	}
	if (isSubsetOfTwoNumbersIsZero(c, d)) {
		std::cout << c << " " << d << " = 0" << std::endl;
		subsets++;
	}
	if (isSubsetOfTwoNumbersIsZero(c, e)) {
		std::cout << c << " " << e << " = 0" << std::endl;
		subsets++;
	}
	if (isSubsetOfTwoNumbersIsZero(d, e)) {
		std::cout << d << " " << e << " = 0" << std::endl;
		subsets++;
	}
	if (isSubsetOfThreeNumbersIsZero(a, b, c)) {
		std::cout << a << " " << b << " " << c << " = 0" << std::endl;
		subsets++;
	}
	if (isSubsetOfThreeNumbersIsZero(a, b, d)) {
		std::cout << a << " " << b << " " << d << " = 0" << std::endl;
		subsets++;
	}
	if (isSubsetOfThreeNumbersIsZero(a, b, e)) {
		std::cout << a << " " << b << " " << e << " = 0" << std::endl;
		subsets++;
	}
	if (isSubsetOfThreeNumbersIsZero(a, c, d)) {
		std::cout << a << " " << c << " " << d << " = 0" << std::endl;
		subsets++;
	}
	if (isSubsetOfThreeNumbersIsZero(a, c, e)) {
		std::cout << a << " " << c << " " << e << " = 0" << std::endl;
		subsets++;
	}
	if (isSubsetOfThreeNumbersIsZero(a, d, e)) {
		std::cout << a << " " << d << " " << e << " = 0" << std::endl;
		subsets++;
	}
	if (isSubsetOfThreeNumbersIsZero(b, c, d)) {
		std::cout << b << " " << c << " " << d << " = 0" << std::endl;
		subsets++;
	}
	if (isSubsetOfThreeNumbersIsZero(b, c, e)) {
		std::cout << b << " " << c << " " << e << " = 0" << std::endl;
		subsets++;
	}
	if (isSubsetOfThreeNumbersIsZero(b, d, e)) {
		std::cout << b << " " << d << " " << e << " = 0" << std::endl;
		subsets++;
	}
	if (isSubsetOfThreeNumbersIsZero(c, d, e)) {
		std::cout << c << " " << d << " " << e << " = 0" << std::endl;
		subsets++;
	}
	if (isSubsetOfFourNumbersIsZero(a, b, c, d)) {
		std::cout << a << " " << b << " " << c << " " << d << " = 0" <<  std::endl;
		subsets++;
	}
	if (isSubsetOfFourNumbersIsZero(a, b, d, e)) {
		std::cout << a << " " << b << " " << d << " " << e << " = 0" << std::endl;
		subsets++;
	}
	if (isSubsetOfFourNumbersIsZero(b, c, d, e)) {
		std::cout << b << " " << c << " " << d << " " << e << " = 0" << std::endl;
		subsets++;
	}
	if (isSubsetOfFiveNumbersIsZero(a, b, c, d, e)) {
		std::cout << a << " " << b << " " << c << " " << d << " " << e << " = 0" << std::endl;
		subsets++;
	}

	if (subsets == 0) {
		std::cout << "No zero subset!" << std::endl;
	}

    return 0;
}

bool isSubsetOfTwoNumbersIsZero(int firstNumber, int secondNumber)
{
	int result = firstNumber + secondNumber;

	return result == 0;
}

bool isSubsetOfThreeNumbersIsZero(int firstNumber, int secondNumber, int thirdNumber)
{
	int result = firstNumber + secondNumber + thirdNumber;

	return result == 0;
}

bool isSubsetOfFourNumbersIsZero(int firstNumber, int secondNumber, int thirdNumber, int fourthNumber)
{
	int result = firstNumber + secondNumber + thirdNumber + fourthNumber;

	return result == 0;
}

bool isSubsetOfFiveNumbersIsZero(int firstNumber, int secondNumber, int thirdNumber, int fourthNumber, int fifthNumbers)
{
	int result = firstNumber + secondNumber + thirdNumber + fourthNumber + fifthNumbers;

	return result == 0;
}