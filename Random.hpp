#ifndef Person_hpp
#define Person_hpp

#include <iostream>
#include <map>

class Random {
    std::map <std::string,int> mapOfParametrs;
    int *arrayOfParametrs;
    std::string life;
    
    
public:
    Random();
    int* getArrayOfParametrs(){return arrayOfParametrs;};
    void setlife(std::string);
    std::string getLife () {return life;};
//    ~Person();
};


#endif /* Person_hpp */
