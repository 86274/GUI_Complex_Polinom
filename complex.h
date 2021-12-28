#ifndef TCOMPLEX_H
#define TCOMPLEX_H
#include <QString>
#include "iostream"

// Класс комплексного числа
class TComplex
{
   double re, im; //re - вещественная часть; im - мнимая часть
public:
    TComplex();
    TComplex(int); // Параметризированный конструктор. Принимает целое число и инициализирует им вещественную часть.
    TComplex(int, int); // Принимает 2 целых числа и инициализирует ими вещественную часть и мнимую часть.
    TComplex(double,double); // Принимает 2 вещественных числа и инициализирует ими вещественную часть и мнимую часть.
      
    // Перегрузка операторов
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
