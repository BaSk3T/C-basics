#include "stdafx.h"
#include <iostream>

//Write an expression that calculates rectangle’s perimeter and area by given width and height.

int main() {
	float width = 5;
	float height = 5;

	float perimeter = (2 * width) + (2 * height);
	float area = width * height;

	std::cout << "Rectangle width: " << width << " height: " << height << std::endl;

	std::cout << "Perimeter: " << perimeter << std::endl;
	std::cout << "Area: " << area << std::endl;

    return 0;
}

