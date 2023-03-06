#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

/*
#include <stdio.h>
__attribute__((destructor)) void f(void){
    system("leaks Unnecessary_violence");
}
*/

int main(void)
{

    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }

    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.attack();
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    {
        Weapon *club = new Weapon("Test Weapon");
        HumanB jim("Jim");
        jim.attack();
        jim.setWeapon(*club);
        jim.attack();
        club->setType("some other type of club");
        jim.attack();
        delete club;
    }
}
