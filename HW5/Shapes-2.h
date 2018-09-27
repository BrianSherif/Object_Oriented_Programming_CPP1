/*
CH08-320142
a5_p1 .cpp
Brian Sherif Nazmi Hanna Nasralla
B.hannanasralla@jacobs-university.de
*/
#include <iostream>
#include "Shapes.h"

using namespace std;

Shape::Shape(const string& n) : name(n) {
}

void Shape::printName() const {
	cout << name << endl;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny)
{
	EdgesNumber = nl;
}

Circle::Circle(const string& n, double nx, double ny, double r) :
  CenteredShape(n,nx,ny)
{
	Radius = r;
}
//assigning values
Hexagon::Hexagon(const string& n, double nx, double ny, int nl,const string& n1, int s) :
	RegularPolygon(n,nx,ny,nl)
	{
		sizeside = s;
		color = n1;
	}
	//calculating perimeter
int PerimeterHex(int n) {
 x = n * 6;
 return x;
}
//calculating area
float AreaHex(int n) {
	float z = (5.19615242271/2) * n^2
	return z;
}
//setters and getter
int getsizeside(){
	return sizeside;
}
void setsizeside(int n){
	sizeside = n;
}
string getcolor(string c){
	return color;
}
void setcolor(string c){
	color = c;
}
