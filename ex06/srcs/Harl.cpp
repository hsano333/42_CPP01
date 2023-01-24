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
        case INFO:
            this->info();
        case WARNING:
            this->warning();
        case ERROR:
            this->error();
            break;
        case NONE:
            cout << "[ Probably complaining about insignificant problems ]" << endl;
            break;
    }
}
