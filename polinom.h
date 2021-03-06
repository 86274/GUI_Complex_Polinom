#ifndef POLINOM_H
#define POLINOM_H
#include <iostream>
#include "complex.h"

//Шаблонный класс квадратного трёхчленного полинома для работы с вещественными и комплексными числами
template <class number>
class TPolinom
{
    number a, b, c;
public:
    // Параметризированный конструктор, принимающий в качестве аргументов коэффициенты полинома
    TPolinom(const number&,const number&, const number& );
    // Метод возвращает значение полинома
    number value(const number&);
    // Метод вычисления корней на множестве вещественных чисел. Возвращает число - количество корней.
    int rootsDouble(number*);
    // Метод вычисления корней на множестве комплексных чисел. Возвращает число - количество корней.
    int rootsComplex(number*);
    //Шаблоннный дружественный метод перегрузки оператора вывода. Для вывода числа в поток вывода.
    template <class T>
    friend std::ostream& operator << (std::ostream&, TPolinom<T>&);
    //Для вывода числа в строку.
    template <class T>
    friend QString& operator << (QString&, TPolinom<T>&);
};

template <class number>
TPolinom<number>::TPolinom(const number& x,
                           const number& y,
                           const number& z)
{
    a = x;
    b = y;
    c = z;
}

template <class number>
number TPolinom<number>::value(const number& x)
{
    return a * x * x + b * x + c;
}

template<class number>
int TPolinom<number>::rootsDouble(number* x) {
    number d = b * b - a * 4 * c;
    if(a == 0 && b == 0)
    {
        return 0;
    }
    else
        if (a == 0){
             x[0] = x[1] = -c/b;
             return 1;
        }
        else
        {
            if (d > 0)
            {
                d = sqrt(d);
                x[0] = (-b + d) / (2 * a);
                x[1] = (-b - d) / (2 * a);
                return 2;
            }
            else if(d < 0)
            {
                return 0;
            }
            else
            {
                x[0] = x[1] = -b / (2 * a);
                return 1;
            }
        }
}

template<class number>
int TPolinom<number>::rootsComplex(number* x) {
    number d = b * b - a * 4 * c;
    number two = 2;

    if(a == 0 && b == 0)
    {
        return 0;
    }
    else
        if (a == 0){
             x[0] = x[1] = -c/b;
             return 1;
        } else
        {
            x[0] = ((b * -1) + sqrt(d)) / (a * two);
            x[1] = ((b * -1) - sqrt(d)) / (a * two);
            return 2;
        }
}

template <class number>
std::ostream& operator << (std::ostream& os,
                           TPolinom<number>& p)
{
    os << p.a << "x^2" << "+" << p.b << "x" << "+" << p.c;
    return os;
}

template <class number>
QString& operator << (QString& s,
                      TPolinom<number>& p)
{
    s<<p.a;
    s+="x^2+";
    s<<p.b;
    s+="x+";
    s<<p.c;
    return s;
}

#endif // POLINOM_H
