#include "complex.h"
#include "math.h"

TComplex::TComplex()
{
    re = 0;
    im = 0;
}

TComplex::TComplex(const int& v)
{
    re = v;
    im = 0;
}

TComplex::TComplex(const double& x, const double& y)
{
    re=x;
    im=y;
}

TComplex::TComplex(const int& v, const int& i)
{
    re = v;
    im = i;
}

TComplex TComplex::operator * (TComplex c)
{
    TComplex temp;
    temp.re = re * c.re - im * c.im;
    temp.im = re * c.im + im * c.re;
    return temp;
}

TComplex TComplex::operator / (TComplex c)
{
    TComplex temp;
    temp.re = (re * c.re + im * c.im) / (c.re * c.re + c.im * c.im);
    temp.im = (im * c.re - re * c.im) / (c.re * c.re + c.im * c.im);
    return temp;
}

TComplex TComplex::operator + (TComplex c)
{
    TComplex temp;
    temp.re = re + c.re;
    temp.im = im + c.im;
    return temp;
}

TComplex TComplex::operator - (TComplex c)
{
    TComplex temp;
    temp.re = re - c.re;
    temp.im = im - c.im;
    return temp;
}

TComplex operator-(TComplex c1)
{
    TComplex temp;
    temp.re = -c1.re;
    temp.im = -c1.im;
    return temp;
}

bool operator == (TComplex c, TComplex c1){
    return c.re == c1.re && c.im == c1.im;
}

TComplex sqrt(TComplex c)
{
    TComplex temp;
    //формула Муавра
    double arg = std::atan2(c.im, c.re);
    double m = std::sqrt(c.re * c.re + c.im * c.im);
    temp.re = std::sqrt(m) * cos(arg * 1/2);
    temp.im = std::sqrt(m) * sin(arg * 1/2);
    return temp;
}

std::istream& operator >> (std::istream& is, TComplex& c)
{
    is >> c.re;
    std::cout << "i = ";
    is >> c.im;
    return is;
}

std::ostream& operator << (std::ostream& os, TComplex c)
{
    os << "(" << c.re << "+" << c.im << "i)";
    return os;
}

QString& operator << (QString& s, TComplex c)
{
    s+="(";
    s+=QString().setNum(c.re);
    s+="+";
    s+=QString().setNum(c.im);
    s+="i)";
    return s;
}







