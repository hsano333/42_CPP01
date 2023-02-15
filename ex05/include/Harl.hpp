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
    void (*func)(void);
}   s_dict;


class Harl
{
    public:
        Harl();
        typedef void (*func)();
        void complain(string level);
    private:
        static void debug(void);
        static void info(void);
        static void warning(void);
        static void error(void);
        void* getFunc(string level);
};
