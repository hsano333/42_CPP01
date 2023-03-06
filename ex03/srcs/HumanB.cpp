#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

using std::cout;
using std::endl;

HumanB::HumanB(string name)
{
    this->name = name;
    //this->weapon = Weapon("");
    //this->weapon = &0;
}
HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack(void)
{
    if (this->weapon == NULL)
    {
        cout << this->name << "has no Weapon" << endl; 
        return ;
    }
    cout << this->weapon->getType();
    cout << " attacks with their ";
    cout << this->name;
    cout << endl;
}
