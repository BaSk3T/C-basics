#include "stdafx.h"
#include <iostream>

using namespace std;

//Write an expression that calculates trapezoid's area by given sides a and b and height h.

int main()
{
	float sideA = 0.222;
	float sideB = 0.333;
	float height = 0.555;

	float area = height * ((sideA + sideB) / 2);

	cout << "Trapezoid with a: " << sideA << " b: " << sideB << " and hegiht: " << height << std::endl;

	cout << "Area: " << area << std::endl;

    return 0;
}

