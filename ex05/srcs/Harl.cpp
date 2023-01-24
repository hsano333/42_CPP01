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
    cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << endl;
}

void Harl::info(void)
{
    cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << endl;
}

void Harl::warning(void)
{
    cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << endl;
;
}

void Harl::error(void)
{
    cout << "This is unacceptable! I want to speak to the manager now." << endl;
}

HarlE Harl::getID(string level)
{
    HarlE id = NONE;
    const s_dict table[] =
    {
        {"DEBUG", DEBUG},
        {"INFO", INFO},
        {"WARNING", WARNING},
        {"ERROR", ERROR},
    };

    for (int i = 0; i < (int)NONE; i++)
    {
        while (level == string(table[i].key))
        {
            id = table[i].value;
            break;
        }
    }
    return (id);
}

void Harl::complain(string level)
{
    switch (getID(level))
    {
        case DEBUG:
            this->debug();
            break;
        case INFO:
            this->info();
            break;
        case WARNING:
            this->warning();
            break;
        case ERROR:
            this->error();
            break;
        case NONE:
            break;
    }
}
