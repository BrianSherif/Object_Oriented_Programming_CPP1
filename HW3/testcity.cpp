 /*
CH08-320142
a3_p1 .cpp
Brian Sherif Nazmi Hanna Nasralla
B.hannanasralla@jacobs-university.de
*/
#include <iostream>
#include "City.h"
int main()
{
  City a;
	a.set_city("Bremen", 551767, "Germany", "Bremen Downtown");
	a.print();

  City b;
	b.set_city("Hamburg", 1763000, "Germany", "Hamburg Rathaus");
	b.print();

  City c;
  c.set_city("Berlin", 3400000, "Germany", "Berlin Wall");
  c.print();

  return 0;
}
