#include "Zombie.hpp"

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
