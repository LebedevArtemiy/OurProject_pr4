#ifndef PRIMOYGOLNIK_H
#define PRIMOYGOLNIK_H

class primoygolnik
{
public:

    primoygolnik();
    void set(const double &side1, const double &side2, const double &side3, const double &side4);
       double getperimeter() const;
       double getarea() const;

private:
    double side1, side2, side3, side4; // стороны прямоугольника
    double angle1, angle2, angle3, angle4; // углы прямоугольника
    double perimeter; //периметр
    double area; //площадь


};

#endif // PRIMOYG_H
