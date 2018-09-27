/*
CH08-320142
a5_p3 .cpp
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
  //Test for member
  string str = "Brian";
  const char *fstname = str.c_str();
  string str2 = "Nasralla";
  const char *lstname = str2.c_str();
  string str3 = "25/04/1998";
  const char *stBday = str3.c_str();
  TournamentMember member_1(fstname, lstname, stBday, "Player_1",  1.9, "Cairo" );
  member_1.print();
  std::cout <<'\n';
  //test for player 1
  string str1 = "Yiping";
  const char *fstname1 = str1.c_str();
  string str12 = "Deng";
  const char *lstname1 = str12.c_str();
  string str13 = "15/12/1998";
  const char *stBday1 = str13.c_str();
  int number1 = 11;
  string position1 = "Defender";
  int goal1 = 3;
  string LorR1 = "left";
  Player player_1(fstname1, lstname1, stBday1, "player",  1.3, "China" ,number1, position1, goal1, LorR1);
  player_1.print();
  std::cout <<'\n';
  //test for player 2
  string str21 = "Player 2";
  const char *fstname2 = str21.c_str();
  string str22 = "Messi";
  const char *lstname2 = str22.c_str();
  string str23 = "15/2/1982";
  const char *stBday2 = str23.c_str();
  int number2 = 10;
  string position2 = "Attacker";
  int goal2 = 3;
  string LorR2 = "right";
  Player player_2(fstname2, lstname2, stBday2, "player",  1.6, "Italy" ,number2, position2, goal2, LorR2);
  player_2.print();
  std::cout <<'\n';
  //test for player 3
  string str31 = "Player 3";
  const char *fstname3 = str31.c_str();
  string str32 = "John";
  const char *lstname3 = str32.c_str();
  string str33 = "1/12/1993";
  const char *stBday3 = str33.c_str();
  int number3 = 7;
  string position3 = "Midfielder";
  int goal3 = 2;
  string LorR3 = "left";
  Player player_3(fstname3, lstname3, stBday3, "player",  1.6, "Brazil" ,number3, position3, goal3, LorR3);
  player_3.print();
  return 0;
}
