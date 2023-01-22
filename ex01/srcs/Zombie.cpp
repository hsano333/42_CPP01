#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(string name)
{
    this->_name = name;
}

Zombie::Zombie()
{
}


Zombie::~Zombie(void)
{
    std::cout << _name << " is destroyed" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(string name)
{
    this->_name = name;
}
