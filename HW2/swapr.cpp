/*
CH08-320142
a2_p2 .cpp
Brian Sherif Nazmi Hanna Nasralla
B.hannanasralla@jacobs-university.de
*/
#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
int help = a;
 a = b;
 b = help;
return;
} // swap ints

void swap(double &a, double &b)
{
double help = a;
a = b;
b = help;
return;
} // swap doubles
void swap(char &a, char &b)
{
char help = a;
a = b;
b = help;
return;
} // swap char pointers

int main(void) {
  int a = 5, b = 10;
  double x = 5.2, y = 10.7;
  const char *str1 = "One";
  const char *str2 = "Two";

cout << "a=" << a << ", b=" << b << endl;
cout << "x=" << x << ", y=" << y << endl;
cout << "str1=" << str1 << ", str2=" << str2 << endl;

swap(a, b);
swap(x, y);
swap(str1, str2);

cout << "a=" << a << ", b=" << b << endl;
cout << "x=" << x << ", y=" << y << endl;
cout << "str1=" << str1 << ", str2=" << str2 << endl;
return 0;
}
