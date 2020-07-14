#ifndef LIBRARY_H
#define LIBRARY_H

#include <QString>

class Circle
{
public:
    Circle();
    void set(const double &r);
    double getR() const;
    double getP() const;
    double getS() const;
private:
    double r, S, P;
};
class Rectangle
{
public:
    Rectangle();
    void set(const double &side1, const double &side2,const double &side3,const double &side4);
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
