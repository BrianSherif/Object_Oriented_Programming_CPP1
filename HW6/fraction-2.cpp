/*
CH08-320142
a6_p2 .cpp
Brian Sherif Nazmi Hanna Nasralla
B.hannanasralla@jacobs-university.de
*/
#include <iostream>
#include "fraction.h"

Fraction::Fraction()
{
    num = 1;
    den = 1;
}

Fraction::Fraction(int n, int d)
{
    int tmp_gcd = gcd(n, d);

    num = n / tmp_gcd;
    den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
    if(a > b){
        return gcd(b, a);
    }
    if(a == 0){
        return b;
    }
    return gcd(b%a, a);
}

int Fraction::lcm(int a, int b)
{
    return a * b / gcd(a, b);

}
// overloaded operator << used to replace print method

std::ostream& operator<<(std::ostream &out, const Fraction &f)
{
    std::cout << f.num << "/" << f.den;
    return out;
}

// overloaded >> to gather input from keyboard
std::istream& operator>>(std::istream &in, Fraction &f) {
    char slash;
    in >> f.num >> slash >> f.den;
    return in;
}

// overload the operators of multiplication and division of two fractions

Fraction Fraction::operator*(const Fraction &f) {

    int newNum = this->num*f.num;
    int newDen = this->den*f.den;
    int GCD = gcd(newNum, newDen);
    newNum /= GCD;
    newDen /= GCD;
    return Fraction(newNum, newDen);
}

Fraction Fraction::operator/(const Fraction &f) {

    int newNum = this->num*f.den;
    int newDen = this->den*f.num;
    int GCD = gcd(newNum, newDen);
    newNum /= GCD;
    newDen /= GCD;

    return Fraction(newNum, newDen);
}
