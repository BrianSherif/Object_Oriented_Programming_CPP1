/*
CH08-320142
a3_p6 .cpp
Brian Sherif Nazmi Hanna Nasralla
B.hannanasralla@jacobs-university.de
*/
#include "complex.h"
#include <iostream>
using namespace std;
//constructor 1
complex::complex()
{
  R = 0;
  I = 0;
  std::cout << "Constructor 1 is being used\n" << endl;
}
//constructor 2
complex::complex(float a, float b)
{
  R = a;
  I = b;
  std::cout << "Constructor 2 is being used\n" << endl;
}

//destructor
complex:: ~ complex()
{
  std::cout << "Destructor is being called\n" << endl;
}



//setting imaginary part
void complex::setImag(float I1)
{
  I = I1;
}
//setting real part
void complex::setReal(float R1)
{
  R = R1;
}
//getting imaginary part
float complex::getImag()
{
  return I;
}
//getting real part
float complex::getReal()
{
  return R;
}

//calculating and printing the conjugate of a complex number
void complex::conjugate()
{
  std::cout << R << "-" << I << "i" <<endl;
}

complex complex::add(complex a)
{
  std::cout <<R - a.R << "+(" << I - a.I<< ")i" << endl;
  complex temp;
  temp.R = R - a.R;
  temp.R = I - a.I;
  return temp;
}
complex complex::mul(complex a) //multiplication of two numbers
{
  std::cout << ((R * a.R) - (I * a.I)) << "+" << ((I * a.R) - (R * a.I))<< "i" << endl;
  complex temp;
  temp.R = ((R * a.R) - (I * a.I));
  temp.I = ((I * a.R) + (R * a.I));
  return temp;
}
//simple print method
void complex::print()
{
  std::cout << " "<< R<< "+("<< I << ")i"<< endl;
}
