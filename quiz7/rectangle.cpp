#include "rectangle.hpp"
#include <iostream>
using namespace std;

Rectangle::Rectangle() : lb(0.0, 0.0), rt(0.0, 0.0), center(0.0, 0.0), area(0.0)
{
}
Rectangle::Rectangle(Coordinate lbval, Coordinate rtval) : lb(lbval), rt(rtval)
{
	getArea();
	getCenter();
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
	centX = lb.getX() + (rt.getX()-lb.getX()) / 2.0;
	centY = lb.getY() + (rt.getY()-lb.getY()) / 2.0;
	center.setXY(centX, centY);
	return center;
}
void Rectangle::setLBRT(Coordinate lbval, Coordinate rtval)
{
	lb = lbval;
	rt = rtval;
	getCenter();
	getArea();
}
void Rectangle::printRectangle() const
{
	cout << " ---------------------- " << endl;
	cout << "| Rectangle properties |" << endl;
	cout << " ---------------------- " << endl;
	cout << "Left-bottom coordinate: ";
	lb.printXY();
	cout << endl;
	cout << "Right-top coordinate: ";
	rt.printXY();
	cout << endl;
	cout << "Area: " << area << " units" << endl;
	cout << "Center: ";
	center.printXY();
	cout << endl;
}