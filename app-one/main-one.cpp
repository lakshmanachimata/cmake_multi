#include <iostream>
#include "cmn-lib-one/cmn-lib-add.hpp"
#include "cmn-lib-one/cmn-lib-print.hpp"


int main() {
    CmnLibAdd cmnLibAdd = CmnLibAdd();
    int addVal = cmnLibAdd.AddValues(1, 2);
    CmnLibPrint cmnLibPrint = CmnLibPrint();
    cmnLibPrint.PrintOneString(std::to_string(addVal));
    return 0;
}