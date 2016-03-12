#include "stdafx.h"
#include <iostream>

//Write an expression that checks if given point(x, y) is inside a circle K({ 0, 0 }, 2).

int main() {
	float x = 1;
	float y = 1.655;
	float r = 2;

	std::cout << "Point x: " << x << " and y: " << y << " is inside the circleK({ 0, 0 }, 2): " << std::endl;

	if (x * x + y * y <= r * r) {
		std::cout << "true" << std::endl;
	}
	else {
		std::cout << "false" << std::endl;
	}

    return 0;
}

