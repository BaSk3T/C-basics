#include "stdafx.h"
#include <iostream>
#include <string>
#include <sstream>

//A company has name, address, phone number, fax number, web site and manager.The manager has first name, last name, age and a phone number.
//Write a program that reads the information about a company and its manager and prints it back on the console.

int main()
{
	std::string companyName;
	std::string companyAddress;
	std::string companyPhoneNumber;
	std::string companyFaxNumber;
	std::string companyWebSite;
	std::string managerFirstName;
	std::string managerLastName;
	std::string managerAgeAsText;
	int managerAge;
	std::string managerPhone;

	std::cout << "Company name: ";
	std::cin >> companyName;

	std::cout << "Company address: ";
	std::cin >> companyAddress;

	std::cout << "Company phone number: ";
	std::cin >> companyPhoneNumber;

	std::cout << "Company fax number: ";
	std::cin >> companyFaxNumber;

	std::cout << "Company web site: ";
	std::cin >> companyWebSite;

	std::cout << "Manager first name: ";
	std::cin >> managerFirstName;

	std::cout << "Manager last name: ";
	std::cin >> managerLastName;

	std::cout << "Manager age: ";
	std::cin >> managerAgeAsText;

	std::stringstream(managerAgeAsText) >> managerAge;

	std::cout << "Manager phone number: ";
	std::cin >> managerPhone;
	
	std::cout << companyName << std::endl;
	std::cout << "Address: " << companyAddress << std::endl;
	std::cout << "Tel. " << companyPhoneNumber << std::endl;
	std::cout << "Fax: " << companyFaxNumber << std::endl;
	std::cout << "Web site: " << companyWebSite << std::endl;
	std::cout << "Manager: " << managerFirstName << " " << managerLastName << "(age: " << managerAge << ", tel. "
		<< managerPhone << ")" << std::endl;

    return 0;
}

