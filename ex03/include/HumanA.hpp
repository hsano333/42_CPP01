#ifndef HUMANA_H
#define HUMANA_H
#include <Weapon.hpp>
#include <string>

class HumanA
{
    private:
        Weapon* weapon;
        string name;
    public:
        //HumanA(void);
        HumanA(string name, Weapon& weapon);
        void attack();
};
#endif
