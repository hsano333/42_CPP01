#ifndef WEAPON_H
#define WEAPON_H
#include <string>
using std::string;

class Weapon
{
    private:
        string type;
    public:
        Weapon();
        Weapon(string type);
        const string& getType(void);
        void setType(string type);

};
#endif
