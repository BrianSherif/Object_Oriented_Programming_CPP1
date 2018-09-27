/*
CH08-320142
a3_p6 .cpp
Brian Sherif Nazmi Hanna Nasralla
B.hannanasralla@jacobs-university.de
*/
#include <iostream>
class complex {
private:
float R; //real part
float I; //imaginary part

public:
complex();
//Empty constructor
complex (float, float = 0);
//destructor
~ complex();
//setters
void setReal (float newR);
void setImag (float newI);
//getters
float getReal();
float getImag();
//conjugate
void conjugate();
complex add(complex aa);
void print();
complex mul(complex ab);
complex diff(complex ac);
};
