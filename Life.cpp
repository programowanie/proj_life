#include "Life.hpp"
#include <fstream>
#include <cstring>
#include <string>


Life::Life() {
    ifstream file("Hobbies.txt");
    char * saveptr;
    for (int i=0; i<=8; i++) {
        
        string s;
        getline(file, s, ',');
        }
    }
};

string Life::chooseSchoolLevel(int* param){
    string result;
    if (param[4]>=random(6))
    {
        return schoolLevel[0];
    } else if (param[4]>=random(3))
    {
        return schoolLevel[1];
    } else return schoolLevel[2];
};

string Life::choosePlaceOfBirth(){
    return placeOfBirth[rand()%5];
};

string Life::chooseSchoolFavouriteSubject(int *param1){
    if (desigion(param1[4], random(5), param1[6], random(4))) {
        return schoolFavouriteSubject[0];
    } else if (desigion(param1[4], random(3), param1[6], random(2))){
        return schoolFavouriteSubject[2];
    } else return schoolFavouriteSubject[1];
};

string Life::chooseSocietyPosition(int *param){
    if (desigion(param[2], random(5), param[5], 0)) {
        return schoolSocietyPosition[0];
    } else if (desigion(param[2], random(2), param[5], 0)){
        return schoolSocietyPosition[1];
    } else return schoolSocietyPosition[2];
};


int Life::random(int a){
    return rand()%(a+2)+a;
};

bool Life::desigion(int p1,int r1, int p2, int r2){
    if ((p1>=r1) && (p2>=r2)){
        return true;
    } else return false;
};
