
#include "Zombie.hpp"
#include <iostream>

Zombie* Zombie::zombieHorde(int N, std::string name)
{
    //Zombie* zombies;
    Zombie* zombies = new Zombie[N];
    printf("zombies=%p\n", zombies);
    std::cout << "Horde N=" << N << std::endl;
    for (int i = 0; i < N; i++)
    {
        zombies[i].set_name(name);
    }
    printf("zombies=%p\n", zombies);
    return (zombies);
}
