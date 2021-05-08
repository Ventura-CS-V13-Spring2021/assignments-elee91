#include "rectangle.hpp"
#include <iostream>
using namespace std;

Rectangle::Rectangle() : lb(0.0), rt(0.0)
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
	return 
}
Coordinate Rectangle::getCenter()
{
	
}
void Rectangle::setLBRT(Coordinate lbval, Coordinate rtval)
{
	
}
void Rectangle::printRectangle() const
{
	
}