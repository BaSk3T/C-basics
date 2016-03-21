#include "stdafx.h"
#include <iostream>

//The gravitational field of the Moon is approximately 17 % of that on the Earth.
//Write a program that calculates the weight of a man on the moon by a given weight on the Earth.

int main()
{
	float manWeightOnEarth = 86;

	// In percent
	int moonGravitationalFieldComparedToEarth = 17;
	float manWeightOnMoon = manWeightOnEarth * moonGravitationalFieldComparedToEarth / 100;

	std::cout << "Weight on moon: " << manWeightOnMoon << std::endl;

    return 0;
}

