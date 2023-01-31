#include "Weapon.hpp"

Weapon::Weapon()
{
    this->type = "";
}

Weapon::Weapon(string type)
{
    this->type = type;
}

Weapon::~Weapon()
{
}

const string& Weapon::getType(void)
{
    return (this->type);
}

void Weapon::setType(string type)
{
    this->type = type;
}
