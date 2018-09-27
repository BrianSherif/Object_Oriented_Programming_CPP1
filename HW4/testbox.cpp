 /*
CH08-320142
a4_p1 .cpp
Brian Sherif Nazmi Hanna Nasralla
B.hannanasralla@jacobs-university.de
*/
#include <iostream>
#include "Box.h"
int main()
{
  int k;
  std::cout << "Please input the number of boxes you want to calculate:" << '\n';
  std::cin >> k;
  for (int i = 1; i < k; i++) {
    std::cout << "Type height of box #"<< i << '\n';
    int h;
    std::cin >> h;
    std::cout << "Type width of box #"<< i << '\n';
    int w;
    std::cin >> w;
    std::cout << "Type depth of box #"<< i << '\n';
    int d;
    std::cin >> d;
    Box i;
    i.set_height(h);
    i.set_width(w);
    i.set_depth(d);
    calculate_volume (h, w, d);
    i.print();

    }

  return 0;
}
