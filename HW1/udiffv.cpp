/*
CH08-320142
a1_p2 .cpp
Brian Sherif Nazmi Hanna Nasralla
B.hannanasralla@jacobs-university.de
*/
#include <iostream>
using namespace std;
int main()
{
  //declaring data types
  int nr;
  float val;
  int i = 0;
  //collecting inputs
  string str;
  cout << "please type your first integer value:" << endl;
  cin >> nr;
  cout << "please type a float value:" << endl;
  cin >> val;
  cout << "please type a string:" <<endl;
  cin >> str;
  //While loop to repeat "nr"times
  while (i < nr)
  {
    cout <<" "<< endl;
    cout << val << " "<< str << endl;
    cout <<" "<< endl;
    //increasing "i" to reach "nr"
    i++;
  }

  return 0;
}
