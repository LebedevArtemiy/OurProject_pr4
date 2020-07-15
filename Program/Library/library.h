#ifndef LIBRARY_H
#define LIBRARY_H

#include <QString>

class Treygol
{
public:

    Treygol();
    void set( const double  &a, const double  &b, const double  &c);
    double getA() const;
    double getB() const;
    double getC() const;
    double getP() const;
    double getS() const;
    double getK() const;
    double getK1() const;
    double getK2() const;
    double getK3() const;

private:
    double a,b,c, S, P, k1, k2, k3;

};

class Rectangle
{
public:
    Rectangle();
    void set(const double &side1, const double &side2);
       double getperimeter() const;
       double getarea() const;
       double getside1() const;
       double getside2() const;
       double getangle() const;

private:
    double side1, side2; // стороны прямоугольника
    double angle1, angle2, angle3, angle4; // углы прямоугольника
    double perimeter; //периметр
    double area; //площадь


};


#endif // LIBRARY_H
