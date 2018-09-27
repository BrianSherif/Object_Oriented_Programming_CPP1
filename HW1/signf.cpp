/*
CH08-320142
a1_p3 .cpp
Brian Sherif Nazmi Hanna Nasralla
B.hannanasralla@jacobs-university.de
*/
#include <iostream>
using namespace std;
//function prototype
int sign(int x);

int main()
{
  //data types
  int y;
  int nr;
  //collecting inputs
  cout << "please type your integer value:" << endl;
  cin >> nr;
  //calling function and assign to "y"
  y = sign (nr);
  //printing result
  cout << "the return is "<< y << endl;
  return 0;
}
// function to determine positive, negative, or "0" integer
int sign(int x)
{
  int y;
  // "0" integer
  if (x == 0)
  {
    y = 0;
  }
  // Positive integer
  else if (x > 0)
  {
    y = 1;
  }
  //negative integer
  else if (x < 0)
  {
    y = (-1);
  }
  //return result to main
  return y;
}
