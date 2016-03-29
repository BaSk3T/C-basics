#include <string>
#include <ctime>
#include <sstream>

#pragma once
class Call
{
private:
	std::string dialledPhone;
	short duration;
	time_t dateTime;

public:
	Call(std::string dialledPhone, short duration);
	~Call();

	std::string getDialledPhone() const;
	void setDialledPhone(std::string value);

	short getDuration() const;
	void setDuration(short value);

	char* getDateTime() const;

	friend std::ostream &operator<<(std::ostream &os, const Call &obj);
};

