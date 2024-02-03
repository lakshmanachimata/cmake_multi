

#include <iostream>

using namespace std;

class CmnLibPrint
{
    CmnLibPrint();
    CmnLibPrint(const CmnLibPrint&);
    ~CmnLibPrint();
    void PrintOneString(std::string str);
};