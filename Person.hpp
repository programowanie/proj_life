#ifndef Person_hpp
#define Person_hpp

#include <iostream>
#include <map>

class Person {
    std::map <std::string,int> mapOfParametrs;
    int *arrayOfParametrs;
    std::string life;
    
    
public:
    Person();
    int* getArrayOfParametrs(){return arrayOfParametrs;};
    void setlife(std::string);
    std::string getLife () {return life;};
    ~Person();
};


#endif /* Person_hpp */
