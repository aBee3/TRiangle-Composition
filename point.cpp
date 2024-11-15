#include "point.h"
#include "cmath"
#include <iostream>
using namespace std;
Point::Point(){
    x = 0.0;
    y=0.0;
}
Point::Point(float _x, float _y){
    x= _x;
    y=_y;
};

void Point::setY(float _y)
{
    y=_y;
}
void Point::setX(float _x){
    x= _x;
}
float Point::getY(){
    return y;
}
float Point::getX(){
    return x;
}

float Point::getDistance(Point Point2){
    int a = abs(getX() - Point2.getX());
    int b = abs(getY() - Point2.getY());
    float d = sqrt(pow(a, 2.0) + pow(b, 2.0));
    return d;
}
