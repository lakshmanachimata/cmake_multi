

#include <iostream>

using namespace std;

class CmnLibPrintT
{
    public:
        CmnLibPrintT();
        CmnLibPrintT(const CmnLibPrintT&);
        ~CmnLibPrintT();
        void PrintTwoStrings(std::string str1, std::string str2);
};