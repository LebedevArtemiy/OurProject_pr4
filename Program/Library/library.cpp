#include "Library.h"
#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
using namespace std;
Circle::Circle()
{
}
void Circle::set(const double &r)
{
   this->r = r;
   this->S = (M_PI*r*r);
   this->P = (2*M_PI*r);
}
double Circle::getR() const
{
    return r;
}

double Circle::getP() const
{
    return P;
}

double Circle::getS() const
{
    return S;
}

Rectangle::Rectangle()
{
}
 void Rectangle::set(const double &side1, const double &side2,const double &side3,const double &side4)
{
   this->side1 = side1;
   this->side2 = side2;
   this->perimeter = (side1+side2)*2;
   this->area= side1*side2;
   this->angle1 =angle1=angle2=angle3=angle4=90;


}
double Rectangle::getperimeter() const
{
    return perimeter;
}
double Rectangle::getarea() const
{
    return area ;
}
double Rectangle::getside1() const
{
    return side1;
}
double Rectangle::getside2() const
{
    return side2;
}
double Rectangle::getangle() const
{
    return angle1;
}
