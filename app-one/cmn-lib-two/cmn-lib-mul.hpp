

#include <iostream>

using namespace std;

class CmnLibMul
{
    public:
        CmnLibMul();
        CmnLibMul(const CmnLibMul&);
        ~CmnLibMul();
        int MultiplyValues(int a, int b);
};