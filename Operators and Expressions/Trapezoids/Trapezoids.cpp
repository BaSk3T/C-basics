#include "stdafx.h"
#include <iostream>

//Write an expression that calculates trapezoid's area by given sides a and b and height h.

int main() {
	float sideA = 0.222;
	float sideB = 0.333;
	float height = 0.555;

	float area = height * ((sideA + sideB) / 2);

	std::cout << "Trapezoid with a: " << sideA << " b: " << sideB << " and hegiht: " << height << std::endl;

	std::cout << "Area: " << area << std::endl;

    return 0;
}

