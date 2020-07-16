#include "library.h"
#define _USE_MATH_DEFINES
#include <cmath>
#include "math.h"
#include <iostream>
using namespace std;
Treygol::Treygol() //Конструктор по умолчанию
{
}
void Treygol::set(const double  &a, const double  &b, const double  &c) // установка всех значений
{
   this->a = a;
   this->b = b;
   this->c = c;
   this->P = a + b + c; // нахождение периметра
   this->S = sqrt((P/2.)*((P/2.)-a)*((P/2.)-b)*((P/2.)-c)); // нахождение площади
   this->k1 = ((acos(((a*a)+(b*b)-(c*c))/(2.*a*b)))*180)/M_PI; // нахождение угла между сторонами A и B
   this->k2 = ((acos(((a*a)+(c*c)-(b*b))/(2.*a*c)))*180)/M_PI; // нахождение угла между сторонами A и C
   this->k3 = ((acos(((c*c)+(b*b)-(a*a))/(2.*c*b)))*180)/M_PI; // нахождение угла между сторонами C и B
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
    return S;
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
     this->side1 = side1; //присваивание значений

     this->side2 = side2;

     this->perimeter = (side1+side2)*2; //вычисление периметра

     this->area= side1*side2; //вычисление площади

     this->angle1 =angle1=angle2=angle3=angle4=90; // углы по 90 градусов
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

Paralelogram::Paralelogram()
{
}
void Paralelogram::set(const double & osnovanie, const double & bok_storona, const double &k1)  // присвоение 2 сторон и угла между ними
{
   this->osnovanie = osnovanie;
   this->bok_storona = bok_storona;
   this->P = 2 * (osnovanie + bok_storona); //высчитывание остальных параметров на основе введенных в сеттер
   this->k1 =k1;
    this->S = osnovanie * bok_storona * sin(k1*M_PI/180);
   this->k2 = 180-k1;

}

double Paralelogram::getP() const //функционал геттеров (возврат переменной)
{
    return P;
}
double Paralelogram::getS() const
{
    return S;
}
double Paralelogram::getK1() const
{
    return  k1;
}
double Paralelogram::getK2() const
{
    return  k2;
}
double Paralelogram::getA() const
{
    return  osnovanie;
}
double Paralelogram::getB() const
{
    return  bok_storona;
}

Trapezoid::Trapezoid()
{
}
void Trapezoid::set(const double &a, const double &b,  const double &c,  const double &d)
 {
     this->a =a; // присваивание введенных сторон в класс
    this->b=b;
    this->c =c;
    this->d =d;
    this->h=sqrt(c*c-pow(((pow((a-b),2)+c*c-d*d)/(2.*(a-b))), 2)); // просчитывание остальных переменных класса
    this->k1= asin(h/b)*180/M_PI;
    this->k4=asin(h/d)*180/M_PI;
    this->k2=180-k1;
    this->k3=180-k4;
    this->P=a+b+c+d;

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
 double Trapezoid::getk1() const
 {
     return k1;
 }
 double Trapezoid::getk2() const
 {
     return k2;
 }
 double Trapezoid::getk3() const
 {
     return k3;
 }
 double Trapezoid::getk4() const
 {
     return k4;
 }
