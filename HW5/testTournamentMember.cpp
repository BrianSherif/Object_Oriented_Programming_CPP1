/*
CH08-320142
a5_p2 .cpp
Brian Sherif Nazmi Hanna Nasralla
B.hannanasralla@jacobs-university.de
*/
#include <string>
#include <iostream>
#include <cstdlib>
#include "TournamentMember.h"

using namespace std;

int main() {
  //info inputed to the first class

  string str = "Brian";
  const char *fstname = str.c_str();
  string str2 = "Nasralla";
  const char *lstname = str2.c_str();
  string str3 = "25/04/1998";
  const char *stBday = str3.c_str();
  TournamentMember Player_1(fstname, lstname, stBday, "Player_1",  1.9, "Cairo" );
  Player_1.print();

  return 0;
}
