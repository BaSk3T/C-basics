#include "stdafx.h"
#include <iostream>
#include <string>

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

int main() {
	std::string firstName = "James";
	std::string lastName = "Raynor";
	short age = 37;
	char gender = 'm';
	std::string personalID = "8306112507";
	std::string employeeNumber = "27560000";

	std::cout << "First name: " << firstName << std::endl;
	std::cout << "Last name: " << lastName << std::endl;
	std::cout << "Age: " << age << std::endl;
	std::cout << "Gender: " << gender << std::endl;
	std::cout << "Personal ID: " << personalID << std::endl;
	std::cout << "Employee number: " << employeeNumber << std::endl;

    return 0;
}

