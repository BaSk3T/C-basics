#include "stdafx.h"
#include <iostream>

using namespace std;

//Write an expression that calculates rectangle’s perimeter and area by given width and height.

int main()
{
	float width = 5;
	float height = 5;

	float perimeter = (2 * width) + (2 * height);
	float area = width * height;

	cout << "Rectangle width: " << width << " height: " << height << std::endl;

	cout << "Perimeter: " << perimeter << std::endl;
	cout << "Area: " << area << std::endl;

    return 0;
}

