#include "Person.hpp"
#include <iostream>
using namespace std;

Person::Person()
{
    mapOfParametrs = {
        {"agility", rand()%10},
        {"charisma", rand()%10},
        {"endurance", rand()%10},
        {"intelligence", rand()%10},
        {"luck", rand()%10},
        {"perception", rand()%10},
        {"strenght", rand()%10}
    };
    arrayOfParametrs = new int [7];
    int i=0;
    for (auto it = mapOfParametrs.begin(); it != mapOfParametrs.end(); ++it) {
        cout<<it->first<<" "<<it->second<<endl;
        arrayOfParametrs[i]=it->second;
        i++;
    }
    
}




void Person::setlife(string n)
{
    life+=n+"\n";
}

Person::~Person(){
    
};