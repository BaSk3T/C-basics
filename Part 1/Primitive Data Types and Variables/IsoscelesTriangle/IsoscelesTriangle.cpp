#include "stdafx.h"
#include <iostream>

using namespace std;

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
	
	cout << "   " << symbol << std::endl;
	cout << "  " << symbol << " " << symbol << std::endl;
	cout << " " << symbol << "   " << symbol << std::endl;
	cout << symbol << " " << symbol << " " << symbol << " " << symbol << std::endl;
    return 0;
}

