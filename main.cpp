#include "Random.hpp"
#include "Life.hpp"
#include <iostream>

int main(int argc, const char * argv[]) {
    Random Person;

    Life life;

    Person.setlife(life.chooseSchoolLevel(Person.getArrayOfParametrs()));

    std::cout << Person.getLife();
}
