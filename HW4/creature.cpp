/*
CH08-320142
a4_p2 .cpp
Brian Sherif Nazmi Hanna Nasralla
B.hannanasralla@jacobs-university.de
*/
#include <iostream>

using namespace std;

class Creature {
    public:
        Creature();
        void run() const;

    protected:
        int distance;
};

Creature::Creature(): distance(10)
{}

void Creature::run() const
{
    cout << "running " << distance << " meters!\n";
}

//Wizard


class Wizard : public Creature {
    public:
        Wizard();
        void hover() const;

    private:
        int distFactor;
};

Wizard::Wizard() : distFactor(3)
{}

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

//creature 1

class Dragon : public Creature {
    public:
        Dragon();
        void fly() const;
        void Fire() const;

    private:
        int distFactor;
        int DangerFactor;
        int FireFactor;
};

Dragon::Dragon() : distFactor(8), DangerFactor(2), FireFactor(8)
{}

//methods of creature 1

void Dragon::fly() const
{
    cout << "flying " << (distFactor * distance) << " meters!\n";
}

void Dragon::Fire() const
{
    cout << "Shooting fire! With a danger factor of:" << (FireFactor * DangerFactor)<< "!\n";
}


//creature 2
class Dwarfs : public Creature {
    public:
        Dwarfs();
        void run() const;
        void magic() const;

    private:
        int distFactor;
        int DangerFactor;
        int MagicFactor;
        float Shortlegs;
};

Dwarfs::Dwarfs() : distFactor(10), DangerFactor(2), MagicFactor(12), Shortlegs(0.03)
{}

//methods of creature 2

void Dwarfs ::run() const
{
    cout << "Running with shortlegs " << (float)((distFactor * distance) * Shortlegs) << " meters!\n";
}

void Dwarfs::magic() const
{
    cout << "Dwarfs cast magic! With a danger factor of:" << (MagicFactor * DangerFactor)<< "!\n";
}


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
