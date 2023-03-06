#ifndef HUMANB_H
#define HUMANB_H
#include <Weapon.hpp>
#include <string>

class HumanB
{
    private:
        Weapon *weapon;
        string name;
    public:
        HumanB(string name);
        ~HumanB();
        void setWeapon(Weapon &weapon);
        void attack();

};
#endif
