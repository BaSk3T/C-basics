#include "stdafx.h"
#include "Battery.h"

Battery::Battery(std::string model, BatteryType batteryType)
{
	this->init(model, batteryType);
}

Battery::Battery(std::string model, BatteryType batteryType, int hoursIdle, int hoursTalk)
{
	this->init(model, batteryType);
	this->setHoursIdle(hoursIdle);
	this->setHoursTalk(hoursTalk);
}

Battery::~Battery()
{
}

void Battery::init(std::string model, BatteryType batteryType)
{
	this->hoursIdle = 0;
	this->hoursTalk = 0;

	this->model = model;
	this->batteryType = batteryType;
}

std::string Battery::getModel() const
{
	return this->model;
}

void Battery::setModel(const std::string& value)
{
	this->model = value;
}

BatteryType Battery::getBatteryType() const
{
	return this->batteryType;
}

void Battery::setBatteryType(BatteryType value)
{
	this->batteryType = value;
}

int Battery::getHoursIdle() const
{
	return this->hoursIdle;
}

void Battery::setHoursIdle(int value)
{
	if (value < 0) {
		value = 0;
	}

	this->hoursIdle = value;
}

int Battery::getHoursTalk() const
{
	return this->hoursTalk;
}

void Battery::setHoursTalk(int value)
{
	if (value < 0) {
		value = 0;
	}

	this->hoursTalk = value;
}

std::ostream &operator<<(std::ostream &os, const Battery &obj)
{
	os << std::endl;
	os << "Model: " << obj.getModel() << std::endl;
	os << "Battery Type: " << obj.getBatteryType() << std::endl;
	os << "Hours idle: " << obj.getHoursIdle() << std::endl;
	os << "Hours talk: " << obj.getHoursTalk();

	return os;
}