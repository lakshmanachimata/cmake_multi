#include <iostream>
#include "cmn-lib-one/cmn-lib-add.hpp"
#include "cmn-lib-one/cmn-lib-print.hpp"
#include "cmn-lib-two/cmn-lib-mul.hpp"
#include "cmn-lib-two/cmn-lib-print.hpp"

int main() {
    CmnLibAdd cmnLibAdd = CmnLibAdd();
    int addVal = cmnLibAdd.AddValues(1, 2);
    CmnLibPrintO cmnLibPrintO = CmnLibPrintO();
    cmnLibPrintO.PrintOneString(std::to_string(addVal));

    CmnLibMul cmnLibMul = CmnLibMul();
    int mulVal1 = cmnLibMul.MultiplyValues(1, 2);
    int mulVal2 = cmnLibMul.MultiplyValues(3, 4);

    CmnLibPrintT cmnLibPrintT = CmnLibPrintT();
    cmnLibPrintT.PrintTwoStrings(std::to_string(mulVal1),std::to_string(mulVal2));

    return 0;
}