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
}

bool Replace::open_file(fstream *infile, fstream *outfile)
{
    string out_filename;
    
    infile->open(_filename, ios::in);
    if (!infile->is_open())
    {
        cout << "error: can't open " << _filename << endl; 
        return (false);
    }
    out_filename = _filename + ".replace";
    outfile->open(out_filename, ios::out | ios::trunc);
    if (!outfile->is_open())
    {
        infile->close();
        cout << "error: can't open " << out_filename << endl; 
        return (false);
    }
    return (true);
}

int Replace::replace(string s1, string s2)
{
    fstream infile;
    fstream outfile;
    size_t  s1_len = s1.length();
    size_t  buf_len;
    size_t  old_pos = 0;
    size_t  pos = 0;
    string  buf;

    if (!open_file(&infile, &outfile))
        return (EXIT_FAILURE);
    while (!infile.eof())
    {
        getline(infile, buf);
        if (s1_len == 0)
            outfile << buf;
        else
        {
            pos = 0;
            old_pos = 0;
            buf_len = buf.length();
            while (pos < buf_len)
            {
                old_pos = pos;
                pos = buf.find(s1, pos);
                if (pos == string::npos)
                {
                    outfile << buf.substr(old_pos, string::npos);
                    cout << "break;" << endl;
                    break;
                }
                outfile << buf.substr(old_pos, pos - old_pos);
                outfile << s2;
                pos += s1_len;
            }
        }
        if (!infile.eof())
            outfile << endl;
    }
    infile.close();
    outfile.close();
    return (EXIT_SUCCESS);
}
