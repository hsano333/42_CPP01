
#include "Zombie.hpp"
#include <iostream>

Zombie* Zombie::zombieHorde(int N, std::string name)
{
    if (N <= 0)
        return NULL;
    Zombie* zombies = new Zombie[N];
    //std::cout << "allocated address:" << &(zombies[0]) << std::endl;
    for (int i = 0; i < N; i++)
    {
        zombies[i].set_name(name);
    }
    return (zombies);
}
