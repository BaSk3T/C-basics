#include "stdafx.h"
#include "GSM.h"

GSM *GSM::iPhone4s = new GSM("iPhone 4s", "Apple", 400, "No owner", new Battery("119-22", BatteryType::LiPo, 200, 14), new Display(3.5, 16000));

GSM::GSM(std::string model, std::string manufacturer)
{
	this->init(model, manufacturer);
}

GSM::GSM(std::string model, std::string manufacturer, float price, std::string owner, Battery *battery, Display *display)
{
	this->init(model, manufacturer);
	this->setPrice(price);
	this->setOwner(owner);
	this->setBattery(battery);
	this->setDisplay(display);
}

GSM::~GSM()
{
	delete this->battery;
	delete this->display;
}

std::string GSM::getModel() const
{
	return this->model;
}

void GSM::setModel(std::string value)
{
	this->model = value;
}

std::string GSM::getManufacturer() const
{
	return this->manufacturer;
}
void GSM::setManufacturer(std::string value)
{
	this->manufacturer = value;
}

float GSM::getPrice() const
{
	return this->price;
}

void GSM::setPrice(float value)
{
	if (value < 0) {
		value = 0;
	}

	this->price = value;
}

std::string GSM::getOwner() const
{
	return this->owner;
}

void GSM::setOwner(std::string value)
{
	this->owner = value;
}

Battery *GSM::getBattery() const
{
	return this->battery;
}

void GSM::setBattery(Battery *value)
{
	this->battery = value;
}

Display *GSM::getDisplay() const
{
	return this->display;
}

void GSM::setDisplay(Display *value)
{
	this->display = value;
}

std::vector<Call> GSM::getCallHistory() const
{
	return this->calls;
}

void GSM::addCall(Call call)
{
	this->calls.push_back(call);
}

void GSM::deleteCall(int index)
{
	this->calls.erase(this->calls.begin() + index);
}

void GSM::clearHistory()
{
	this->calls.clear();
}

int GSM::calculatePriceOfCalls(int pricePerMinute)
{
	int sumOfDuration = 0;

	for (int i = 0; i < this->calls.size(); i++) {
		sumOfDuration += this->calls[i].getDuration();
	}

	int sum = (sumOfDuration / 60) * pricePerMinute;

	return sum;
}

void GSM::init(std::string model, std::string manufacturer)
{
	this->price = 0;
	this->battery = nullptr;
	this->display = nullptr;

	this->setModel(model);
	this->setManufacturer(manufacturer);
}

std::ostream &operator<<(std::ostream &os, const GSM &obj)
{
	bool batteryExists = obj.getBattery() ? true : false;
	bool displayExists = obj.getDisplay() ? true : false;

	os << "Model: " << obj.getModel() << std::endl;
	os << "Manufacturer: " << obj.getManufacturer() << std::endl;
	os << "Price: " << obj.getPrice() << std::endl;
	os << "Owner: " << obj.getOwner() << std::endl;

	if (batteryExists) {
		os << "Battery: " << *obj.getBattery() << std::endl;
	}

	if (displayExists) {
		os << "Display: " << *obj.getDisplay();
	}

	return os;
}