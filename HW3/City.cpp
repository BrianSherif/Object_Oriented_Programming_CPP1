/*
CH08-320142
a3_p1 .cpp
Brian Sherif Nazmi Hanna Nasralla
B.hannanasralla@jacobs-university.de
*/
#include <iostream>
#include "City.h"
void City:: set_city(string z, int x, string c, string v)
{
  name = z;
  citizens = x;
  location = c;
  POI = v;
}
void City::print()
{
  std::cout << "City name is:"<< name << '\n';
  std::cout << "City population is:"<< citizens << '\n';
  std::cout << "City location is:"<< location << '\n';
  std::cout << "City POIs include:"<< POI << '\n';
}
