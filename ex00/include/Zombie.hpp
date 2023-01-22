#ifndef Zombie_H
#define Zombie_H
#include <string>
using std::string;

class Zombie
{
	private:
		string _name;
    public:
        void announce(void);
        static Zombie* newZombie(string name);
        void randomChump(string name);
        Zombie(string name);
        ~Zombie();
};

#endif
