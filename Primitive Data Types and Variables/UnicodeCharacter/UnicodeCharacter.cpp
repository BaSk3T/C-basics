#include "stdafx.h"
#include <iostream>

//Declare a character variable and assign it with the symbol that has Unicode code 42 (decimal) using the \u00XX syntax, and then print it.

int main() {
	char *asterisk = "\u002A";

	std::cout << asterisk << std::endl;

    return 0;
}

