#include "Harl.hpp"
#include <iostream>
using std::string;
using std::endl;
using std::cout;

Harl::Harl()
{
}

void Harl::debug(void)
{
    cout << "[ DEBUG ]" << endl;
    cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << endl;
    cout << "I really do!" << endl;
    cout << endl;
}

void Harl::info(void)
{
    cout << "[ INFO ]" << endl;
    cout << "I cannot believe adding extra bacon costs more money." << endl;
    cout << "You didn’t put enough bacon in my burger!" << endl;
    cout << "If you did, I wouldn’t be asking for more!" << endl;
    cout << endl;
}

void Harl::warning(void)
{
    cout << "[ WARNING ]" << endl;
    cout << "I think I deserve to have some extra bacon for free." << endl;
    cout << "I’ve been coming for years whereas you started working here since last month." << endl;
    cout << endl;
}

void Harl::error(void)
{
    cout << "[ ERROR ]" << endl;
    cout << "This is unacceptable! I want to speak to the manager now." << endl;
    cout << endl;
}

void * Harl::getFunc(string level)
{
    const s_dict table[] =
    {
        {"DEBUG", this->debug},
        {"INFO", this->info},
        {"WARNING", this->warning},
        {"ERROR", this->error},
    };

    for (int i = 0; i < (int)NONE; i++)
    {
        if (level == string(table[i].key))
            return (void *)(table[i].func);
    }
    return (NULL);
}

void Harl::complain(string level)
{
    typedef void (*func)(void);
    func exe = (func)getFunc(level);
    if (exe != NULL)
        exe();
    else
        cout << "[ Probably complaining about insignificant problems ]" << endl;
}
