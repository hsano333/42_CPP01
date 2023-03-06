#include "Zombie.hpp"
#include <string>
#include <iostream>

/*
#include <stdio.h>
__attribute__((destructor)) void f(void){
    system("leaks Moar_brainz!");
}
*/

int main(void)
{
    {
        int N = 5;
        Zombie* zombies;

        Zombie zombie("static");
        zombies = zombie.zombieHorde(N, "Horde");

        for (int i=0; i<N;i++)
        {
            std::cout << "address:" << &(zombies[i]) << " announce i=" << i << std::endl;
            zombies[i].announce();
        }

        std::cout << "destroy " << std::endl;
        std::cout << "end main" << std::endl;
        delete [] zombies;
    }
    {
        int N = -1;
        Zombie* zombies;

        Zombie zombie("static");
        zombies = zombie.zombieHorde(N, "Horde");

        for (int i=0; i<N;i++)
        {
            std::cout << "address:" << &(zombies[i]) << " announce i=" << i << std::endl;
            zombies[i].announce();
        }

        std::cout << "destroy " << std::endl;
        std::cout << "end main" << std::endl;
    }
	return (0);
}
