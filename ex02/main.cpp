#include <iostream>
using std::string;
using std::cout;
using std::endl;

int main(void)
{
    string str = "HI THIS IS BRAIN";
    string *stringPTR = &str; 
    string &stringREF = str; 

    cout << "address of string:" << &str << endl;
    cout << "address by stringPTR:" << stringPTR << endl;
    cout << "address by stringREF:" << &stringREF << endl;

    cout << "value of string:" << str << endl;
    cout << "value by stringPTR:" << *stringPTR << endl;
    cout << "value by stringREF:" << stringREF << endl;

    return (0);
}
