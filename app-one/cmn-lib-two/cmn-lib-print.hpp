

#include <iostream>

using namespace std;

class CmnLibPrint
{
    CmnLibPrint();
    CmnLibPrint(const CmnLibPrint&);
    ~CmnLibPrint();
    void PrintTwoStrings(std::string str1, std::string str2);
};