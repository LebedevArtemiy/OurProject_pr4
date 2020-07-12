#include "trapezoid.h"

Trapezoid::Trapezoid()
{
}
 void Trapezoid::set(const double &a, const double &b, const double &c, const double &d, const double &h)
 {
     this->a =a;
     this->b =b;
     this->c =c;
     this->d =d;
     this->h =h;
     this->P = a+b+c+d;
 }
 double Trapezoid::getP() const
 {
     return P;
 }
 double Trapezoid::getS() const
 {
     return ((a+b)/2)*h ;
 }
 double Trapezoid::geta() const
 {
     return a;
 }
 double Trapezoid::getb() const
 {
     return b;
 }
 double Trapezoid::getc() const
 {
     return c;
 }
 double Trapezoid::getd() const
 {
     return d;
 }
 double Trapezoid::geth() const
 {
     return h;
 }
