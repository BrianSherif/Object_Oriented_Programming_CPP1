/*
CH08-320142
a4_p1 .cpp
Brian Sherif Nazmi Hanna Nasralla
B.hannanasralla@jacobs-university.de
*/
#include <iostream>
using namespace std;
class Box
{
 // data members are private
 int height;
 int width;
 int depth;
 void volume;
 public:
   //setters
   void set_height(int h);
   void set_width (int w);
   void set_depth (int d);
   void calculate_volume (int d, int w, int h);
   //getters
   int getheight ();
   int getwidth ();
   int getdepth ();
   //constructors
   Box();
	 Box(int, int, int = 0);
  Box::~ Box()

	//print
   void print();

};
