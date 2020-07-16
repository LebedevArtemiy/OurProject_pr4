#ifndef LIBRARY_H
#define LIBRARY_H

#include <QString>

class Treygol
{
public:

    Treygol(); // конструктор по умолчанию
    void set( const double  &a, const double  &b, const double  &c); // объявление сеттера, установка всех значений
    double getA() const; //
    double getB() const; //
    double getC() const; //
    double getP() const; //
    double getS() const; // объявление геттеров
    double getK() const; //
    double getK1() const; //
    double getK2() const; //
    double getK3() const; //

private:
    double a,b,c, S, P, k1, k2, k3;  // объявление сторон, площади, периметра, углов

};

class Rectangle // класс для работы с данными прямоугольника
{
public:
    Rectangle();
    void set(const double &side1, const double &side2); // сеттер
       double getperimeter() const; // геттеры
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

class Circle
{
public:
    Circle();
    void set(const double &r); // сеттер
    double getR() const; // геттеры
    double getP() const;
    double getS() const;
private:
    double r, S, P; // радиус, площадь, периметр
};

class Paralelogram // Задание класса для работы с геометрическими данными фигуры параллелограм
{
public:
    Paralelogram();
    void set(const double &osnovanie, const double &bok_storona, const double &k1); // задание сеттера
    double getP() const; // задание геттеров
    double getS() const;
    double getK1() const;
    double getK2() const;
    double getA() const;
    double getB() const;
private:
     double osnovanie, bok_storona, S, P, k1, k2; //  стороны,  углы, периметр и площадь  параллелограма
};

class Trapezoid
{
public:
    Trapezoid();
    void set(const double &a, const double &b,  const double &c,  const double &d); // сеттер
    double getP() const; // геттеры
    double getS() const;
    double getk1() const;
    double getk2() const;
    double getk3() const;
    double getk4() const;
    double geta() const;
    double getb() const;
    double getc() const;
    double getd() const;
    double geth() const;
private:
    double a, b, c, d, h, P, S, k1, k2, k3, k4; // стороны, высота, периметр, площадь, углы
};


#endif // LIBRARY_H
