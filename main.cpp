#include "Person.hpp"
#include "Life.hpp"
#include <iostream>

int main(int argc, const char * argv[]) {
    srand(time(NULL));

    
    Person Person;
    Life Life;
    
    Person.setlife(Life.choosePlaceOfBirth());
    Person.setlife(Life.chooseSchoolLevel(Person.getArrayOfParametrs()));
    Person.setlife(Life.chooseSchoolFavouriteSubject(Person.getArrayOfParametrs()));
    Person.setlife(Life.chooseSocietyPosition(Person.getArrayOfParametrs()));
    
    std::cout<<Person.getLife();
    
    
}
