#include "stdafx.h"
#include <iostream>
#include <math.h>

//Write a program that reads the coefficients a, b and c of a quadratic equation ax2 + bx + c = 0 and solves it(prints its real roots).

int main()
{
	float a;
	float b;
	float c;

	std::cout << "Enter number for \"a\": ";
	std::cin >> a;

	std::cout << "Enter number for \"b\": ";
	std::cin >> b;

	std::cout << "Enter number for \"c\": ";
	std::cin >> c;

	float discriminant = b * b - (4 * a *c);

	if (discriminant < 0)
	{
		std::cout << "No real roots!" << std::endl;
	}
	else
	{
		float rootOfDiscriminant = std::sqrt(discriminant);
		float root1 = -(b + rootOfDiscriminant) / (2 * a);
		float root2 = -(b - rootOfDiscriminant) / (2 * a);

		std::cout << "Root1: " << root1 << " Root2: " << root2 << std::endl;
	}
	
    return 0;
}

