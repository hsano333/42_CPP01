#include <string>
#include <fstream>

using std::string;
using std::fstream;

class Replace
{

    private:
        string  _filename;
        bool open_file(fstream *infile, fstream *outfile);
        //fstream _file;
    public:
        int replace(string s1, string s2);
        Replace(string filename);
        ~Replace();
};
