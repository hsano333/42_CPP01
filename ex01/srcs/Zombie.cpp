#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(string name)
{
    this->name = name;
}

Zombie::Zombie()
{
}


Zombie::~Zombie(void)
{
    std::cout << name << " is destroyed" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(string name)
{
    this->name = name;
}
