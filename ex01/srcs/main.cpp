#include "Zombie.hpp"
#include <string>
#include <iostream>

int main(void)
{
    int N = 5;
    Zombie* zombies;

	Zombie zombie("static");
	zombies = zombie.zombieHorde(N, "Horde");

    for (int i=0; i<N;i++)
    {
        std::cout << "announce i=" << i << std::endl;
        zombies[i].announce();
    }

    //for (int i=0; i<N;i++)
    //{
	std::cout << "destroy " << std::endl;
    //delete (zombies[0]);
	std::cout << "end main" << std::endl;
    printf("zombies=%p\n", zombies);
    delete [] zombies;
    //}
	return (0);
}
