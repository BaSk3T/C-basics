#include "stdafx.h"
#include <iostream>

using namespace std;

//Write an expression that checks for given point(x, y) if it is within the circle K({ 1, 1 }, 1.5)
//and out of the rectangle R(top = 1, left = -1, width = 6, height = 2).

int main()
{
	float x = -100;
	float y = -100;

	bool isInsideCircle = (x - 1) * (x - 1) + (y - 1) * (y - 1) <= (1.5 * 1.5);
	bool isOutsideRectangle = x > 1 || x < 6 && y > -1 || y < 2;

	if (x == 0 || y == 0)
	{
		cout << "Not inside" << std::endl;
	}
	else if (isInsideCircle == true && isOutsideRectangle == true)
	{
		cout << "Inside" << std::endl;
	}
	else
	{
		cout << "Not inside" << std::endl;
	}

    return 0;
}

