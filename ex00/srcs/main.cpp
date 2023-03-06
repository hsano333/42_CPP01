#include "Zombie.hpp"

/*
#include <stdio.h>
__attribute__((destructor)) void f(void){
    system("leaks BraiiiiiiinnnzzzZ");
}
*/
int main(void)
{
	Zombie zombie("test static");
	zombie.announce();
	Zombie *dynamic = Zombie::newZombie("test dynamic");
	dynamic->announce();
	delete dynamic;
	zombie.randomChump("test random");
	return (0);
}
