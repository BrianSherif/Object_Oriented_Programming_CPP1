/*
CH08-320142
a2_p1 .cpp
Brian Sherif Nazmi Hanna Nasralla
B.hannanasralla@jacobs-university.de
*/
#include <iostream>
using namespace std;
//function prototype
int myfirst(int arr[], int);
double myfirst (double arr[], int);
char myfirst (char arr[], int);

int main()
{
  int nr;
  int nr1;
  int nr2;
  //inputs for integer array
  cout << "please type your total amount of integer values:" << endl;
  cin >> nr;
  int i = nr;
  int numarr[i];
  for (i = 0; i < nr; i++)
  {
    cout << "please type value number:"<<" "<< i+1 << endl;
    cin >> numarr[i];
  }
  //inputs for doubles array
  cout << "please type your total amount of double values:" << endl;
  cin >> nr1;
  int x = nr1;
  double darr[x];
  for (i = 0; i < nr1; i++)
  {
    cout << "please type the double value #:"<<" "<< i+1 << endl;
    cin >> darr[i];
  }
  //inputs for char array
  cout << "please type your total amount of characters:" << endl;
  cin >> nr2;
  int z = nr2;
  char carr[z];
  for (i = 0; i < nr2; i++)
  {
    cout << "please type character #:"<< " "<< i+1 << endl;
    cin >> carr[i];
  }
  int c = myfirst(numarr, nr);
  cout << c << endl;
  double r = myfirst(darr, nr1);
  cout << r << endl;
  char t = myfirst(carr, nr2);
  cout << t << endl;
  return 0;
}

int myfirst(int arr[], int nr)
{
  for (int i = 0; i < nr; i++)
  {
    if (arr[i] > 0 && arr[i]%2 == 1)
    {
      return arr[i];
    }
    else
    {
      return (-1);
    }
  }
  return 0;
}

double myfirst(double arr[], int nr1)
{
  for (int i = 0; i < nr1; i++)
  {
    if (arr[i] > 0 && arr[i] == (int) arr[i])
    {
      return arr[i];
    }
    else
    {
      return (-1.1);
    }

  }
  return 0;
}


char myfirst(char arr[], int nr2)
{
  for (int i = 0; i < nr2; i++)
  {
    if (arr[i] == 'a' || arr[i] == 'A'|| arr[i] == 'e' || arr[i] == 'E' || arr[i] == i ||
    arr[i] == 'I' || arr[i] == 'o' || arr[i] == 'O' || arr[i] == 'u' || arr[i] == 'U' )
    {
      return arr[i];
    }
    else
    {
      return '0';
    }

  }
  return 0;
}
