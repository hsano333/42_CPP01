#ifndef HUMANB_H
#define ifndef HUMANB_H
#include <Weapon.hpp>
#include <string>

class HumanB
{
    private:
        Weapon *weapon;
        string name;
    public:
        HumanB(string name);
        void setWeapon(Weapon &weapon);
        void attack();

};
#endif
