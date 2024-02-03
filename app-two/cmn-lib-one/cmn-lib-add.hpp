

#include <iostream>

using namespace std;

class CmnLibAdd
{
    public:
        CmnLibAdd();
        CmnLibAdd(const CmnLibAdd&);
        ~CmnLibAdd();
        int AddValues(int a, int b);
};