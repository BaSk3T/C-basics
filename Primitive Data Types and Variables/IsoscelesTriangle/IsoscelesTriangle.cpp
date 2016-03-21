#include "stdafx.h"
#include <iostream>

//Write a program that prints an isosceles triangle of 9 copyright symbols ©, something like this:
//©
//
//© ©
//
//©   ©
//
//© © © ©

int main()
{
	char symbol = 0xA9;
	
	std::cout << "   " << symbol << std::endl;
	std::cout << "  " << symbol << " " << symbol << std::endl;
	std::cout << " " << symbol << "   " << symbol << std::endl;
	std::cout << symbol << " " << symbol << " " << symbol << " " << symbol << std::endl;

    return 0;
}

