/*
CH08-320142
a2_p5 .cpp
Brian Sherif Nazmi Hanna Nasralla
B.hannanasralla@jacobs-university.de
*/
#include <iostream>
#include "Shapes.h"

using namespace std;

Shape::Shape(const string& n) : name(n)
{
}
//empty constructor
Shape::Shape() : name("SHAPE")
{
}

void Shape::printName() const
{
    cout << name << endl;
}

void Shape::setName(string str)
{
    name = str;
}

string Shape::getName()
{
    return name;
}



CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n)
{
    x = nx;
    y = ny;
}
//empty constructor
CenteredShape::CenteredShape(): Shape("CENTERED_SHAPE")
{
    x=0.0;
    y=0.0;
}

void CenteredShape::setX(double ax)
{
    x= ax;
}


void CenteredShape::setY(double ay)
{
    y= ay;
}


double CenteredShape::getX()
{
    return x;
}


double CenteredShape::getY()
{
    return y;
}


RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
    CenteredShape(n,nx,ny)
{
    EdgesNumber = nl;
}

//empty constructor
RegularPolygon::RegularPolygon() :
    CenteredShape("REGULAR_POLYGON",0.0,0.0)
{
    EdgesNumber = 0;
}

void RegularPolygon::setEdges(int n)
{
    EdgesNumber = n;

}

int RegularPolygon::getEdges()
{
    return EdgesNumber;
}

Circle::Circle(const string& n, double nx, double ny, double r) :
    CenteredShape(n,nx,ny)
{
    Radius = r;
}

//empty constructor
Circle::Circle() :
    CenteredShape("CIRCLE",0.0,0.0)
{
    Radius = 0;
}
//Setter
void Circle::setRadius(double r)
{
    Radius = r;
}
//getter
double Circle::getRadius()
{
    return Radius;
}
double Circle::area()
{
    return Radius*Radius*(22/7);
    cout<<" circle area is"<<area()<<endl;
}
double Circle::perimeter()
{
    return Radius*2*(22/7);
    cout<<" circle perimeter is"<<perimeter()<<endl;
}

Rectangle::Rectangle(const string& n, double nx, double ny, double nwidth, double nheight): RegularPolygon(n, nx, ny, 4)
{
    Nwidth=nwidth;
    Nheight=nheight;
}


Rectangle::Rectangle(): RegularPolygon("RECTANGLE", 0.0, 0.0, 0.0)//empty constructor
{
    Nwidth=0.0;
    Nheight=0.0;
}
//Setter for width of rectangle
void Rectangle::setNwidth(double w)
{
    Nwidth=w;
}
//setter for height of rectangle
void Rectangle::setNheight(double h)
{
    Nheight=h;
}
//getter for height
double Rectangle::getNheight()
{
    return Nheight;
}
//getter for width
double Rectangle::getNwidth()
{
    return Nwidth;
}
//method for area of rectangle
double Rectangle::area()
{
    return Nwidth*Nheight;
    cout<<" rectangle area is"<<area()<<endl;
}
//method for perimeter
double Rectangle::perimeter()
{
    return 2*Nheight*Nwidth;
    cout<<" rectangle perimetre is"<<perimeter()<<endl;
}

Square::Square(const string& n, double nx, double ny, double nside): Rectangle("SQUARE", nx, ny, nside, nside)
{
    Nside=nside;
}
Square::Square(): Rectangle("SQUARE", 0.0, 0.0, 0.0, 0.0)//empty constructor
{
    Nside=0.0;
}
void Square::setNside(double nside)//setter
{
    Nside=nside;
}
//getters for square side
double Square::getNside()
{
    return Nside;
}
//method for square perimeter
double Square::perimeter()
{
    return 4*Nside;
    cout<<" square perimetre is"<<perimeter()<<endl;
}
//method for square area
double Square::area()
{
    return Nside*Nside;
    cout<<" square area is"<<area()<<endl;
}
