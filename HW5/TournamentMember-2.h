/*
CH08-320142
a5_p3 .cpp
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

//new class player derived from generic member
class Player : public TournamentMember {
  private:
    int Number;
    std::string position;
    int goals;
    std::string LorR;
  public:
    //constructors
    Player();
    Player (const char*, const char*, const char*, const std::string& , double , const std::string& , int , std::string& , int , std::string );
    //copy constructor
    Player(const Player&);
    //Destructor
    ~Player (){
      std::cout << "Player Destructor is run" << '\n';
    }
    //setters and getter for properities of the player
    inline int get_Number(){
      return Number;
    }
    inline void set_Number(int x){
      Number = x;
    }
    inline std::string get_position(){
      return position;
    }
    inline void set_position(std::string q){
      position = q;
    }
    inline std::string get_LorR(){
      return LorR;
    }
    inline void set_LorR(std::string w){
      LorR = w;
    }
    int get_goals(){
      return goals;
    }
    void set_goals(int b){
      goals = b;
    }
    //goal increment
    int goal_inc(int n);

    //print function
    void print();
};
