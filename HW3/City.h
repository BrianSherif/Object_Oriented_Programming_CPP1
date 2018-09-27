/*
CH08-320142
a3_p1 .cpp
Brian Sherif Nazmi Hanna Nasralla
B.hannanasralla@jacobs-university.de
*/
#include <iostream>
#include <string>
using namespace std;
class City
{
 // data members are private
 private:
 std::string name;
 int citizens;
 std::string location;
 std::string POI;
 public:
   void set_city(string, int, string, string);
   void print();
};
