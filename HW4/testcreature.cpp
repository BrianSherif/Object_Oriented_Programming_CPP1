/*
CH08-320142
a2_p3 .cpp
Brian Sherif Nazmi Hanna Nasralla
B.hannanasralla@jacobs-university.de
*/


#include <iostream>
#include "Creature.h"

using namespace std;

//main

int main()
{
			cout << "Creating a Creature.\n";
			Creature c;
			c.run();


			cout << "\nCreating a Wizard.\n";
			Wizard w;
			w.run();
			w.hover();


			cout << "\nCreating a Dragon.\n";
	    Dragon d;
	    d.run();
	    d.fly();
			d.Fire();


			cout << "\nCreating a Dwarf.\n";
			Dwarfs z;
			z.run();
			z.magic();



    return 0;
}
