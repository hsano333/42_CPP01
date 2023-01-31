#ifndef Zombie_H
#define Zombie_H
#include <string>
using std::string;

class Zombie
{
	private:
		string name;
    public:
        void announce(void);
        static Zombie* newZombie(std::string name);
        void randomChump(std::string name);
        Zombie(std::string name);
        ~Zombie();
};

#endif
