#include "stdafx.h"
#include <iostream>
#include <string>

//Declare two string variables and assign them with following value : The "use" of quotations causes difficulties.
//Do the above in two different ways - with and without using quoted strings.
//Print the variables to ensure that their value was correctly defined.

int main() {
	std::string version1 = "The \"use\" of quotations causes difficulties.";
	std::string version2 = R"(The "use" of quotations causes difficulties.)";
	
	std::cout << version1 << std::endl;
	std::cout << version2 << std::endl;

    return 0;
}

