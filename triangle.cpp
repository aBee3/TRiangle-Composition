#include "triangle.h"
#include "point.h"


#include <cmath>


Triangle::Triangle(Point _p1, Point _p2, Point _p3){
    p1 = _p1;
    p2 =_p2;
    p3 =_p3;
}

float Triangle::findArea(){
    float number = 5.4;
    float a= p1.getDistance(p2);
    float b = p2.getDistance(p3);
    float c = p3.getDistance(p1);
    float s = (a+b+c)/(2.0);
    float area = sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}