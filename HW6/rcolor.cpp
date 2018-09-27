/*
CH08-320142
a5_p1 .cpp
Brian Sherif Nazmi Hanna Nasralla
B.hannanasralla@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

std::string function() {
  std::string b[4] = {"RED", "YELLOW", "BLUE", "GREEN"};
  int generator;
  generator = rand();
  return b[generator%4];
}

int main()
{
  srand(time(0));
  for (int i = 0; i < 10; i++)
  {
    std::cout << function() << std::endl;
  }
  return 0;
}
