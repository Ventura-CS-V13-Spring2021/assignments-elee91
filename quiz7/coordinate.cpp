#include "coordinate.hpp"
#include <iostream>
using namespace std;

Coordinate::Coordinate() : x(0), y(0)
{
}
Coordinate::Coordinate(double xval, double yval) : x(xval), y(yval)
{
}
int Coordinate::getX() const
{
	return x;
}
int Coordinate::getY() const
{
	return y;
}
void Coordinate::setXY(double xval, double yval)
{
	x = xval;
	y = yval;
}
void Coordinate::printXY() const
{
	cout << "( " << x << ", " << y << ")";
}