/*
CH08-320142
a2_p5 .cpp
Brian Sherif Nazmi Hanna Nasralla
B.hannanasralla@jacobs-university.de
*/
#ifndef _SHAPES_H
#define _SHAPES_H
#include <string>
using namespace std;
class Shape  			// base class
{
private:   				// private access modifier: could also be protected
    std::string name;   // every shape will have a name
public:
    Shape(const std::string&);  // builds a shape with a name
    Shape();					// empty shape
    Shape(const Shape&);		// copy constructor
    ~Shape() {};					// empty shape
    void printName() const ;  	// prints the name
    void setName(std::string);  // setter
    string getName();      // getter
};

class CenteredShape : public Shape    // inherits from Shape
{
private:
    double x,y;  // the center of the shape
public:
    CenteredShape(const std::string&, double, double);  // usual three constructors
    CenteredShape();
    CenteredShape(const CenteredShape&);
    ~CenteredShape() {};//destructor
    void move(double, double);	// moves the shape, i.e. it modifies it center
    void setX(double);
    void setY(double);
    double getX();
    double getY();
};


class RegularPolygon : public CenteredShape   // a regular polygon is a centered_shape with a number of edges
{
private:
    int EdgesNumber;
public:
    RegularPolygon(const std::string&, double, double, int);
    RegularPolygon();
    ~RegularPolygon() {};//destructor
    RegularPolygon(const RegularPolygon&);
    void setEdges(int);
    int getEdges();
};

class Circle : public CenteredShape    // a Circle is a shape with a center and a radius
{
private:
    double Radius;
public:
    Circle(const std::string&, double, double, double);
    Circle();
    Circle(const Circle&);
    //destructor
    ~Circle() {};
    void setRadius(double);
    double getRadius();
    double area();
    double perimeter();

};


//new class Rectangle with 2 equal width and 2 equal height and 90 degree corners
class Rectangle : public RegularPolygon
{
private :
    //to get area
    double Nwidth;
    double Nheight;
public :

    Rectangle(const string& n, double nx, double ny, double nwidth, double nheight);
    Rectangle();
    ~Rectangle() {};//destructor
    void setNwidth(double);
    double getNwidth();
    void setNheight(double);
    double getNheight();
    double area();
    double perimeter();
};
// New class containing a square which is a polygone with 4 equal sides and 90 degree corners
class Square : public Rectangle
{
private :
    //to get area
    double Nside;
public :
    Square(const string& n, double nx, double ny, double nside);
    Square();
    //destructor
    ~Square() {};
    void setNside(double);
    double getNside();
    double area();
    double perimeter();
};
#endif
