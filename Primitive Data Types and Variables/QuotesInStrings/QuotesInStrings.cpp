#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

//Declare two string variables and assign them with following value : The "use" of quotations causes difficulties.
//Do the above in two different ways - with and without using quoted strings.
//Print the variables to ensure that their value was correctly defined.

int main()
{
	string version1 = "The \"use\" of quotations causes difficulties.";
	string version2 = R"(The "use" of quotations causes difficulties.)";
	
	cout << version1 << std::endl;
	cout << version2 << std::endl;

    return 0;
}

