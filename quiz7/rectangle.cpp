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
	return (rt.getX() - lb.getX()) * (rt.getY() - lb.getY());
}
Coordinate Rectangle::getCenter()
{
	double centX, centY;
	centX = lb.getX() + (rt.getX()-lb.getX()) / 2;
	centY = lb.getY() + (rt.getY()-lb.getY()) / 2;
	Rectangle.setXY(centX, centY);
}
void Rectangle::setLBRT(Coordinate lbval, Coordinate rtval)
{
	
}
void Rectangle::printRectangle() const
{
	
}