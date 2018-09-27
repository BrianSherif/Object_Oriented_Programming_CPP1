/*
CH08-320142
a4_p1 .cpp
Brian Sherif Nazmi Hanna Nasralla
B.hannanasralla@jacobs-university.de
*/
#include <iostream>
#include "Box.h"
void Box:: set_height(int h)
{
  height = h;
}
void Box::void set_width (int w)
{
  width = w;
}
void Box::void set_depth (int d)
{
  depth = d;
}
void Box::void calculate_volume (int d, int w, int h)
{
  int v = d * w * h;
}
void Box::print()
{
  std::cout << "Box height is"<< height << '\n';
  std::cout << "Box width is:"<< width << '\n';
  std::cout << "Box depth is:"<< depth << '\n';
  std::cout << "Box volume is"<< volume << '\n';
}
