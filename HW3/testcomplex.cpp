/*
CH08-320142
a3_p6 .cpp
Brian Sherif Nazmi Hanna Nasralla
B.hannanasralla@jacobs-university.de
*/
#include <iostream>
#include "complex.h"
using namespace std;

int main() {
  //declaring three objects
  complex c1, c2, c3;
  //declaring variables
  float a;
  float b;
  float c;
  float d;
  //taking inputs
  std::cout << "Enter the a: " << '\n';
  std::cin >> a;
  std::cout << "Enter the b: " << '\n';
  std::cin >> b;
  std::cout << "Enter the c: " << '\n';
  std::cin >> c;
  std::cout << "Enter the d: " << '\n';
  std::cin >> d;

  c1.setImag(b);
  c1.setReal(a);
  c2.setImag(d);
  c2.setReal(c);

  c1.conjugate();
  c2.conjugate();

  cout << "the sum is:" << endl;
  c3 = c1.add(c2);
  c3.print();


  cout << "The multiplication is:" << endl;
  c3 = c1.mul(c2);
  c3.print();

  cout << "the difference is:" << endl;
  c3 = c1.diff(c2);
  c3.print();

  return 0;
}
