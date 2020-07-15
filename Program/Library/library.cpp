#include "library.h"
#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
using namespace std;
Treygol::Treygol()
{
}
void Treygol::set(const double  &a, const double  &b, const double  &c)
{
   this->a = a;
   this->b = b;
   this->c = c;
   this->P = a + b + c;
   this->k1 = ((acos(((a*a)+(b*b)-(c*c))/(2.*a*b)))*180)/M_PI;
   this->k2 = ((acos(((a*a)+(c*c)-(b*b))/(2.*a*c)))*180)/M_PI;
   this->k3 = ((acos(((c*c)+(b*b)-(a*a))/(2.*c*b)))*180)/M_PI;
}
double Treygol::getA() const
{
    return a;
}
double Treygol::getB() const
{
    return b;
}
double Treygol::getC() const
{
    return c;
}
double Treygol::getP() const
{
    return P;
}
double Treygol::getS() const
{
    return sqrt((P/2.)*((P/2.)-a)*((P/2.)-b)*((P/2.)-c));
}
double Treygol::getK1() const
{
    return  k1;
}
double Treygol::getK2() const
{
    return  k2;
}
double Treygol::getK3() const
{
    return  k3;
}

Rectangle::Rectangle()
{
}
 void Rectangle::set(const double &side1, const double &side2)
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


