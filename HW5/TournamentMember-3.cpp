/*
CH08-320142
a5_p3 .cpp
Brian Sherif Nazmi Hanna Nasralla
B.hannanasralla@jacobs-university.de
*/
#include <string>
#include <cstring>
#include <iostream>
#include <cstdlib>
#include "TournamentMember.h"

std::string TournamentMember::Location;
//copy constructor
TournamentMember::TournamentMember(){
  Fname[0] = '\0';
    Lname[0] = '\0';
    Bday[0] = '\0';
    Role = "";
    Height = 0;

}
//reading info to input in class
TournamentMember::TournamentMember (const char *fn, const char *ln, const char *bd, const std::string& r, double h, const std::string &l)
{
  for (int i = 0; fn[i] !='\0'; i++) {
    Fname [i] = fn[i];
  }
  for (int i = 0; ln[i] !='\0'; i++) {
    Lname [i] = ln[i];
  }
  for (int i = 0; bd[i] !='\0'; i++) {
    Bday [i] = bd[i];
  }
  Role = r;
  Height = h;
  Location  = l;
}
//copy constructor
  TournamentMember::TournamentMember(const TournamentMember& x){
    std::cout << "copy constructor has been run"<< std::endl;
    for (int i = 0; x.Fname[i] =='\0'; i++) {
      Fname [i] = x.Fname[i];
    }
    for (int i = 0; x.Lname[i] =='\0'; i++) {
      Lname [i] = x.Lname[i];
    }
    for (int i = 0; x.Bday[i] =='\0'; i++) {
      Bday [i] = x.Bday[i];
    }
    Role = x.Role;
    Height = x.Height;

  }
  //changing location
void TournamentMember::changeLocation(std::string n){
  Location = n;
  std::cout << "New location"<< n << '\n';
}
//print function
void TournamentMember::print()
{
  printf("First name: %s\n", Fname);
  printf("Last name: %s\n", Lname);
  printf("Birthday: %s\n", Bday);
  std::cout << "Role: " << Role << '\n';
  std::cout << "Height: "<< Height << '\n';
}

//functions for second class
Player::Player (const char *fn, const char *ln, const char *bd, const std::string& r, double h, const std::string &l, int x, std::string &m, int c, std::string n)
:TournamentMember (fn, ln, bd, r, h, l)
 {
  std::cout << "constructor run" << '\n';
  Number = x;
  position = m;
  goals = c;
  LorR = n;
}
Player::Player(const Player& c) : TournamentMember(c) {
  std::cout << "copy constructor run" << '\n';
  Number = c.Number;
  position = c.position;
  goals = c.goals;
  LorR = c.LorR;
}

int Player::goal_inc (int n){
  n = goals;
  n++;
  goals = n;
  return goals;
}
void Player::print()
{
  TournamentMember::print();
  std::cout << "Player number is: "<< Number << '\n';
  std::cout << "Player position is: "<< position << '\n';
  std::cout << "Number of goals scored by Player:"<< goals << '\n';
  std::cout << "This player is "<< LorR <<" footed."<< '\n';
}


//functions for Third class
bool Referee::addToYellowCardList(Player *p)
{
  for(int i = 0; i < this->yellowCardCount; i++)
  {
    if(this->yellowCardList[i] == p)
    {
      for(int j = i; j < this->yellowCardCount-1; j++)
      {
        this->yellowCardList[j] = this->yellowCardList[j+1];
      }
      this->yellowCardCount--;
      addToRedCardList(p);
      std::cout << "The player has been given a red card\n";
      return false;
    }
  }
  this->yellowCardList[this->yellowCardCount++] = p;
  return true;
}

bool Referee::addToRedCardList(Player *p)
{
  if(p == NULL)
  {
    return false;
  }
  this->redCardList[this->redCardCount++] = p;
  return true;
}

Referee::Referee() : TournamentMember()
{
  std::cout << "Referee created" <<'\n';
  this->yellowCardCount = this->redCardCount = 0;
  for(int i = 0; i < 50; i++)
  {
  //both lists set to null because there is no input yet
    this->yellowCardList[i] = NULL;
    this->redCardList[i] = NULL;
  }
}

Referee::~Referee() {
    std::cout << "Referee desturcted"<<'\n';
}
