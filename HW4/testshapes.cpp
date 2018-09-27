/*
CH08-320142
a2_p5 .cpp
Brian Sherif Nazmi Hanna Nasralla
B.hannanasralla@jacobs-university.de
*/
# include "Shapes.h"
# include <iostream>
using namespace std;
int main()
{

    Circle c("first circle", 3, 4, 7);
    RegularPolygon r("TRIANGLE", 1, 1, 3);
    r.printName();
    c.printName();
    c.setName("new circle");
    cout<<c.getName()<<endl;
    c.printName();
    Square d("Square", 3, 4, 5);
    Rectangle z("Rectangle", 7, 8, 3, 2);
    cout<<z.area()<<'\t'<<z.perimeter()<<endl;
    Circle k ("circ", 3, 4, 5);
    cout<< k.area()<<'\t'<<k.perimeter()<<endl;
}
