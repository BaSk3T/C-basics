#include "stdafx.h"
#include "Call.h"


Call::Call(std::string dialledPhone, short duration)
{
	this->dateTime = std::time(0);
	this->dialledPhone = dialledPhone;
	this->duration = duration;
}


Call::~Call()
{
}

std::string Call::getDialledPhone() const
{
	return this->dialledPhone;
}

void Call::setDialledPhone(std::string value)
{
	this->dialledPhone = value;
}

short Call::getDuration() const
{
	return this->duration;
}

void Call::setDuration(short value)
{
	if (value < 0) {
		value = 0;
	}

	this->duration = value;
}

char* Call::getDateTime() const
{
	return ctime(&this->dateTime);
}

std::ostream &operator<<(std::ostream &os, const Call &obj)
{
	os << "Dialled phone: " + obj.getDialledPhone() << std::endl;
	os << "Call duration: ";
	os << obj.getDuration() << std::endl;
	os << "Call date: ";
	os << obj.getDateTime();

	return os;
}