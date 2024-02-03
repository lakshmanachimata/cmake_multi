

#include <iostream>

using namespace std;

class CmnLibPrint
{
    public:
        CmnLibPrint();
        CmnLibPrint(const CmnLibPrint&);
        ~CmnLibPrint();
        void PrintOneString(std::string str);
};