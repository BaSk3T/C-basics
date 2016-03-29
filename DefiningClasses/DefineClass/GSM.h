#include <string>
#include <vector>
#include "Battery.h"
#include "Display.h"
#include "Call.h"

#pragma once

class GSM
{
private:
	std::string model;
	std::string manufacturer;
	float price;
	std::string owner;
	Battery *battery;
	Display *display;
	std::vector<Call> calls;

	void init(std::string model, std::string manufacturer);

public:
	static GSM *iPhone4s;

	GSM(std::string model, std::string manufacturer);
	GSM(std::string model, std::string manufacturer, float price, std::string owner, Battery *battery, Display *display);
	~GSM();

	std::string getModel() const;
	void setModel(std::string value);

	std::string getManufacturer() const;
	void setManufacturer(std::string value);

	float getPrice() const;
	void setPrice(float value);

	std::string getOwner() const;
	void setOwner(std::string value);

	Battery *getBattery() const;
	void setBattery(Battery *value);

	Display *getDisplay() const;
	void setDisplay(Display *value);

	std::vector<Call> getCallHistory() const;
	void addCall(Call call);
	void deleteCall(int index);
	void clearHistory();
	int calculatePriceOfCalls(int pricePerMinute);

	friend std::ostream& operator<<(std::ostream &os, const GSM &obj);
};