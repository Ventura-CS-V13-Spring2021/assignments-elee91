#ifndef COORDINATE_H
#define COORDINATE_H
class Coordinate
{
private:
    double x;
    double y;

public:
    Coordinate();
    Coordinate(double xval, double yval);
    int getX() const;
    int getY() const;
    void setXY(double xval, double yval);
    void printXY() const;
};

#endif