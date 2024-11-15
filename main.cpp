#include "triangle.h"
#include "point.h"
#include "triangle.cpp"
#include "point.cpp"
using namespace std;


int main(){
    
    Point _p1(0.0,0.0);
    Point _p2(2.0,0.0);
    Point _p3(2.0,3.0);
    Triangle triangle1(_p1, _p2, _p3);
    float areaw = triangle1.findArea();
    float prueba  =_p2.getDistance(_p1);
    std::cout <<"El area del triangulo de los puntos es "<<areaw << endl;
    return 0;
}
