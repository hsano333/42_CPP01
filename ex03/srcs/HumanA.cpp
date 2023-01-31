#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

using std::cout;
using std::endl;

HumanA::HumanA(string name, Weapon& weapon) : weapon(weapon)
{
    this->name = name;
}

HumanA::~HumanA()
{
}

void HumanA::attack(void)
{
    cout << this->weapon.getType();
    cout << " attacks with their ";
    cout << this->name;
    cout << endl;
}
