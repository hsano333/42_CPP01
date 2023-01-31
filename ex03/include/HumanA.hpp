#ifndef HUMANA_H
#define HUMANA_H
#include <Weapon.hpp>
#include <string>

class HumanA
{
    private:
        Weapon& weapon;
        string name;
    public:
        HumanA(string name, Weapon& weapon);
        ~HumanA();
        void attack();
};
#endif
