#include "Life.hpp"

Life::Life() {
    placeOfBirth = {"Northen America","Southen America","Africa","Europe","Australia","Asia"}; //Excess elements in scalar initializer
};


string Life::chooseSchoolLevel(int* param){
    string result;
    if (param[5]>=random(6, 10))
    {
        return schoolLevel[1];
    } else if (param[5]>=random(3, 7))
    {
        return schoolLevel[2];
    } else return schoolLevel[3];
};

string Life::choosePlaceOfBirth(){
    return placeOfBirth[rand()%6];
};

string Life::chooseSchoolFavouriteSubject(int *param){
    
};


int Life::random(int a,int b){
    srand(time(NULL));
    return rand()%b+a;
};
