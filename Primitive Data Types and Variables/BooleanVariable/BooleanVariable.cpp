#include "stdafx.h"
#include <iostream>
#include <string>

//Declare a Boolean variable called isFemale and assign an appropriate value corresponding to your gender.
//Print it on the console.

int main() {
	bool isFemale = false;
	std::string isFemaleAsText = isFemale ? "yes" : "no";

	std::cout << "Gender is female: " << isFemaleAsText << std::endl;

    return 0;
}

