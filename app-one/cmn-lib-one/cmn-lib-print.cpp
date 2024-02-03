

#include "cmn-lib-print.hpp"



CmnLibPrint::CmnLibPrint(){
}
CmnLibPrint::CmnLibPrint(const CmnLibPrint&){
}
CmnLibPrint::~CmnLibPrint(){
}
void CmnLibPrint::PrintOneString(std::string str){
    std::cout << "CmnLibPrint: " << str << std::endl;
}