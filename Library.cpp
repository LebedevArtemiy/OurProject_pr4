#include "Library.h"
#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
using namespace std;
Paralelogram::Paralelogram()
{
}
void Paralelogram::set(const float & osnovanie, const float & bok_storona, const float & visota)
{
   this->osnovanie = osnovanie;
   this->bok_storona = bok_storona;
   this->visota = visota;
   this->P = 2 * (osnovanie + bok_storona);
   this->k1 = ((acos(((visota*visota)+(bok_storona*bok_storona)-(bok_storona*bok_storona-visota*visota))/(2.*visota*bok_storona)))*180)/M_PI;
   this->k2 = 180-k1;

}

float Paralelogram::getP() const
{
    return P;
}
float Paralelogram::getS() const
{
    return osnovanie * visota;
}
float Paralelogram::getK1() const
{
    return  k1;
}
float Paralelogram::getK2() const
{
    return  k2;
}

