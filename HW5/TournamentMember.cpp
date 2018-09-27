/*
CH08-320142
a5_p2 .cpp
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
