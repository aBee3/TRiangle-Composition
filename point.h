#ifndef POINT_H
#define POINT_H
#include <iostream>

class Point{
    private:
    float x;
    float y;

    public: 
    Point();
    Point(float, float);
    void setX(float);
    void setY(float);
    float getX();
    float getY();
    float getDistance(Point Point2);
};

#endif