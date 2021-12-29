#ifndef TCOMPLEX_H
#define TCOMPLEX_H
#include <QString>
#include "iostream"

// Класс комплексного числа
class TComplex
{
public:

    TComplex(const double& re = 0, const double& im = 0): m_re{re}, m_im{im} {}

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
private:
    double m_re, m_im; //re - вещественная часть; im - мнимая часть
};

#endif // TCOMPLEX_H
