/*
CH08-320142
a1_p4 .cpp
Brian Sherif Nazmi Hanna Nasralla
B.hannanasralla@jacobs-university.de
*/
#include <iostream>
using namespace std;
//function prototype
int mycount (int x, int y);
int mycount (std::string s, char z);

int main()
{
  //data types
  int x = 7;
  int y = 3;
  string s = "This is a string";
  char r = 'i';
  //printing results
  cout << "mycount(7, 3): " << mycount (x,y) << endl;
  cout << "mycount(\"This is a string\", 'i'): " << mycount (s, r) << endl;
  return 0;
}

//function overload

//difference function

int mycount (int x, int y)
{
  int v;
  v = x - y;
  return v;

}
//string function
int mycount (string s, char r)
{
  int z = 0;
  int n = s.size();
  for (int i = 0; i < n; i++)
 {
  if (s [i] == r)
  {
    z++;
  }
 }
 return z;
}
