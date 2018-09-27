/*
CH08-320142
a2_p5 .cpp
Brian Sherif Nazmi Hanna Nasralla
B.hannanasralla@jacobs-university.de
*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iomanip>
using namespace std;
void add_min (int array1[], int y);
int main()
{
  int x;
  int array [x];
  cout << "Please input a positive integer" << endl;
  cin >> x;
  for (int i = 0; i < x; i++) {
  cout << "Please input the value #"<< i+1 << '\n';
  cin >> array [i];
  }

  //find smallest
  add_min(array, x);
  return 0;
}
void add_min (int array[], int y)
{
  int smallest = array[0] ;
  for ( int i = 1;  i < sizeof(array)/sizeof(array[0]);  ++i )

  {
    if ( array[i] < smallest ) {
    smallest = array[i] ;}
  }
  for (int i = 0; i < y; i++) {
    new array[i]= array [i]+smallest;
  }
}
