#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

using std::cout;
using std::endl;

/*
HumanA::HumanA(void)
{
    this->name = "";
    this->weapon = Weapon("");
}
*/

HumanA::HumanA(string name, Weapon& weapon) 
{
    this->name = name;
    this->weapon = &weapon;
}

void HumanA::attack(void)
{
    cout << this->weapon->getType();
    cout << " attacks with their ";
    cout << this->name;
    cout << endl;
}
