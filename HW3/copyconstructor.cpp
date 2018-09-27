/*
CH08-320142
a3_p5 .cpp
Brian Sherif Nazmi Hanna Nasralla
B.hannanasralla@jacobs-university.de
*/
#include <iostream>
#include <cstring>  // standard C string.h header file

using namespace std;

/*
	Naive string: the goal is to illustrate how copy constructors
	should be handled. See also charbuffer.cpp
*/

class NaiveString {
private:
	char *str;
public:
	NaiveString(const char*);
	NaiveString(const NaiveString&);
	~ NaiveString();
	void update(char, char);
	void print();
};

NaiveString::NaiveString(const char* t) {
	std::cout << "constructor number 1 is ivoked." << '\n'<< endl;
	str = new char[strlen(t) + 1];
	strcpy(str, t);
}

/*
	Copy constructor: creates a new instance of
	naive string starting from an existing one
*/


NaiveString::NaiveString(const NaiveString& src) {
	std::cout << "constructor number 2 is ivoked." << '\n'<< endl;
	str = new char[strlen(src.str) + 1];
	strcpy(str, src.str);
	// please note that we can access src.str even if it is private
	// as we are inside the NaiveString class
}
NaiveString:: ~ NaiveString()
{
	std::cout << "destructor number 1" << '\n'<< endl;
}
/* replaces occurrences of oldchar by newchar */
void NaiveString::update(char oldchar, char newchar) {
	unsigned int i;
	for (i = 0; i < strlen(str); i++)
		if (str[i] == oldchar)
			str[i] = newchar;
}

void NaiveString::print() {
	cout << str << endl;
}

void funcByVal(NaiveString s) {
	cout << "funcbyval() being called" << endl;
	s.update('B', 'C');
	s.print();
}
void funcbyref(NaiveString &s)
{
	std::cout << "funcbyref is being called" << '\n';
	s.update('B', 'C');
	s.print();
}

int main(int argc, char** argv)
{
	NaiveString a("aBcBdB");
	NaiveString b("aBcBdBabc");
	NaiveString c("aBBBc");
	a.print();
	cout << "About to call funcbyval()" << endl;
	funcByVal(a);
	funcbyref(a);
	funcByVal(b);
	funcbyref(b);
	funcByVal(c);
	funcbyref(c);
	a.print();
	b.print();
	c.print();
}
