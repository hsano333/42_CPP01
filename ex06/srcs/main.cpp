#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    Harl harl;

    if (argc == 2)
    {
        harl.complain(string(argv[1]));
    }
    else
    {
        std::cout << "Invalid argument: input [DEBUG],[INFO],[WARNING], or [ERROR]" << std::endl;
    }
}
