/*
CH08-320142
a5_p1 .cpp
Brian Sherif Nazmi Hanna Nasralla
B.hannanasralla@jacobs-university.de
*/
#include <iostream>
#include "Shapes.h"

int main() {
  //declaring first Hexagon
  Hexagon*a;
 std::cout << "Creating first Hexagon" << '\n';
 a.setsizeside(2);
 a.setcolor("red");
 std::cout << "First Hexagon has a side of"<< a.getsizeside << "and a color of"<< a.getcolor << '\n';

//declaring second Hexagon
 std::cout << "Creating second Hexagon" << '\n';
 Hexagon*b;
 b.setsizeside(10);
 b.setcolor("yellow");
 std::cout << "second Hexagon has a side of"<< b.getsizeside << "and a color of"<< b.getcolor << '\n';
//declaring 3rd hexagon
 std::cout << "Copying second Hexagon" << '\n';
 Hexagon*c;
 c.Hexagon (Hexagon*b);
//assigning sizes and calculations for perimeter and Area
 int x = PerimeterHex(Hexagon a);
 int y = PerimeterHex(Hexagon b);
 int z = PerimeterHex(Hexagon c);
 //print perimeter
 std::cout << "total perimeter is"<< x+y+z << '\n';
  double a = AreaHex (Hexagon a);
  double  b = AreaHex (Hexagon b);
  double c = AreaHex (Hexagon c);
  //print area
  std::cout << "Total area is"<< a+b+c << '\n';
  return 0;
}
