#include "Replace.hpp"
#include <iostream>

using std::cout;
using std::endl;
using std::ios;

Replace::Replace(string filename)
{
    _filename = filename;
}

Replace::~Replace()
{
    //_filename = filename;
}

bool Replace::open_file(fstream *infile, fstream *outfile)
{
    string out_filename;
    
    infile->open(_filename, ios::in);
    if (infile->is_open())
    {
        cout << "error: can't open" << _filename << endl; 
        return (false);
    }
    out_filename = _filename + ".replace";
    outfile->open(out_filename, ios::out | ios::trunc);
    if (outfile->is_open())
    {
        infile->close();
        cout << "error: can't open" << out_filename << endl; 
        return (false);
    }
    return (true);
}

int Replace::replace(string s1, string s2)
{
    fstream infile;
    fstream outfile;

    if (!open_file(&infile, &outfile))
    {
        cout << s1 << s2 << endl;
        return (EXIT_FAILURE);
    }
    return (EXIT_SUCCESS);
}

