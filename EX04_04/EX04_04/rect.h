#ifndef RECT_H
#define RECT_H
#include <iostream>
#include <string>

using namespace std;

class Rectangle{
private:
	double x;
	double y;
	double height;
	double width;
public:
	Rectangle();
	Rectangle(double newX, double newY, double newHeight, double newWidth);

	double getX() const { return x; }
	void setX(double newX) {
		x = newX;
	}

	double getY() const { return y; }
	void setY(double newY) {
		y = newY;
	}

	const double getHeight() const { return height; }
	void setHeight(double newHeight) {
		height = newHeight;
	}

	const double getWidth() const { return width; }
	void setWidth(double newWidth) {
		width = newWidth;
	}

	const double getArea() const;
	const double getPerimiter();
	bool contains(double x, double y) const;
	bool contains(const Rectangle &r) const;
	bool overlaps(const Rectangle &r) const;
};

#endif