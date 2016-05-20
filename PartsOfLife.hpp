#ifndef PartsOfLife_hpp
#define PartsOfLife_hpp

#include <stdio.h>
#include "iostream"

using namespace std;

class PartsOfLife
{
public:
    string writeIntoStringOfLife ();
    string choose (string arr[]) { return arr[rand()%2];}
};

#endif /* PartsOfLife_hpp */
