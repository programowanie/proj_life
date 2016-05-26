#include "Random.hpp"
#include <iostream>
using namespace std;

Random::Random()
{
    srand(time(NULL));
    mapOfParametrs = {
        {"strenght", rand()%10},
        {"perception", rand()%10},
        {"endurance", rand()%10},
        {"charisma", rand()%10},
        {"intelligence", rand()%10},
        {"agility", rand()%10},
        {"luck", rand()%10}
    };
    arrayOfParametrs = new int [7];
    for (auto it = mapOfParametrs.begin(); it != mapOfParametrs.end(); ++it) {
        for (int i=0; i<8; i++) {
            arrayOfParametrs[i]=it->second;
        }
    }
    
}




void Random::setlife(string n)
{
    life+=n;
}