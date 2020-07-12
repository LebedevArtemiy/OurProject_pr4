#ifndef LIBRARY_H
#define LIBRARY_H

#include <QString>

class Paralelogram
{
public:
    Paralelogram();
    void set(const float &osnovanie, const float &bok_storona, const float &visota);
    float getP() const;
    float getS() const;
    float getK1() const;
    float getK2() const;
private:
     float osnovanie, bok_storona, visota, S, P, k1, k2;
};

#endif // LIBRARY_H
