#include "primoygolnik.h"
#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
using namespace std;
primoygolnik::primoygolnik()
{
}
 void primoygolnik::set(const double &side1, const double &side2, const double &side3, const double &side4)
{
   this->side1 = side1;
   this->side2 = side1;
   this->side3 = side3;
   this->side4 = side3;
   this->perimeter = (side1+side2)*2;
   this->angle1 =angle1=angle2=angle3=angle4=90;


}
double primoygolnik::getperimeter() const
{
    return perimeter;
}
double primoygolnik::getarea() const
{
    return side1*side3;
}




