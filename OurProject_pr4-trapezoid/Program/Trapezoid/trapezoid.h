#ifndef TRAPEZOID_H
#define TRAPEZOID_H

class Trapezoid
{
public:
    Trapezoid();
    void set(const double &a, const double &b, const double &c, const double &d, const double &h);
    double getP() const;
    double getS() const;
    double geta() const;
    double getb() const;
    double getc() const;
    double getd() const;
    double geth() const;
private:
    double a, b, c, d, h, P, S;
};

#endif // TRAPEZOID_H
