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
{			char x;
	do {

			std::cout << "\nYour wish is my command" << '\n';
			std::cin >> x;
			switch (x) {
				case 'w':{
				cout << "\nCreating a Wizard.\n";
				Wizard w;
				w.run();
				w.hover();
				break;
				}
				case '1': {
				cout << "\nCreating a Dragon.\n";
		    Dragon d;
		    d.run();
		    d.fly();
				d.Fire();
				break;
			}
				case '2':{
				cout << "\nCreating a Dwarf.\n";
				Dwarfs z;
				z.run();
				z.magic();
				break;
			}
			}
		} while (x !='q');

    return 0;
}
