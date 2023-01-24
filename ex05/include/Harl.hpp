#include <string>

using std::string;

enum Harl_E
{
    DEBUG,
    INFO,
    WARNING,
    ERROR,
    NONE,
};

typedef enum Harl_E HarlE;

typedef struct dict
{
    string key;
    HarlE  value;
}   s_dict;


class Harl
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
        HarlE getID(string level);

        //s_dict table;
    public:
        Harl();
        void complain(string level);
};


