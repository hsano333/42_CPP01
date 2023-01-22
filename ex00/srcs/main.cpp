#include "Zombie.hpp"

int main(void)
{
	Zombie zombie("static");
	zombie.announce();
	Zombie *dynamic = Zombie::newZombie("dynamic");
	dynamic->announce();
	delete dynamic;
	zombie.randomChump("random");
	return (0);
}
