#ifndef Life_hpp
#define Life_hpp

#include <stdio.h>
#include "iostream"
#include <vector>

using namespace std;

class Life
{
    string placeOfBirth[6] = {"Northen America","Southen America","Africa","Europe","Australia","Asia"};
    string schoolLevel[3] = {"high","mid","low"};
    string schoolFavouriteSubject[3]={"math","languages","chemistry"};
    string schoolSocietyPosition[3]={"leader","shy","nnormal"};
    string hobbies[4][9];/*={
        {"Sport","Swimming","Bodybuilding","Running","Shaping","Fitness","Gymnastics","Aerobics","Badminton"},
        {"Dancing","Ballroom","Club","European","Hustle","Latin American","East","Strip-dance","Bellidans"},
    };*/
    int random (int a);
    bool desigion (int p1,int r1, int p2, int r2);
    
    
public:
    Life();
    string choosePlaceOfBirth ();
    string chooseSchoolLevel (int param[]);
    string chooseSchoolFavouriteSubject(int *param1);
    string chooseSocietyPosition(int param[]);
};

#endif /* Life_hpp */
