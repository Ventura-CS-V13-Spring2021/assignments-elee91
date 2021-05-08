#include "rectangle.hpp"
#include <iostream>
using namespace std;

Rectangle::Rectangle() : lb(0.0, 0.0), rt(0.0, 0.0)
{
}
Rectangle::Rectangle(Coordinate lbval, Coordinate rtval) : lb(lbval), rt(rtval)
{
}
Coordinate Rectangle::getLB() const
{
	return lb;
}
Coordinate Rectangle::getRT() const
{
	return rt;
}
double Rectangle::getArea()
{
	area = (rt.getX() - lb.getX()) * (rt.getY() - lb.getY());
	return area;
}
Coordinate Rectangle::getCenter()
{
	double centX, centY;
	centX = lb.getX() + (rt.getX()-lb.getX()) / 2;
	centY = lb.getY() + (rt.getY()-lb.getY()) / 2;
	center = Rectangle.setXY(centX, centY);
	return center;
}
void Rectangle::setLBRT(Coordinate lbval, Coordinate rtval)
{
	lb = lbval;
	rt = rtval;
}
void Rectangle::printRectangle() const
{
	cout << "Left-bottom coordinate: ";
	getLB();
	cout << endl;
	cout << "Right-top coordinate: ";
	getRT();
	cout << endl;
	cout << "Area: ";
	getArea();
	cout << endl;
	cout << "Center: ";
	getCenter();
	cout << endl;
}