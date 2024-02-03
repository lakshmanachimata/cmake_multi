

#include "cmn-lib-print.hpp"



CmnLibPrintO::CmnLibPrintO(){
}
CmnLibPrintO::CmnLibPrintO(const CmnLibPrintO&){
}
CmnLibPrintO::~CmnLibPrintO(){
}
void CmnLibPrintO::PrintOneString(std::string str){
    std::cout << "CmnLibPrintO: " << str << std::endl;
}