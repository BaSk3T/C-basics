#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

//A marketing company wants to keep record of its employees.Each record would have the following characteristics:
//
//First name
//Last name
//Age(0...100)
//Gender(m or f)
//Personal ID number(e.g. 8306112507)
//Unique employee number(27560000…27569999)
//Declare the variables needed to keep the information for a single employee using appropriate primitive data types.Use descriptive names.
//Print the data at the console.

int main()
{
	string firstName = "James";
	string lastName = "Raynor";
	short age = 37;
	char gender = 'm';
	string personalID = "8306112507";
	string employeeNumber = "27560000";

	cout << "First name: " << firstName << std::endl;
	cout << "Last name: " << lastName << std::endl;
	cout << "Age: " << age << std::endl;
	cout << "Gender: " << gender << std::endl;
	cout << "Personal ID: " << personalID << std::endl;
	cout << "Employee number: " << employeeNumber << std::endl;

    return 0;
}

