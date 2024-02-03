

#include <iostream>

using namespace std;

class CmnLibPrintO
{
    public:
        CmnLibPrintO();
        CmnLibPrintO(const CmnLibPrintO&);
        ~CmnLibPrintO();
        void PrintOneString(std::string str);
};