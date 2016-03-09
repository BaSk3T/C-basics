#include "stdafx.h"
#include <iostream>
#include <bitset>
#include <sstream>
#include <iomanip>

//Write a program that reads 3 numbers:
//integer a(0 <= a <= 500)
//floating - point b
//floating - point c
//The program then prints them in 4 virtual columns on the console.Each column should have a width of 10 characters.
//The number a should be printed in hexadecimal, left aligned
//Then the number a should be printed in binary form, padded with zeroes
//The number b should be printed with 2 digits after the decimal point, right aligned
//The number c should be printed with 3 digits after the decimal point, left aligned.

int main()
{
	int a;
	float b;
	float c;

	std::stringstream hexadecimalOfA;

	std::cout << "Enter number for \"a\": ";
	std::cin >> a;

	std::cout << "Enter number for \"b\": ";
	std::cin >> b;

	std::cout << "Enter number for \"c\": ";
	std::cin >> c;

	std::bitset<10> binaryOfA(a);
	hexadecimalOfA << std::hex << a;

	std::cout << hexadecimalOfA.str() << "|" << binaryOfA << "|" << std::setprecision(2) << std::fixed << b << "|" << std::setprecision(3) << std::fixed << c <<std::endl;

    return 0;
}

