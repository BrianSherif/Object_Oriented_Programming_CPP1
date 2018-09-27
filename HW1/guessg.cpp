/*
CH08-320142
a1_p4 .cpp
Brian Sherif Nazmi Hanna Nasralla
B.hannanasralla@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
  int die;
  int count = 0;
  int randomNumber;
  char name[50];
  int Cnum;
  int numbers;
  srand(static_cast<unsigned int>(time(0)));
  while (count < 1)
  {
    count++;
    randomNumber = rand();
    die = (randomNumber % 6) + 1;
    numbers = die;
  }
  cout << "please type your name in" << endl;
  cin >> name;
  cout << "pick random number between 1 and 100" << endl;
  cin >> Cnum;
  if (Cnum == numbers)
  {
    cout << "congratulations!" << endl;
    return 1;
  }

  else if (Cnum > numbers)
  {
    cout << "Too big" << endl;
  }
  else if (Cnum < numbers)
  {
    cout << "Too small" << endl;
  }

return 0;
}
