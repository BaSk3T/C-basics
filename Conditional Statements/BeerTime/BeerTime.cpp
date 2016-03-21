#include "stdafx.h"
#include <iostream>
#include <string>
#include <sstream>
#include <ctime>
#include <vector>

//A beer time is after 1:00 PM and before 3 : 00 AM.
//Write a program that enters a time in format “hh : mm tt”(an hour in range[01...12], a minute in range[00…59] and AM / PM designator)
//and prints beer time or non - beer time according to the definition above or invalid time if the time cannot be parsed.Note :
//You may need to learn how to parse dates and times.

int main()
{
	std::string time;
	std::cout << "Enter time: ";
	std::cin >> time;

	std::string designator = time.substr(time.size() - 2, 2);
	time.pop_back();
	time.pop_back();
	time.pop_back();

	std::stringstream stringStream(time);

	std::string segment;
	std::vector<std::string> seglist;

	while (std::getline(stringStream, segment, ':')) {
		seglist.push_back(segment);
	}

	int hours = std::stoi(seglist[0]);

	if (hours > 12) {
		std::cout << "Wrong input!" << std::endl;
		return 0;
	}

	if (designator == "PM" || designator == "PM") {
		hours += 12;
	}

	if ((0 <= hours && hours < 3) || (13 <= hours && hours <= 24)) {
		std::cout << "Beer time!" << std::endl;
	}
	else {
		std::cout << "Non - beer  time!" << std::endl;
	}

	return 0;
}