#ifndef Life_hpp
#define Life_hpp

#include <stdio.h>
#include "iostream"
#include <vector>

using namespace std;

class Life
{
    string *placeOfBirth = new string[6];
    string schoolLevel[3] = {"high","mid","low"};
    string schoolFavouriteSubject[3]={"math","languages","chemistry"};
    string schoolSocietyPosition[3]={"leader","shy"};
    int random (int a, int b);
    
public:
    Life();
    string choosePlaceOfBirth ();
    string chooseSchoolLevel (int param[]);
    string chooseSchoolFavouriteSubject(int param[]);
    string chooseSocietyPosition(int param[]);
    bool make (int n, int a);
};

#endif /* Life_hpp */
