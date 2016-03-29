#include "stdafx.h"
#include "Display.h"

Display::Display(double size, int numberOfColors)
{
	this->size = 0;
	this->numberOfColors = 0;

	this->setSize(size);
	this->setNumberOfColors(numberOfColors);
}

Display::~Display()
{
}

double Display::getSize() const
{
	return this->size;
}

void Display::setSize(double value)
{
	if (value < 0) {
		value = 0;
	}

	this->size = value;
}

int Display::getNumberOfColors() const
{
	return this->numberOfColors;
}

void Display::setNumberOfColors(int value)
{
	if (value < 0) {
		value = 0;
	}

	this->numberOfColors = value;
}

std::ostream &operator<<(std::ostream &os, const Display &obj)
{
	os << std::endl;
	os << "Size: " << obj.getSize() << std::endl;
	os << "Number of colors: " << obj.getNumberOfColors();

	return os;
}