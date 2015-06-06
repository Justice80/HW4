#include <iostream>
#include <string>
#include "rect.h"

using namespace std;

Rectangle::Rectangle() {
	x = 0;
	y = 0;
	height = 1;
	width = 1;
}

Rectangle::Rectangle(double newX, double newY, double newHeight, double newWidth) {
	x = newX;
	y = newY;
	width = newWidth;
	height = newHeight;
}

const double Rectangle::getArea() const { return (getHeight() *getWidth()); }

const double Rectangle::getPerimiter() { return (getHeight() *getWidth()) * 2; }

bool Rectangle::contains(double x, double y) const {
	if (y < height && x < width)
		return true;
	else
		return false;
}

bool Rectangle::contains(const Rectangle &r) const {
	if (r.getHeight() < height && r.getWidth() < width)
		return true;
	else
		return false;
}

bool Rectangle::overlaps(const Rectangle &r) const {
	if (r.getHeight() < height || r.getWidth() < width)
		return true;
	else
		return false;
}