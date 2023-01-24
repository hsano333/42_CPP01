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
    if (!infile->is_open())
    {
        cout << "error: can't open" << _filename << endl; 
        return (false);
    }
    out_filename = _filename + ".replace";
    outfile->open(out_filename, ios::out | ios::trunc);
    if (!outfile->is_open())
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
    size_t  s1_len = s1.length();
    size_t  s2_len = s2.length();
    size_t  buf_len;
    size_t  old_pos = 0;
    size_t  pos = 0;
    //int     read_size = 10;
    //char    buf[read_size];
    string  buf;

    if (!open_file(&infile, &outfile))
    {
        cout << s1 << s2 << s1_len << s2_len << endl;
        return (EXIT_FAILURE);
    }
    cout << "success open_file" << endl;
    while (!infile.eof())
    {
        getline(infile, buf);
        pos = 0;
        old_pos = 0;
        buf_len = buf.length();
        while (pos < buf_len)
        {
            pos = buf.find(s1, pos);
            cout << "s1=" << s1 << endl;
            cout << "pos=" << pos << endl;
            cout << "old_pos=" << old_pos << endl;
            if (pos == string::npos)
            {
                outfile << buf.substr(0, string::npos);
                break;
            }
            //else if (pos > old_pos)
            //else
            {
                outfile << buf.substr(0, pos);
                outfile << s2;
                old_pos = pos;
                pos += s1_len;
            }
            //buf = buf.substr(pos, string::npos);
        }
        if (!infile.eof())
            outfile << endl;
    }
    infile.close();
    outfile.close();
    return (EXIT_SUCCESS);
}

