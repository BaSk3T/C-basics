#include "stdafx.h"
#include <iostream>
#include <iomanip>

#define _USE_MATH_DEFINES
#include <math.h>

//Write a program that reads the radius r of a circle and prints its perimeter and area formatted with 2 digits after the decimal point.

int main()
{
	float radius;
	std::cout << "Radius: ";
	std::cin >> radius;

	float perimeter = 2 * M_PI * radius;
	float area = M_PI * radius * radius;
	
	std::cout << std::setprecision(2) << std::fixed << "Perimeter: " << perimeter << std::endl;
	std::cout << std::setprecision(2) << std::fixed << "Area: " << area << std::endl;

    return 0;
}

