/*
CH08-320142
a2_p3 .cpp
Brian Sherif Nazmi Hanna Nasralla
B.hannanasralla@jacobs-university.de
*/


#include <iostream>
#include "Creature.h"

using namespace std;


Creature::Creature(): distance(10)
{}

void Creature::run() const
{
    cout << "running " << distance << " meters!\n";
}





Wizard::Wizard() : distFactor(3)
{}

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}




Dragon::Dragon() : distFactor(8), DangerFactor(2), FireFactor(8)
{}



void Dragon::fly() const
{
    cout << "flying " << (distFactor * distance) << " meters!\n";
}

void Dragon::Fire() const
{
    cout << "Shooting fire! With a danger factor of:" << (FireFactor * DangerFactor)<< "!\n";
}



Dwarfs::Dwarfs() : distFactor(10), DangerFactor(2), MagicFactor(12), Shortlegs(0.03)
{}



void Dwarfs ::run() const
{
    cout << "Running with shortlegs " << (float)((distFactor * distance) * Shortlegs) << " meters!\n";
}

void Dwarfs::magic() const
{
    cout << "Dwarfs cast magic! With a danger factor of:" << (MagicFactor * DangerFactor)<< "!\n";
}
