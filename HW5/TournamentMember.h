/*
CH08-320142
a5_p2 .cpp
Brian Sherif Nazmi Hanna Nasralla
B.hannanasralla@jacobs-university.de
*/
#include <string>
#include <iostream>
#include <cstdlib>
//class declaration
class TournamentMember {
  //private members of data for this class
private:
  char Fname [31];
  char Lname [31];
  char Bday [11];
  std::string Role;
  double Height;
  static std::string Location;

public:
  //constructors
  TournamentMember();
  TournamentMember (const char *, const char *, const char *, const std::string&, double, const std::string&);
  //copy constructor
  TournamentMember (const TournamentMember&);
  //Destructor
 ~TournamentMember (){
   std::cout << "Destructor is run" << '\n';
 }
 //methods to change location
 void changeLocation(std::string);
 std::string get_location();
  void set_location(std::string n);
  //print method 
 void print();
};

inline std::string TournamentMember::get_location(){
  return Location;
}
inline void TournamentMember::set_location(std::string n){
  Location = n;
}
