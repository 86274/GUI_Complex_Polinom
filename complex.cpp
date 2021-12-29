#include "complex.h"
#include "math.h"

TComplex TComplex::operator * (TComplex c)
{
    TComplex temp;
    temp.m_re = m_re * c.m_re - m_im * c.m_im;
    temp.m_im = m_re * c.m_im + m_im * c.m_re;
    return temp;
}

TComplex TComplex::operator / (TComplex c)
{
    TComplex temp;
    temp.m_re = (m_re * c.m_re + m_im * c.m_im) / (c.m_re * c.m_re + c.m_im * c.m_im);
    temp.m_im = (m_im * c.m_re - m_re * c.m_im) / (c.m_re * c.m_re + c.m_im * c.m_im);
    return temp;
}

TComplex TComplex::operator + (TComplex c)
{
    TComplex temp;
    temp.m_re = m_re + c.m_re;
    temp.m_im = m_im + c.m_im;
    return temp;
}

TComplex TComplex::operator - (TComplex c)
{
    TComplex temp;
    temp.m_re = m_re - c.m_re;
    temp.m_im = m_im - c.m_im;
    return temp;
}

TComplex operator-(TComplex c1)
{
    TComplex temp;
    temp.m_re = -c1.m_re;
    temp.m_im = -c1.m_im;
    return temp;
}

bool operator == (TComplex c, TComplex c1){
    return c.m_re == c1.m_re && c.m_im == c1.m_im;
}

TComplex sqrt(TComplex c)
{
    TComplex temp;
    //формула Муавра
    double arg = std::atan2(c.m_im, c.m_re);
    double m = std::sqrt(c.m_re * c.m_re + c.m_im * c.m_im);
    temp.m_re = std::sqrt(m) * cos(arg * 1/2);
    temp.m_im = std::sqrt(m) * sin(arg * 1/2);
    return temp;
}

std::istream& operator >> (std::istream& is, TComplex& c)
{
    is >> c.m_re;
    std::cout << "i = ";
    is >> c.m_im;
    return is;
}

std::ostream& operator << (std::ostream& os, TComplex c)
{
    os << "(" << c.m_re << "+" << c.m_im << "i)";
    return os;
}

QString& operator << (QString& s, TComplex c)
{
    s+="(";
    s+=QString().setNum(c.m_re);
    s+="+";
    s+=QString().setNum(c.m_im);
    s+="i)";
    return s;
}







