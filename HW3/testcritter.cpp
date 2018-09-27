#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	Critter *a;
    a = new Critter();
	a->print();

	Critter *b;
	b = new Critter("Brian");
	b->print();

	Critter *c;
  c = new Critter("Paris", 1, 2, 34.0);
	c->print();

	Critter *d;
  d = new Critter("Paris", 1, 2);
	d->print();

}
