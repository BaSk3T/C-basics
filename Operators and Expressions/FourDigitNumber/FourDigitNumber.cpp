#include "stdafx.h"
#include <iostream>
#include <string>

//Write a program that takes as input a four - digit number in format abcd(e.g. 2011) and performs the following :
//Calculates the sum of the digits(in our example 2 + 0 + 1 + 1 = 4).
//Prints on the console the number in reversed order : dcba(in our example 1102).
//Puts the last digit in the first position : dabc(in our example 1201).
//Exchanges the second and the third digits : acbd(in our example 2101).
//The number has always exactly 4 digits and cannot start with 0.

int main() {
	int number = 9876;
	short firstDigit = number % 10;
	number /= 10;

	short secondDigit = number % 10;
	number /= 10;

	short thirdDigit = number % 10;
	number /= 10;

	short fourthDigit = number % 10;

	short sumOfDigits = firstDigit + secondDigit + thirdDigit + fourthDigit;

	std::string fourthDigitAsText = std::to_string(fourthDigit);
	std::string thirdDigitAsText = std::to_string(thirdDigit);
	std::string secondDigitAsText = std::to_string(secondDigit);
	std::string firstDigitAsText = std::to_string(firstDigit);

	std::string reversed = firstDigitAsText + secondDigitAsText + thirdDigitAsText + fourthDigitAsText;
	std::string lastDigitInFirstPosition = firstDigitAsText + fourthDigitAsText + thirdDigitAsText + secondDigitAsText;
	std::string secondAndThirdDigitExchanged = fourthDigitAsText + secondDigitAsText + thirdDigitAsText + firstDigitAsText;

	std::cout << "Sum of digits: " << sumOfDigits << std::endl;
	std::cout << "Number in reversed order: " << reversed << std::endl;
	std::cout << "Last digit in first position: " << lastDigitInFirstPosition << std::endl;
	std::cout << "Seonc and third digit exchanged: " << secondAndThirdDigitExchanged << std::endl;

    return 0;
}

