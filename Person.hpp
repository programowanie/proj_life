#ifndef Person_hpp
#define Person_hpp

#include <iostream>

class Person {
    
    int strenght;
    int perception;
    int endurance;
    int charisma;
    int intelligence;
    int agility;
    int luck;
    std::string life;
    
    
public:
    Person();
    int getStrenght();
    int getPerception();
    int getEndurance();
    int getCharisma();
    int getIntelligence();
    int getAgility();
    int getLuck();
    void setlife(std::string);
//    ~Person();
};


#endif /* Person_hpp */
