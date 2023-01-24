
#include <iostream>
#include <string>
#include <Replace.hpp>

using std::string;
using std::cout;
using std::endl;

int main(int argc, char **argv)
{
    string filename;
    string s1;
    string s2;

    if (argc != 4)
    {
        cout << "invalid argument" << endl;
        cout << "valid argument is <filename> <s1> <s2>" << endl;
        return (EXIT_FAILURE);
    }
    filename = string(argv[1]);
    s1 = string(argv[2]);
    s2 = string(argv[3]);
    Replace rep = Replace(filename);
    return (rep.replace(s1, s2));
}
