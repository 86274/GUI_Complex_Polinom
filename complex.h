#ifndef TCOMPLEX_H
#define TCOMPLEX_H
#include <QString>
#include "iostream"

class TComplex
{
   double re, im;
public:
    TComplex();
    TComplex(int);
    TComplex(int, int);
    TComplex(double,double);

    TComplex operator * (TComplex);
    TComplex operator / (TComplex);
    TComplex operator + (TComplex);
    TComplex operator - (TComplex);
    friend TComplex operator -(TComplex);

    friend bool operator == (const TComplex, const TComplex);

    friend TComplex sqrt(TComplex);
    friend std::istream& operator >> (std::istream&, TComplex&);
    friend std::ostream& operator << (std::ostream&, TComplex);
    friend QString& operator << (QString&, TComplex);

};

#endif // TCOMPLEX_H
