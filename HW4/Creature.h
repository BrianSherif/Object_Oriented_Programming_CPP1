/*
CH08-320142
a2_p3 .cpp
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


class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;

	private:
		int distFactor;
};


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
