#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:
	std::string name;
	int hunger;
	int boredom;
	double height;

public: // business logic methods are public
	// constructors
	Critter(std::string name, int hunger, int boredom, double height);
	Critter() : std::string (Critter), int hunger(0), int boredom(0), double height(10){ }
	Critter(std::string name): int hunger(0), int boredom(0), double height(10) { }
	Critter(std::string name, int hunger, int boredom): double height(10) { }
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	// getter method
	int getHunger();
	// service method
	void print();
};
