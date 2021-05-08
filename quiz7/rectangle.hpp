#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "coordinate.hpp"

class Rectangle
{
private:
    Coordinate lb;
    Coordinate rt;
    Coordinate center;
    double area;

public:
    Rectangle();
    Rectangle(Coordinate lbval, Coordinate rtval);
    Coordinate getLB() const;
    Coordinate getRT() const;
    double getArea();
    Coordinate getCenter();
    void setLBRT(Coordinate lbval, Coordinate rtval);
    void printRectangle() const;
};

#endif