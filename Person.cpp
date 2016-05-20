#include "Person.hpp"
#include <iostream>
using namespace std;

Person::Person()
{
    cout<< "Strenght = ";
    cin>> strenght;
}

int Person::getStrenght()
{
    return strenght;
}

void Person::setlife(string n)
{
    life+=n;
}