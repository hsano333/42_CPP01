#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl harl;

    if (argc == 2)
    {
        harl.complain(string(argv[1]));
    }
    else 
    {
        cout << "" << endl;
    }
}
