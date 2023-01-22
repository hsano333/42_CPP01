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
        void set_name(string name);
        Zombie(string name);
        Zombie();
        Zombie* zombieHorde(int N, std::string name);
        ~Zombie();
};

#endif
