/*
CH08-320142
a5_p5 .cpp
Brian Sherif Nazmi Hanna Nasralla
B.hannanasralla@jacobs-university.de
*/
// simple class for fractions

#ifndef FRACTION_H_
#define FRACTION_H_

#include <iostream>

class Fraction {

private:						// internal implementation is hidden
    int num;					// numerator
    int den;					// denominator

    int gcd(int a, int b);		// calculates the gcd of a and b
    int lcm(int a, int b);

public:
    Fraction();					// empty constructor
    Fraction(int, int = 1); 	// constructor taking values for fractions and
    // integers. Denominator by default is 1

    // prints it to the screen
    friend std::ostream& operator<<(std::ostream &out, const Fraction &f);
    // Overloading to recive input
    friend std::istream& operator>>(std::istream& in, Fraction &f);

    // Overloading operators of multiplication and division
    Fraction operator*(const Fraction &f);
    Fraction operator/(const Fraction &f);
};


#endif /* FRACTION_H_ */
