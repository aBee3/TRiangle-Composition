#ifndef TRIANGLE_H
#define TRIANGLE_H
using namespace std;
#include "point.h"

class Triangle{
    private:
    Point p1;
    Point p2;
    Point p3;
    double a;
    double b;
    double c;
    double area;
    double s;

    public:
    Triangle(Point _p1, Point _p2, Point _p3);
    float findArea();  
};
#endif